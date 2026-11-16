# Credits

sly3-decomp is part of [OpenThievius](https://github.com/OpenThievius/OpenThievius). Its
decompilation is the work of its contributors, derived from the retail executable alone: no
code, names, maps or splits come from other Sly projects or from any prototype
([LEGAL.md](LEGAL.md#our-own-work-only)).

## sly1-decomp

The tools, checks, CI and documents start from
[sly1-decomp](https://github.com/OpenThievius/sly1-decomp)'s, OpenThievius's decompilation of the
first game, adapted to this game's executables and compiler.

## OpenRAC

Both are built on [OpenRAC](https://github.com/OpenRAC/OpenRAC), the sister project of the same
maintainers, and its decompilations, above all
[rac3-decomp](https://github.com/OpenRAC/rac3-decomp): the layout, the rules in AGENTS.md,
LEGAL.md and CONTRIBUTING.md, the commit convention, the repository check and CI, and the
knowledge of SN Systems' and Sony's EE compilers, including which ProDG release holds SN BUILD
1.36. [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md) lists what came from where.

## Tools

Free tools the project runs. They are installed by each contributor and are not part of the
repository.

- [splat](https://github.com/ethteck/splat) and [spimdisasm](https://github.com/Decompollaborate/spimdisasm): splitting and MIPS disassembly.
- [rabbitizer](https://github.com/Decompollaborate/rabbitizer): instruction decoding.
- [wibo](https://github.com/decompals/wibo): runs the Windows compiler on Linux and macOS.
- [objdiff](https://github.com/encounter/objdiff): the report format, validated in CI.
- [ByteMatch](https://bytematch.dev): progress tracking.
- [AngheloAlf](https://github.com/AngheloAlf)'s public mirror of SN Systems' ProDG 3.01 for PS2, which contributors clone outside the repository.
