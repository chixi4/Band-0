#!/usr/bin/env python3
"""Flash the Band-0 fixed-offset recovery package.

This script is intentionally explicit about offsets. Do not use the updater
project's generated "idf.py flash" command for the final baseline package,
because that command writes the updater app to 0x10000 instead of 0x150000.
"""

from __future__ import annotations

import argparse
import glob
import hashlib
import os
import subprocess
import sys
from dataclasses import dataclass
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
DEFAULT_PORT = "/dev/cu.usbmodem5B7B0549671"


@dataclass(frozen=True)
class Artifact:
    name: str
    offset: int
    path: Path
    max_size: int


ARTIFACTS = (
    Artifact("bootloader", 0x0000, ROOT / "sdk/build/bootloader/bootloader.bin", 0x8000),
    Artifact("partition", 0x8000, ROOT / "sdk/build/partition_table/partition-table.bin", 0x1000),
    Artifact("otadata", 0xD000, ROOT / "sdk/build/ota_data_initial.bin", 0x2000),
    Artifact("main", 0x10000, ROOT / "sdk/build/Quote_0_ESP8684_IDF.bin", 0x140000),
    Artifact("updater", 0x150000, ROOT / "sdk/updater/build/Quote_0_Updater.bin", 0xA0000),
)


def sha256_file(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as handle:
        for chunk in iter(lambda: handle.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def candidate_pythons() -> list[Path]:
    seen: set[Path] = set()
    candidates: list[Path] = []

    def add(value: str | os.PathLike[str] | None) -> None:
        if not value:
            return
        path = Path(value).expanduser()
        if path.exists() and path not in seen:
            seen.add(path)
            candidates.append(path)

    env_path = os.environ.get("IDF_PYTHON_ENV_PATH")
    if env_path:
        add(Path(env_path) / "bin/python")
    for item in glob.glob(str(Path.home() / ".espressif/python_env/idf*_env/bin/python")):
        add(item)
    add(sys.executable)
    return candidates


def find_esptool_python() -> Path:
    for python in candidate_pythons():
        try:
            result = subprocess.run(
                [str(python), "-m", "esptool", "version"],
                stdout=subprocess.DEVNULL,
                stderr=subprocess.DEVNULL,
                timeout=8,
                check=False,
            )
        except (OSError, subprocess.TimeoutExpired):
            continue
        if result.returncode == 0:
            return python
    raise SystemExit(
        "Could not find a Python environment with esptool. Run:\n"
        "  source /Users/yuookie/esp/esp-idf-v5.5.4/export.sh"
    )


def check_artifacts() -> None:
    print("Band-0 fixed-offset flash package:")
    for art in ARTIFACTS:
        if not art.path.exists():
            raise SystemExit(f"missing {art.name}: {art.path}")
        size = art.path.stat().st_size
        if size > art.max_size:
            raise SystemExit(
                f"{art.name} is too large: 0x{size:x} > 0x{art.max_size:x} ({art.path})"
            )
        free = art.max_size - size
        print(
            f"  0x{art.offset:06x} {art.name:10s} "
            f"0x{size:05x} bytes, free 0x{free:05x}, "
            f"sha256={sha256_file(art.path)}"
        )


def build_command(args: argparse.Namespace, python: Path) -> list[str]:
    cmd = [
        str(python),
        "-m",
        "esptool",
        "--chip",
        "esp32c2",
        "--port",
        args.port,
        "--baud",
        str(args.baud),
        "--before",
        args.before,
        "--after",
        args.after,
        "--connect-attempts",
        str(args.connect_attempts),
    ]
    if args.no_stub:
        cmd.append("--no-stub")
    cmd.extend([
        "write_flash",
        "-z",
        "--flash_mode",
        "dio",
        "--flash_size",
        "2MB",
        "--flash_freq",
        "60m",
    ])
    for art in ARTIFACTS:
        cmd.extend([f"0x{art.offset:x}", str(art.path)])
    return cmd


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--port", default=DEFAULT_PORT, help="CH343 UART port")
    parser.add_argument("--baud", type=int, default=115200, help="flash baud rate")
    parser.add_argument("--before", default="no_reset", choices=("no_reset", "default_reset", "usb_reset"))
    parser.add_argument("--after", default="no_reset", choices=("no_reset", "hard_reset", "soft_reset"))
    parser.add_argument("--connect-attempts", type=int, default=0)
    stub = parser.add_mutually_exclusive_group()
    stub.add_argument("--no-stub", dest="no_stub", action="store_true", default=True,
                      help="use ROM loader directly; slower but more tolerant of weak wiring (default)")
    stub.add_argument("--stub", dest="no_stub", action="store_false",
                      help="upload and use the esptool flasher stub")
    parser.add_argument("--dry-run", action="store_true", help="print checks and command without flashing")
    args = parser.parse_args()

    check_artifacts()
    python = find_esptool_python()
    cmd = build_command(args, python)

    print()
    print("Required wiring before flashing:")
    print("  CH343 GND <-> Band-0 GND")
    print("  CH343 RX  <- Band-0 TX/GPIO20")
    print("  CH343 TX  -> Band-0 RX/GPIO19 through 1K")
    print("  BOOT/GPIO9 -> GND through 10K, then power-cycle Band-0 into ROM download")
    print("  Do not connect CH343 5V/3V3 to Band-0")
    print()
    print("esptool command:")
    print("  " + " ".join(cmd))
    print()

    if args.dry_run:
        return

    completed = subprocess.run(cmd, cwd=ROOT, check=False)
    raise SystemExit(completed.returncode)


if __name__ == "__main__":
    main()
