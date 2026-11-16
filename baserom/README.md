# baserom: your own discs

Put an image of each disc you own here (any file name: an `.iso`, or the
`.img`/`.bin` of a raw CD dump). Everything in this directory except this file
is ignored by git and is never committed or shared ([LEGAL.md](../LEGAL.md)).

```sh
python3 tools/setup.py                  # every image in baserom/
python3 tools/setup.py ~/path/to/discs  # or wherever they are
```

`setup.py` recognises each image by the executable its `SYSTEM.CNF` boots and
that executable's SHA-1, and writes it to `baserom/<version>/`:

| Version | Written to | SHA-1 |
|---|---|---|
| `us` | `baserom/us/SCUS_974.64` | `5941b7877e6bf5dfb8acb2d04a3c5059367f385b` |
| `eu` | `baserom/eu/SCES_534.09` | `f0a74251b4c13f9fa040565db7bef0439ff3cb7e` |

The disc images' own checksums are in [config/versions.json](../config/versions.json).
Other releases (Greatest Hits, other regions, demo discs) are reported as
unknown.
