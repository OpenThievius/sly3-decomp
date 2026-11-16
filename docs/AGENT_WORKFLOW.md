# How matching work runs

The whole procedure, for people and AI agents alike. AGENTS.md has the rules; this page has the
steps. It is sly1-decomp's, which follows rac2-decomp's (OpenRAC), adapted to Sly 3.

## The parts

| Tool | What it does |
| --- | --- |
| `python3 tools/todo.py` | the functions still to match, with their size, source file and tags (`leaf`, `calls`, `data`, `rodata`, `float`, `vu`, `jtbl`, `mmi`, `system`, `handwritten`) |
| `python3 tools/todo.py --summary` | how many functions each blocker holds |
| `python3 tools/check.py FILE.cpp FUNC` | compiles one file with its flags and compares one function with retail: `EXACT`, or `DIFFER` with both disassemblies side by side |
| `python3 tools/check.py FILE.cpp FUNC --version eu` | the same function at its PAL counterpart, every address translated |
| `python3 tools/build.py` | the full US build with every C function of `src/` linked in: `MATCH` or `DIFFER` |
| `python3 tools/build.py --version eu` | PAL's build from its assembly: `MATCH` |
| `python3 tools/version_check.py` | every C function of `src/` checked at its PAL counterpart; writes `config/eu/c_status.tsv` |
| `python3 tools/progress.py` | the reports ByteMatch shows (`progress/<version>/report.json`) and the README table |

A function's disassembly is in `asm/us/text.s`, at its `nonmatching func_XXXXXXXX` line
(`grep -n -A80 'nonmatching func_0012B1F8' asm/us/text.s`).

## 1. Coordinate

Before you start, and before you hand work to agents: read the pinned
[Contributor coordination](https://github.com/OpenThievius/sly3-decomp/issues/1) issue, make sure
you have exactly one comment there, and reserve what you will work on in it (AGENTS.md,
"Coordinating work"). At most 500 unfinished functions per contributor, all agents included.

## 2. Pick

Sort by size with `tools/todo.py`, and match by tier:

- **Haiku**: up to 400 bytes, many workers at once.
- **Sonnet**: 401 to 1,000 bytes, and what Haiku gave up on. A function Haiku left within a few
  instructions of retail goes to a Sonnet worker, one function each, with the earlier attempt and
  `tools/check.py --diff` as its start.
- **Opus**: over 1,000 bytes, complex ones, near misses in `nonmatching/`, and leading (the full
  build, landing, the reports).

Start with `--untried --exclude vu,jtbl,mmi,nonc,system,handwritten,fragment`. `vu`, `system` and
`handwritten` are permanent for C (no inline asm: AGENTS.md); `jtbl` needs a jump table placed from
C (docs/ROADMAP.md); a `fragment` is not a whole function (often a function start splat missed:
docs/ROADMAP.md). A `rodata` function is fine: write its constant as a plain literal (a float, or a
string), which the build links at retail's own address (tools/rodata.py; `check.py` compares the
whole literal and prints `EXACT: ... (rodata)`), or read it through an extern at the address
retail loads (`extern f32 D_002CC800[];`). A worker stops at its bound and hands its attempt up a
tier.

## 3. Write C++ until it is EXACT

The game is C++ built by SN Systems' GCC 2.95.3, SN BUILD 1.36 (docs/TOOLCHAIN.md). For each
function:

1. Read its disassembly. Work out the arguments (`$a0`–`$a3`, then `$a4`–`$a7`; floats in `$f12`,
   `$f13`, ...), the return value (`$v0`, `$f0`), the fields it reads (`lw $v0, 0xA4($a0)` is a
   32-bit field at offset 0xA4 of the first argument), the calls it makes and the data it uses.
