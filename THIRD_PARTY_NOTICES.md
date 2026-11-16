# Third-party notices

The decompilation holds **no third-party code** and takes none in: everything is written by its
contributors ([LEGAL.md](LEGAL.md#our-own-work-only)). Library code in the retail executable is
decompiled from retail like the rest.

## From sly1-decomp

[sly1-decomp](https://github.com/OpenThievius/sly1-decomp) is OpenThievius's own, by the same
maintainers and under the same licence. Its tools (`tools/`), tests (`tests/`), CI
(`.github/`), `include/common.h` and documents are this repository's starting point, adapted to
Sly 3's executables, splat layout and compiler. What sly1-decomp itself took from OpenRAC is
listed below.

## From OpenRAC

What comes from [OpenRAC](https://github.com/OpenRAC) (LEGAL.md, "OpenRAC"), through
sly1-decomp: written by its maintainers, used here under the AGPL-3.0-or-later.

| Here | Adapted from | What changed |
|---|---|---|
| `AGENTS.md`, `LEGAL.md`, `README.md` | rac3-decomp's files of the same names | rewritten for this game, its versions and its stricter sourcing rules |
| `CONTRIBUTING.md` | OpenRAC's and rac3-decomp's `CONTRIBUTING.md` | the commit and pull request conventions kept; the rules rewritten for this game |
| `tests/check_repository.py` | rac3-decomp's `tests/check_repository.py` (its game data check) | written anew around `tools/proprietary.py`, which adds the SDK, banner and dump checks |
| `.github/workflows/checks.yml` | rac3-decomp's `checks.yml` | this repository's checks |
| `.github/workflows/progress.yml` | rac1-decomp's ByteMatch workflow | this repository's versions |
| `docs/TOOLCHAIN.md` | OpenRAC's `docs/decomp/TOOLCHAINS.md` and `toolchains/README.md` | what is known of SN BUILD 1.36 and where the ProDG 3.01 mirror is, for this game |
| `.gitignore`, `baserom/README.md` | OpenRAC's and rac3-decomp's | this repository's paths |

## Tools

The Python packages in `tools/requirements.txt` (splat64, spimdisasm, rabbitizer, PyYAML) are
installed by each contributor and are not distributed with the repository. The compiler is
proprietary and never part of it ([docs/TOOLCHAIN.md](docs/TOOLCHAIN.md)).

Contributors may draft C locally with [m2c](https://github.com/matt-kempster/m2c) (GPL-3.0) and
[ps2-decomp-assist](https://github.com/Blightwidow/ps2-decomp-assist) (Apache-2.0), run on the
retail executable of their own disc. Neither is distributed with the repository and none of their
code is in it; what lands is C that rebuilds retail's bytes, checked by `tools/build.py`.
