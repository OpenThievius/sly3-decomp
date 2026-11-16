# The toolchain

The compiler, assembler and linker are proprietary. They are never committed,
and nothing in the repository is copied from them: you supply them, and the
tools find them outside the tree.

## What built the game

**SN Systems' GCC 2.95.3 for the PlayStation 2, SN BUILD 1.36, compiling
C++**, with `-O2 -G0 -fno-exceptions -fno-rtti` (`config/cflags.tsv`),
assembled by the `ee/bin/as.exe` shipped with it.

Measured on 2026-11-16 against six small retail functions of `SCUS_974.64`
(a constructor-like initialiser, three stores under a test, a null-checked
field read, two calls with constant or data-address arguments, and a compare
with a global):

| Compiler | Banner | The six functions |
|---|---|---|
| `2.95.3` of the ProDG 3.01 mirror | 2.95.3 SN BUILD 1.36 | 5 EXACT on US and on PAL: **the one config/cflags.tsv names** |
| `2.95.3` of sce_ps2_sdk_24 | 2.95.3 SN BUILD 1.14 | 3 EXACT: it saves `$ra` with `sq`, retail with `sd` |
| `2.96-ee-001003-1`, `2.95.2` of sce_ps2_sdk_24 | SN BUILD v1.07, v2.74 | 3 EXACT, as 1.14 |
| `2.9-ee-991111` of sce_ps2_sdk_24 | Sony's | none |

The telling sign is the prologue: retail saves `$ra` in 8 bytes (`sd`) and
the saved `$s` registers in 16 (`sq`). SN BUILD 1.14, which built Sly 1, saves
both with `sq`; 1.36 does what retail does. The sixth function,
`func_00187CB8` (`nonmatching/`), differs only in which register holds an
address (`$v1` against retail's `$v0`). The same C is EXACT with `-O1`, but
`-O1` breaks the other five, so the flags stay `-O2` and the C's shape is
still to find.

Still to measure as matching goes on: whether a later SN build (1.37 or up)
fits better, the flags of the libraries, and whether any file uses others.

## Where to get it

Clone AngheloAlf's public mirror of SN Systems' ProDG 3.01 for PS2 outside the
repository, and link its compiler tree and wibo into the checkout (both links
are gitignored):

```sh
git clone https://github.com/AngheloAlf/SN-Systems-ProDG_for_PS2_3.01 ~/toolchains/sn-prodg-3.01
ln -s ~/toolchains/sn-prodg-3.01/usr/local/sce/ee/gcc toolchain
ln -s /path/to/wibo wibo
python3 tools/toolchain.py
```

`tools/toolchain.py` prints `ok: the compiler runs and is SN BUILD 1.36`. In
place of the links, `SLY3_TOOLCHAIN` names the `ee/gcc` directory and
`SLY3_RUNNER` what runs Windows programs (wibo or wine). `SLY3_COMPILER`
names another folder of `lib/gcc-lib/ee/` to try, for exploring only.

OpenRAC's toolchain notes (rac3-decomp's compiler is the same SN BUILD 1.36
from the same mirror) are where this build was found.

## How a file is compiled

`tools/compile.py`, used by `tools/check.py` and the build:

1. `lib/gcc-lib/ee/2.95.3/cpp.exe` preprocesses the file, with `include/`.
2. `cc1plus.exe` compiles it with the file's flags, plus `-ffunction-sections`
   (so the build can place each function at its address).
3. `ee/bin/as.exe` assembles it with `-G0 -O2`, as the compiler driver would.
4. GNU `objcopy` rewrites the object so modern `ld` accepts its symbol table.

The disassembly is assembled with GNU binutils for mips (`mips-linux-gnu-as`,
`-march=r5900 -mabi=eabi -G0`), and everything is linked with
`mips-linux-gnu-ld`.