2. Write a C++ file with the declarations it needs and the function, named as in the disassembly.
   `src/main/00144000.cpp` is a complete example:

   ```cpp
   // SPDX-License-Identifier: AGPL-3.0-or-later
   #include "common.h"

   struct State_147FA8
   {
       u8 pad0[0x50];
       s32 x50;
       u8 pad54[0x94 - 0x54];
       s32 x94;
       u8 pad98[0xA4 - 0x98];
       s32 active;
       s32 xa8;
   };

   void func_00147FA8(State_147FA8* self)
   {
       if (self->active)
       {
           self->xa8 = 0;
           self->x94 = 0;
           self->x50 = 0;
       }
   }
   ```

   - Types are `s8`/`u8` ... `s64`/`u64` and `f32` from `include/common.h`.
   - A field is a member of a struct with padding before it (`u8 pad0[0x50];`).
   - Every type you invent carries the function's address as a suffix (`State_147FA8`), so that
     files merge without clashes.
   - A function it calls is declared with the arguments it is given:
     `void func_001648B8(s32 a, s32 b);`.
   - Data it refers to is `extern` with its address name, in eight digits:
     `extern u8 D_00479B50[];`. Never define a variable.
3. `python3 tools/check.py your.cpp func_00147FA8` until it prints `EXACT`. Read the `*` lines:
   they are the instructions that differ.
4. Then `python3 tools/check.py your.cpp func_00147FA8 --version eu`. PAL usually has the same
   code; `DIFFER` there is worth a note, not a reason to change working US C.

### What usually moves the bytes

Measured on sly1-decomp with SN BUILD 1.14 unless it says otherwise; 1.36 is a later build of the
same compiler and the first functions agree. Confirm, correct and add to this list as you learn.

- **Saves.** Retail saves `$ra` with `sd` and the `$s` registers with `sq`; `move` is `daddu`.
  All of it is what 1.36 does, nothing to fix (measured on Sly 3).
- **Statement order**: stores to one base often come out in the reverse of the source order
  (measured on Sly 3: `func_00147FA8` writes them last to first). When only stores are swapped,
  permute the statements before anything else.
- **A value tested and then returned**: `s32 r = -1; T* p = self->p; if (p) r = p->x; return r;`
  gives retail's single exit with the default in the branch's delay slot, where
  `if (!p) return -1; return p->x;` duplicates the epilogue (measured on Sly 3, `func_00172CE0`).
- **Branch order follows the `if`.** For `if (c) A; B;` the compiler makes `A` the branch and `B`
  the fall-through; `if (c) A; else B;` makes `A` the fall-through, so flip the arms when retail
  branches to it.
- **One load or two.** `p->n++` used as an index loads `p->n` once; writing `p->items[p->n] = v;
  p->n++;` loads it twice.
- **Locals that live across calls** go into `$s0`, `$s1`, ...; a value that is only passed on stays
  in an argument register.
- **Returning the first argument** (`daddu $v0, $a0, $zero`) is a function that returns its
  argument (`func_0012B1F8`), often a C++ object returned by value through a hidden pointer.
- **Type size and sign**: `lb`/`lbu`, `lh`/`lhu` and `lw` tell `s8`/`u8`, `s16`/`u16` and 32 bits
  apart; `slt` against `sltu` tells signed from unsigned compares; `sltiu` against a constant
  means an unsigned compare.
- **Compare operand order** decides the branch's registers: `if (v != p->f)` and `if (p->f != v)`
  give `beq a1,v0` and `beq v0,a1`.
- **`if` against `?:`**: a ternary often becomes `movz`/`movn` and an `if` a branch.
- **Floats**: `$f12`, `$f13` ... are the float arguments, in order, apart from the integer ones. A
  float literal built with `lui`/`ori`/`mtc1` is a plain constant in C (`0x3F19999A` is `0.6f`).
- **Virtual calls**: slot `N` of a vtable is at `N * 4`: `obj->vtbl[7](obj)` for `lw 0x1C`.
- **128-bit and unaligned copies**: a 16-byte copy is `lq`/`sq` only when the type is 16-byte
  aligned (`struct __attribute__((aligned(16))) Quad { s32 a, b, c, d; };`); an 8-byte copy is
  `ldl`/`ldr`/`sdl`/`sdr` when the type is packed. These attributes describe real types and are
  allowed.
