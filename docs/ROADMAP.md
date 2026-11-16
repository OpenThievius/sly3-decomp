# Roadmap

What is set up, what comes next, and what is still to decide. Everything is
derived by this project from the retail executable: no code, names, maps or
splits are taken from other projects or from any prototype.

## Done

- [x] Disc recognition and executable extraction (`tools/setup.py`, `tools/disc.py`)
- [x] Both executables split by splat and built byte for byte from assembly (`tools/build.py`)
- [x] Every function of each version, and PAL's pairing with US (`tools/inventory.py`)
- [x] The compiler identified: SN GCC 2.95.3, SN BUILD 1.36, C++, `-O2 -G0 -fno-exceptions -fno-rtti` ([TOOLCHAIN.md](TOOLCHAIN.md))
- [x] The per-function checker, on US and on PAL (`tools/check.py`)
- [x] C linked into the US build at each function's address (`tools/c_layout.py`), with
  `.rodata` literals linked at retail's address (`tools/rodata.py`)
- [x] The first five functions matched, linked, and checked on PAL
- [x] The ByteMatch reports and their CI (`tools/progress.py`, `.github/workflows/progress.yml`)
- [x] The matching workflow ([AGENT_WORKFLOW.md](AGENT_WORKFLOW.md)) and the coordination issue
- [x] Repository checks and CI that need no game data, with a scan for proprietary material

## Next

1. **Matching**, function by function ([AGENT_WORKFLOW.md](AGENT_WORKFLOW.md)). 8,915 US
   functions; start with the small ones (`tools/todo.py --max-size 400`).
2. **Qualify the compiler further.** Every surprise worth a note goes into
   [AGENT_WORKFLOW.md](AGENT_WORKFLOW.md), "What usually moves the bytes". The rules there were
   measured on sly1-decomp with SN BUILD 1.14; confirm or correct them on 1.36.
3. **Where the game ends and the libraries begin.** The boundary in
   `config/<version>/layout.tsv` is provisional (US `0x291DF8`, the start of the C library).
   Settle it, and the library flags and compiler, from retail's code.
4. **Function starts splat misses.** Functions entered only through a pointer are merged into
   the one before; `tools/check.py` then reports retail's function as longer than the C. Name
   them in `config/<version>/symbol_addrs.txt` as they are found.
5. **Data from C.** Jump tables (`jtbl`), and `.data`, still come from the disassembly.
6. **File boundaries, found in retail**, so the 16 KiB windows of `src/main/` give way to real
   files with names that are ours.
7. **PAL's own code** (`config/eu/map.tsv` rows with no counterpart, `differs` rows of
   `config/eu/c_status.tsv`) as version-specific C.
8. **The disc's data** ([DISC.md](DISC.md)), from the code that reads it.

## Open decisions

- **The assembly macros.** splat writes its own macro files into `include/`
  (gitignored); the build will need macros written by this project instead.
- **The IOP modules and VU overlays** (`.irx`, `.DVP.overlay`) are copied as they are
  (`elf_tail`). Whether, and how, they are split is open.
