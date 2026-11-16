# The versions

| Key | Disc | Executable | Role |
|---|---|---|---|
| `us` | NTSC-U v1.00, *Sly 3: Honor Among Thieves* | `SCUS_974.64` | primary target |
| `eu` | PAL v1.00, *Sly 3: Honour Among Thieves* (En, Fr, De, Es, It, Nl, Pt, Sv, No, Da, Fi) | `SCES_534.09` | second target |

Every checksum is in [`config/versions.json`](../config/versions.json). The US
target is primary because it is the original release. Other releases (Greatest
Hits, other regions, demo discs) are reported as unknown by `tools/setup.py`.

## The executables

Both retail executables are ELF32 MIPS (R5900, eabi) with entry point `0x100008`
and two `LOAD` segments: the program, and the IOP modules (`.irx`). Their
sections:

| Section | US address | US size | PAL address | PAL size |
|---|---|---:|---|---:|
| `.text` | `0x100000` | `0x1C0250` | `0x100000` | `0x1C08D0` |
| `.vutext` | `0x2C0250` | `0xC540` | `0x2C08D0` | `0xC590` |
| `.rodata` | `0x2CC800` | `0x60224` | `0x2CCE80` | `0x60504` |
| `.data` | `0x32CA80` | `0x3E358` | `0x32D400` | `0x3E458` |
| `.sbss` | `0x36AE00` | `0xB8` | `0x36B880` | `0xB8` |
| `.bss` | `0x36AF00` | `0x1680A0` | `0x36B980` | `0x168CA0` |
| `.stack` | `0x4D3000` | `0x20000` | `0x4D4680` | `0x20000` |
| `.irx` | `0x4F3000` | `0x73FC0` | `0x4F4680` | `0x73FC0` |

The US program starts at file offset 0x1000, PAL's at 0x80. Each also has the
`.DVP.ovlytab`, `.DVP.ovlystrtab` and `.DVP.overlay` sections (VU microcode
overlays, sections 3 to 33), `.reginfo`, and empty `.vudata` and `.vubss`.
Both are stripped: no symbols and no debug information, so every name in this
project is our own. Strings in `.data` name the SDK 3.0 libraries
(`PsIIlibgraph3000`, `PsIIlibsd 3000`).

## How the split handles them

`config/splat/<version>.yaml` splits `.text` into one assembly file, keeps
`.vutext` as binary, disassembles `.rodata`, `.data` and the bss, and copies the
rest of the file (`.irx`, the DVP overlays, `.reginfo`, `.stack`, the section
headers) as it is, as `elf_tail`. Two details make the link equal retail:

- The `main` segment is 8-aligned: `.data` ends 8-aligned in the file and the
  `.irx` data follows at once.
- The bss unit starts at the end of `.data` rounded up to 16 (US `0x36ADE0`,
  PAL `0x36B860`), where the linker places it; its first `0x20` bytes are the
  gap before `.sbss`.

## Functions

| | US | PAL |
|---|---:|---:|
| Functions splat finds in `.text` | 8,915 | 8,918 |
| PAL functions paired by fingerprint | | 8,786 |
| paired by order (same size, other bytes) | | 103 |
| paired by order (other size) | | 18 |
| PAL's own (no US counterpart) | | 11 |

`tools/inventory.py` writes these tables (`config/<version>/functions.tsv`,
`config/eu/map.tsv`).

## The parts of `.text`

`config/<version>/layout.tsv`, provisional:

- **Game code** from `0x100000` to US `0x291DF8` (PAL `0x292498`).
- **Libraries** from there to the end of `.text`: the C library (block copies,
  `rand`, built with the game's compiler), then from about `0x293000` Sony's
  libraries (the kernel's syscall stubs first; 8-byte register saves and tail
  calls, the marks of Sony's own compiler). Just before the C library sits a
  block of small IOP RPC wrappers, counted as game code for now.

Where the game's own code ends exactly is research to do (docs/ROADMAP.md).