- **The frame size** shows the locals: a frame that is off while the body matches usually means
  a missing local. An unused `s32 scratch[4];` adds 16 bytes.
- **Callees take what they read.** Count a callee's parameters from its own disassembly. A
  non-void callee whose result is unused is declared non-void and called with `(void)`.
- **A `u8` return** adds `andi $v0, $v0, 0xff`; when retail has no mask, return `s32`.
- **Struct initialisers** (`Pair p = { a, b };`) call `memset`; assign the fields one by one.
- **Dead loads** in retail are not reproduced by unused locals: note it and move on.
- **What does not move.** A `lui`, `li` or `move` scheduled against a store before a `jal`; a
  pair of `$s` registers swapped; two `$v0`/`$v1` temporaries swapped (`nonmatching/func_00187CB8.cpp`
  is one). After about 25 compiles, record it as NEAR and move on.
- **Which `D_` load is a literal.** A `lui`/`lwc1` pair aimed at `.rodata` (0x2CC800 to 0x32CA80)
  is a constant: write it as a literal, and `check.py` compares it with retail's. The same pair
  aimed at `.data` (from 0x32CA80) or the bss is a variable: `extern f32 D_0034A5F4;`.
- **A function that cannot match for its size.** If the code is byte-identical and the checker
  says retail's function is longer, the function table gives it the size of a function entered
  through a pointer after it. Name that start in `config/<version>/symbol_addrs.txt`, re-run
  `tools/setup_asm.py` and `tools/inventory.py`.
- **Keep each prototype, and each struct with an `__attribute__` in front of it, on one line**:
  `tools/todo.py` reads source files line by line.

## 4. When to stop

Stop when it is not a function (it reads registers it never sets, or has no `jr $ra`; it starts
with a stray `addiu $sp, $sp, +N`), when it is hand-written (a bare busy-wait of `nop`s, a loop in
a delay slot, a jump into another function), when it needs an instruction C cannot ask for
(`sqrt.s`, `max.s`, `min.s`, MMI), when it reads `$t0`–`$t3` as inputs, when three different
wordings give the same wrong bytes, or after about ten compiles without getting closer. If
`check.py` says "the C is N bytes, retail's function M", fix the size first. Put the attempt in
`nonmatching/func_XXXXXXXX.cpp` with a comment at the top saying what still differs, and move on.

## 5. Land

A worker's `EXACT` is not a match: the full build is. The lead (or you, alone):

1. puts each EXACT function into its source file, the 16 KiB window of `src/main/` (game code) or
   `src/lib/` (libraries, config/us/layout.tsv) its address falls in (`tools/todo.py` names it),
   in address order. A callee or global the file already declares keeps that declaration; drop
   duplicates, and never declare one function twice with different parameters;
2. runs `python3 tools/build.py`: it must print `MATCH ... with N functions from C`. A function
   that broke it goes back to `nonmatching/`;
3. runs `python3 tools/version_check.py`, `python3 tools/progress.py`, the tests and
   `python3 tests/check_repository.py`;
4. commits: the matches with what was verified in the body, the regenerated reports in their own
   commit (CONTRIBUTING.md, "Commits"), and opens the pull request;
5. updates its coordination comment: finished functions come off it once they are on `master`.

## Running a team of agents

- The lead reserves the wave's functions in its coordination comment first, then splits them
  between workers: no two workers share a function, and contiguous functions go to one worker,
  since they often belong to one class.
- Workers write in their own folder (`build/swarm/<worker>/`, one `.cpp` per function) and never
  edit `src/`; only the lead lands. Each reports one line per function: `EXACT`, `NEAR` (what
  still differs) or `SKIP` (why).
- Every brief says: the rules of AGENTS.md (plain C++, no per-function flags, nothing from any
  prototype or other projects), the bound (about ten compiles a function), where results go, and
  to leave `src/` alone.
