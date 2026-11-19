<img align="right" width="108" alt="OpenThievius icon" src="branding/openthievius.png">

# Sly 3: Honor Among Thieves (PS2) Decompilation

[![OpenThievius](https://img.shields.io/badge/Project-OpenThievius-2a6db5?logo=github&logoColor=white)](https://github.com/OpenThievius/OpenThievius)
[![Discord](https://img.shields.io/badge/Discord-Join%20Community-5865F2?logo=discord&logoColor=white)](https://discord.gg/58HZCCvxHh)
[![Checks](https://github.com/OpenThievius/sly3-decomp/actions/workflows/checks.yml/badge.svg)](https://github.com/OpenThievius/sly3-decomp/actions/workflows/checks.yml)
[![Progress report](https://github.com/OpenThievius/sly3-decomp/actions/workflows/progress.yml/badge.svg)](https://github.com/OpenThievius/sly3-decomp/actions/workflows/progress.yml)
[![Code](https://bytematch.dev/OpenThievius/sly3-decomp.svg?mode=shield&label=Code&measure=matched_code_percent)](https://bytematch.dev/OpenThievius/sly3-decomp)
[![Functions](https://bytematch.dev/OpenThievius/sly3-decomp.svg?mode=shield&label=Functions&measure=matched_functions)](https://bytematch.dev/OpenThievius/sly3-decomp)

A **matching decompilation** of *Sly 3: Honor Among Thieves* (Sucker Punch Productions, 2005) for the PlayStation 2 (`SCUS_974.64`, NTSC-U v1.00), part of **[OpenThievius](https://github.com/OpenThievius/OpenThievius)**, after [sly1-decomp](https://github.com/OpenThievius/sly1-decomp).

The goal is C++ source that, built with the original compiler, gives back a byte-identical copy of the retail executable, with readable names and types throughout. The groundwork is in place: both versions build byte for byte, the compiler is identified, and every C function links at its retail address. Matching has just begun, and help is welcome.

> [!NOTE]
> This repository contains **no game assets, retail executables or disassembly**. To build anything you need your own copy of the game. Please read [`LEGAL.md`](LEGAL.md) before contributing.

---

## Progress

Progress is tracked live on **[bytematch.dev/OpenThievius/sly3-decomp](https://bytematch.dev/OpenThievius/sly3-decomp)**.

<!-- progress:begin (tools/progress.py) -->
| Version | Region | Target | Code | Functions | In the committed report |
|---|---|---|---|---|---|
| v1.00 | NTSC-U (North America) | `SCUS_974.64` | [![Code](https://bytematch.dev/OpenThievius/sly3-decomp.svg?mode=shield&label=Code&measure=matched_code_percent&version=SCUS_974.64)](https://bytematch.dev/OpenThievius/sly3-decomp/SCUS_974.64) | [![Functions](https://bytematch.dev/OpenThievius/sly3-decomp.svg?mode=shield&label=Functions&measure=matched_functions&version=SCUS_974.64)](https://bytematch.dev/OpenThievius/sly3-decomp/SCUS_974.64) | 2,836 of 8,915 functions, 9.47% of code |
| v1.00 | PAL (Europe; En, Fr, De, Es, It, Nl, Pt, Sv, No, Da, Fi) | `SCES_534.09` | [![Code](https://bytematch.dev/OpenThievius/sly3-decomp.svg?mode=shield&label=Code&measure=matched_code_percent&version=SCES_534.09)](https://bytematch.dev/OpenThievius/sly3-decomp/SCES_534.09) | [![Functions](https://bytematch.dev/OpenThievius/sly3-decomp.svg?mode=shield&label=Functions&measure=matched_functions&version=SCES_534.09)](https://bytematch.dev/OpenThievius/sly3-decomp/SCES_534.09) | 2,829 of 8,918 functions, 9.42% of code |

A US function counts when the build links its C and still prints `MATCH`; a PAL function when that same C also builds PAL's bytes at its counterpart (`tools/version_check.py`).
<!-- progress:end -->

NTSC-U is the primary version. PAL (*Sly 3: Honour Among Thieves*) shares its C and builds byte for byte from its own assembly; [`docs/VERSIONS.md`](docs/VERSIONS.md) compares the two. The game is C++ built with SN Systems' GCC 2.95.3, SN BUILD 1.36 ([`docs/TOOLCHAIN.md`](docs/TOOLCHAIN.md)); [`docs/ROADMAP.md`](docs/ROADMAP.md) has what is done and what comes next.

---

## Quick start

### Prerequisites

- Python 3.9 or newer, and git.
- GNU binutils for mips (`brew install mips-linux-gnu-binutils`, or your distribution's `binutils-mips-linux-gnu`).
- [wibo](https://github.com/decompals/wibo) or Wine, to run the Windows compiler.
- Your own disc image: NTSC-U `SCUS-97464`, and PAL `SCES-53409` if you have it.

### Setup and build

1. **Clone the repository:**
   ```sh
   git clone https://github.com/OpenThievius/sly3-decomp.git
   cd sly3-decomp
   ```

2. **Provide your disc:** put the image(s) in `baserom/` (any name), or pass their folder. It prints `ok: us baserom/us/SCUS_974.64 ...` for each version it recognises.
   ```sh
   python3 tools/setup.py            # or: python3 tools/setup.py ~/path/to/discs
   ```

3. **Install the Python tools and split the executables:**
   ```sh
   python3 -m venv venv && venv/bin/pip install -r tools/requirements.txt
   venv/bin/python tools/setup_asm.py --version us
   venv/bin/python tools/setup_asm.py --version eu
   ```

4. **Fetch the compiler:** clone the public ProDG 3.01 mirror outside the repository and link its compiler, and wibo, into the checkout (both links are gitignored):
   ```sh
   git clone https://github.com/AngheloAlf/SN-Systems-ProDG_for_PS2_3.01 ~/toolchains/sn-prodg-3.01
   ln -s ~/toolchains/sn-prodg-3.01/usr/local/sce/ee/gcc toolchain
   ln -s /path/to/wibo wibo
   python3 tools/toolchain.py        # finds both and compiles a test unit: SN BUILD 1.36
   ```

5. **Build and verify:**
   ```sh
   venv/bin/python tools/build.py                 # MATCH: build/us/SCUS_974.64 sha1 5941b787... with N functions from C
   venv/bin/python tools/build.py --version eu    # MATCH: build/eu/SCES_534.09 sha1 f0a74251...
   ```

For more detail:
- [`docs/AGENT_WORKFLOW.md`](docs/AGENT_WORKFLOW.md): the step-by-step matching guide, for people and AI agents.
- [`docs/TOOLCHAIN.md`](docs/TOOLCHAIN.md): the compiler, assembler and flags, and how each was measured.
- [`docs/ROADMAP.md`](docs/ROADMAP.md): what is done and what comes next.
- [`docs/DISC.md`](docs/DISC.md): what the discs hold.
- [`AGENTS.md`](AGENTS.md): the repository layout and every tool's command.

---

## Contributing

Contributions are warmly welcome: matching functions, researching the game's data formats, or improving the tools and documentation.

- Read [`CONTRIBUTING.md`](CONTRIBUTING.md) and [`AGENTS.md`](AGENTS.md) first: they hold the rules, above all that everything is derived from the retail executable and nothing proprietary enters the repository.
- Reserve what you work on in the pinned **[Contributor coordination](https://github.com/OpenThievius/sly3-decomp/issues/1)** issue.
- `python3 tools/todo.py --max-size 400` lists small functions to start with.
- Before a commit, run `python3 -m unittest discover -s tests` and `python3 tests/check_repository.py`.
- Join our **[Discord community](https://discord.gg/58HZCCvxHh)** to discuss progress, ask questions and collaborate.

---

## Credits

This decompilation is our own work, derived from the retail executable alone: no code, names, maps or splits are taken from other Sly projects or from any prototype. [`CREDITS.md`](CREDITS.md) has the details.

- **[sly1-decomp](https://github.com/OpenThievius/sly1-decomp)**: the tools, checks and documents this repository starts from.
- **[OpenRAC](https://github.com/OpenRAC/OpenRAC)**, the sister project of the same maintainers: the repository layout, rules, commit convention, checks and CI, and its knowledge of the EE compilers ([`THIRD_PARTY_NOTICES.md`](THIRD_PARTY_NOTICES.md)).
- **Tooling:**
  - [splat](https://github.com/ethteck/splat), [spimdisasm](https://github.com/Decompollaborate/spimdisasm) and [rabbitizer](https://github.com/Decompollaborate/rabbitizer): splitting and MIPS disassembly.
  - [wibo](https://github.com/decompals/wibo): running the Windows compiler on Linux and macOS.
  - [objdiff](https://github.com/encounter/objdiff): the report format, validated in CI.
  - [ByteMatch](https://bytematch.dev): progress tracking.
  - [AngheloAlf](https://github.com/AngheloAlf): the public PS2 toolchain mirrors.

---

## License

- Everything in this repository is licensed under the [GNU Affero General Public License v3.0 or later](LICENSE), with the scope [`LEGAL.md`](LEGAL.md) explains.
- The repository holds no third-party code beyond what sly1-decomp and OpenRAC lend ([`THIRD_PARTY_NOTICES.md`](THIRD_PARTY_NOTICES.md)) and no proprietary material: no game data, no SDK code or headers, no toolchain.
- *Sly Cooper* is a trademark of Sony Interactive Entertainment. The game was developed by Sucker Punch Productions. This is an unofficial fan project, not affiliated with or endorsed by either.
