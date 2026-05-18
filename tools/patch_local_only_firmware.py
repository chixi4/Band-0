#!/usr/bin/env python3
"""Patch the recovered app image so observed network dependencies are local.

This is intentionally a conservative binary patch. It does not move code or
rebuild ESP-IDF; every replacement must fit in the original string slot, then
the ESP image checksum/hash footer is repaired.
"""

from __future__ import annotations

import argparse
import hashlib
import json
from dataclasses import dataclass
from pathlib import Path

from esp32_image import patch_c_string, repair_image_footer


OFFICIAL_FIRMWARE_QUERY = b"https://dot.mindreset.tech/api/authV2/panel/device/firmware/query"
OFFICIAL_CDN_HOST = b"os-cdn.mindreset.tech"
OFFICIAL_OTA_FORMAT = b"https://%s%s%s"
OFFICIAL_RENDER_JS = (
    b"var CONVERT_API='https://dot.mindreset.tech/api/authV2/device/render/convert';"
)
OFFICIAL_NTP_HOSTS = [
    b"ntp.aliyun.com",
    b"time.apple.com",
    b"pool.ntp.org",
]


@dataclass(frozen=True)
class PatchSpec:
    name: str
    old: bytes
    new: bytes
    pad: bytes
    kind: str


def sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def find_offsets(data: bytes, needle: bytes) -> list[int]:
    offsets: list[int] = []
    start = 0
    while True:
        pos = data.find(needle, start)
        if pos < 0:
            return offsets
        offsets.append(pos)
        start = pos + 1


def apply_specs(data: bytes, specs: list[PatchSpec]) -> tuple[bytes, list[dict]]:
    patched = data
    report: list[dict] = []
    for spec in specs:
        before_offsets = find_offsets(patched, spec.old)
        patched, count = patch_c_string(patched, spec.old, spec.new, pad=spec.pad)
        report.append(
            {
                "name": spec.name,
                "kind": spec.kind,
                "old": spec.old.decode("ascii"),
                "new": spec.new.decode("ascii"),
                "pad": "NUL" if spec.pad == b"\x00" else repr(spec.pad.decode("ascii")),
                "count": count,
                "main_offsets": [hex(offset) for offset in before_offsets],
            }
        )
    return patched, report


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--main", default="extracted/main.bin", help="OTA app image to patch")
    parser.add_argument(
        "--factory",
        default="firmware/firmware_1.2.5_factory.bin",
        help="merged factory image used as base for optional patched factory output",
    )
    parser.add_argument("--main-out", default="build/firmware_1.2.5_local_only_ota.bin")
    parser.add_argument("--factory-out", default="build/firmware_1.2.5_local_only_factory.bin")
    parser.add_argument("--manifest-out", default="build/local_only_manifest.json")
    parser.add_argument(
        "--firmware-query-url",
        default="http://192.168.4.2:8088/fwq",
        help="local firmware-query URL visible to the device",
    )
    parser.add_argument(
        "--cdn-host",
        default="192.168.4.2:8088",
        help="host:port used when the device constructs the OTA download URL",
    )
    parser.add_argument(
        "--render-url",
        default="http://127.0.0.1:8088/render",
        help="local render endpoint used by the embedded browser UI",
    )
    parser.add_argument(
        "--ntp-host",
        default="192.168.4.2",
        help="local NTP host used to replace public NTP servers",
    )
    args = parser.parse_args()

    specs = [
        PatchSpec(
            name="firmware_query_endpoint",
            old=OFFICIAL_FIRMWARE_QUERY,
            new=args.firmware_query_url.encode("ascii"),
            pad=b"\x00",
            kind="C string",
        ),
        PatchSpec(
            name="ota_cdn_host",
            old=OFFICIAL_CDN_HOST,
            new=args.cdn_host.encode("ascii"),
            pad=b"\x00",
            kind="C string",
        ),
        PatchSpec(
            name="ota_url_scheme",
            old=OFFICIAL_OTA_FORMAT,
            new=b"http://%s%s%s",
            pad=b"\x00",
            kind="printf format",
        ),
        PatchSpec(
            name="browser_render_endpoint",
            old=OFFICIAL_RENDER_JS,
            new=f"var CONVERT_API='{args.render_url}';".encode("ascii"),
            pad=b" ",
            kind="embedded JS",
        ),
    ]
    specs.extend(
        PatchSpec(
            name=f"ntp_server_{idx}",
            old=old_host,
            new=args.ntp_host.encode("ascii"),
            pad=b"\x00",
            kind="C string",
        )
        for idx, old_host in enumerate(OFFICIAL_NTP_HOSTS, start=1)
    )

    for spec in specs:
        if len(spec.new) > len(spec.old):
            raise SystemExit(
                f"{spec.name} replacement is too long: {len(spec.new)} > {len(spec.old)}"
            )

    main_path = Path(args.main)
    main_out = Path(args.main_out)
    factory_path = Path(args.factory)
    factory_out = Path(args.factory_out)
    manifest_out = Path(args.manifest_out)

    source_main = main_path.read_bytes()
    patched_data, patch_report = apply_specs(source_main, specs)
    missing = [item["name"] for item in patch_report if item["count"] == 0]
    if missing:
        raise SystemExit(f"patch target not found: {missing}")

    patched_main = repair_image_footer(patched_data)
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
        "purpose": "Local-only cloud dependency patch",
        "source_main": str(main_path),
        "patched_main": {
            "path": str(main_out),
            "size": main_out.stat().st_size,
            "sha256": sha256(main_out),
        },
        "patched_factory": factory_info,
        "address_note": "Ghidra import addresses are +0x10000; patch offsets here are raw main.bin offsets.",
        "patches": patch_report,
    }
    manifest_out.parent.mkdir(parents=True, exist_ok=True)
    manifest_out.write_text(json.dumps(manifest, indent=2), encoding="utf-8")
    print(json.dumps(manifest, indent=2))


if __name__ == "__main__":
    main()
