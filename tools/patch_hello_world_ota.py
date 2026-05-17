#!/usr/bin/env python3
"""Create Hello World demo firmware from the recovered OTA image.

This does not rebuild ESP-IDF code. It performs conservative string patches on
visible UI text and then repairs the ESP image checksum/hash footer.
"""

from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path

from esp32_image import patch_c_string, repair_image_footer


DEFAULT_PATCHES = [
    (b"Rand/0 Pager", b"HELLO WORLD!"),
    (b"Scan to connect", b"HELLO WORLD"),
    (b"Get it running first.", b"HELLO WORLD ON DOT!"),
    (b"Wallpaper Updated", b"HELLO WORLD OK"),
]


def sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--main", default="extracted/main.bin", help="OTA app image to patch")
    parser.add_argument(
        "--factory",
        default="firmware/firmware_1.2.5_factory.bin",
        help="merged factory image used as base for optional patched factory output",
    )
    parser.add_argument("--main-out", default="build/firmware_1.2.5_hello_ota.bin")
    parser.add_argument("--factory-out", default="build/firmware_1.2.5_hello_factory.bin")
    parser.add_argument("--manifest-out", default="build/hello_world_manifest.json")
    args = parser.parse_args()

    main_path = Path(args.main)
    main_out = Path(args.main_out)
    factory_path = Path(args.factory)
    factory_out = Path(args.factory_out)
    manifest_out = Path(args.manifest_out)

    data = main_path.read_bytes()
    patch_counts: dict[str, int] = {}
    for old, new in DEFAULT_PATCHES:
        data, count = patch_c_string(data, old, new)
        patch_counts[old.decode("ascii")] = count

    if not all(count > 0 for count in patch_counts.values()):
        missing = [name for name, count in patch_counts.items() if count == 0]
        raise SystemExit(f"patch target not found: {missing}")

    patched_main = repair_image_footer(data)
    main_out.parent.mkdir(parents=True, exist_ok=True)
    main_out.write_bytes(patched_main)

    factory_info = None
    if factory_path.exists():
        factory = bytearray(factory_path.read_bytes())
        app_offset = 0x10000
        if app_offset + len(patched_main) > len(factory):
            raise SystemExit("patched main image does not fit in factory image")
        factory[app_offset : app_offset + len(patched_main)] = patched_main
        factory_out.parent.mkdir(parents=True, exist_ok=True)
        factory_out.write_bytes(factory)
        factory_info = {
            "path": str(factory_out),
            "size": factory_out.stat().st_size,
            "sha256": sha256(factory_out),
            "patched_app_offset": hex(app_offset),
        }

    manifest = {
        "purpose": "Hello World visible-text OTA demo",
        "source_main": str(main_path),
        "patched_main": {
            "path": str(main_out),
            "size": main_out.stat().st_size,
            "sha256": sha256(main_out),
        },
        "patched_factory": factory_info,
        "patches": [
            {
                "old": old.decode("ascii"),
                "new": new.decode("ascii"),
                "count": patch_counts[old.decode("ascii")],
            }
            for old, new in DEFAULT_PATCHES
        ],
    }
    manifest_out.parent.mkdir(parents=True, exist_ok=True)
    manifest_out.write_text(json.dumps(manifest, indent=2), encoding="utf-8")
    print(json.dumps(manifest, indent=2))


if __name__ == "__main__":
    main()
