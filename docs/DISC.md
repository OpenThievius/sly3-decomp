# The disc

What the two retail discs hold, read with `tools/disc.py`. Nothing here is
taken from anywhere but the discs themselves.

## The file system

| | US (`SCUS-97464`) | PAL (`SCES-53409`) |
|---|---|---|
| Image size | 3,553,755,136 bytes (1,735,232 sectors) | 4,427,055,104 bytes (2,161,648 sectors) |
| `SYSTEM.CNF` | sector 270, 57 bytes: `BOOT2 = cdrom0:\SCUS_974.64;1`, `VER = 1.00`, `VMODE = NTSC` | sector 269, 56 bytes: boots `SCES_534.09`, `VMODE = PAL` |
| Boot executable | `SCUS_974.64`, sector 271, 3,200,076 bytes | `SCES_534.09`, sector 270, 3,198,500 bytes |
| IOP replacement image | `IOPRP300.IMG`, sector 1834, 275,345 bytes | `IOPRP300.IMG`, sector 1832, 275,345 bytes |
| Game data | `SLY3.WAD`, sector 3232, 3,492,583,424 bytes | not in the file system |

- **US** keeps all of its game data in one file the file system lists,
  `SLY3.WAD`.
- **PAL** lists only three files. Its game data (eleven languages) lies on the
  disc past them, outside the file system, so the code must reach it by sector,
  as Sly 1's does.

`IOPRP300.IMG` is the IOP module replacement image of SDK 3.0, as the
executable's library strings suggest (`docs/VERSIONS.md`). The IOP modules the
game loads itself are inside the executable (`.irx`).

## Still to learn

From the code that reads it (docs/ROADMAP.md):

- the format of `SLY3.WAD` and its index, and how PAL's code finds the same
  data by sector;
- each format inside it, which OpenThievius's extractor is written from.
