#!/usr/bin/env python3
"""Generate concise firmware evidence from the recovered ESP32-C2 images."""

from __future__ import annotations

import argparse
import hashlib
import json
import struct
from pathlib import Path

from esp32_image import parse_image_layout


PART_TYPES = {
    0x00: "app",
    0x01: "data",
}

DATA_SUBTYPES = {
    0x00: "ota",
    0x01: "phy",
    0x02: "nvs",
    0x04: "nvs_keys",
    0x40: "custom/wp",
}

APP_SUBTYPES = {
    0x10: "ota_0/main",
    0x11: "ota_1/updater",
}


def sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def parse_partitions(path: Path) -> list[dict]:
    data = path.read_bytes()
    out: list[dict] = []
    for offset in range(0, len(data), 32):
        entry = data[offset : offset + 32]
        if len(entry) < 32:
            break
        magic = struct.unpack_from("<H", entry, 0)[0]
        if magic == 0xEBEB:
            break
        if magic != 0x50AA:
            continue
        p_type = entry[2]
        subtype = entry[3]
        p_offset, size = struct.unpack_from("<II", entry, 4)
        label = entry[12:28].split(b"\0", 1)[0].decode("ascii", errors="replace")
        if p_type == 0x00:
            subtype_name = APP_SUBTYPES.get(subtype, f"0x{subtype:02x}")
        else:
            subtype_name = DATA_SUBTYPES.get(subtype, f"0x{subtype:02x}")
        out.append(
            {
                "label": label,
                "type": PART_TYPES.get(p_type, f"0x{p_type:02x}"),
                "subtype": subtype_name,
                "offset": f"0x{p_offset:05x}",
                "size": f"0x{size:x}",
                "size_bytes": size,
            }
        )
    return out


def image_summary(path: Path) -> dict:
    data = path.read_bytes()
    layout = parse_image_layout(data)
    app_info = {}
    strings = data[:256]
    if b"Quote_0_" in strings or b"Updater" in strings:
        parts = strings.split(b"\0")
        printable = [p.decode("ascii", errors="ignore") for p in parts if len(p) >= 3]
        app_info["header_strings"] = printable[:8]
    return {
        "path": str(path),
        "size": path.stat().st_size,
        "sha256": sha256(path),
        "segments": [
            {"load_addr": f"0x{s.load_addr:08x}", "file_offset": f"0x{s.offset:06x}", "size": f"0x{s.size:x}"}
            for s in layout.segments
        ],
        **app_info,
    }


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--out", default="analysis/firmware_summary.json")
    args = parser.parse_args()

    summary = {
        "flash_addresses": json.loads(Path("extracted/flash_addresses.json").read_text()),
        "partitions": parse_partitions(Path("extracted/partition-table.bin")),
        "images": {
            "bootloader": image_summary(Path("extracted/bootloader.bin")),
            "main": image_summary(Path("extracted/main.bin")),
            "updater": image_summary(Path("extracted/updater.bin")),
        },
        "verified_hashes": {
            "factory": sha256(Path("firmware/firmware_1.2.5_factory.bin")),
            "ota_equals_main": sha256(Path("firmware/firmware_1.2.5_ota.bin")) == sha256(Path("extracted/main.bin")),
            "separate": sha256(Path("firmware/firmware_1.2.5_separate.tgz")),
        },
    }
    out = Path(args.out)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(json.dumps(summary, indent=2), encoding="utf-8")
    print(json.dumps(summary, indent=2))


if __name__ == "__main__":
    main()
