#!/usr/bin/env python3
"""Continuously probe ESP32-C2 ROM UART sync while finding RX/GPIO19."""

from __future__ import annotations

import argparse
import os
import re
import subprocess
import sys
import time
from pathlib import Path


def beep() -> None:
    try:
        subprocess.run(["osascript", "-e", "beep 3"], check=False,
                       stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    except Exception:
        pass


def notify(message: str) -> None:
    try:
        subprocess.run([
            "osascript",
            "-e",
            f'display notification "{message}" with title "Band-0 RX found"',
        ], check=False, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    except Exception:
        pass


def run_once(args: argparse.Namespace, attempt: int) -> tuple[bool, str]:
    cmd = [
        sys.executable,
        "-m",
        "esptool",
        "--chip",
        "esp32c2",
        "--port",
        args.port,
        "--baud",
        str(args.baud),
        "--before",
        "no_reset",
        "--after",
        "no_reset",
        "chip_id",
    ]
    proc = subprocess.run(
        cmd,
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        timeout=args.timeout,
    )
    out = proc.stdout
    ok = proc.returncode == 0 and (
        "Chip is" in out or "MAC:" in out or re.search(r"Chip ID:|Crystal is", out)
    )
    prefix = f"[{time.strftime('%H:%M:%S')}] attempt {attempt}: "
    if ok:
        return True, prefix + "CONNECTED\n" + out
    last = ""
    for line in out.splitlines()[::-1]:
        if line.strip():
            last = line.strip()
            break
    return False, prefix + (last or f"failed rc={proc.returncode}")


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--port", default="/dev/cu.usbmodem5B7B0549671")
    parser.add_argument("--baud", type=int, default=115200)
    parser.add_argument("--interval", type=float, default=2.0)
    parser.add_argument("--timeout", type=float, default=4.0)
    parser.add_argument("--log", default="logs/rx_esptool_probe.log")
    parser.add_argument("--keep-going", action="store_true",
                        help="keep probing after a successful connection")
    args = parser.parse_args()

    log_path = Path(args.log)
    log_path.parent.mkdir(parents=True, exist_ok=True)
    log_path.write_text("", encoding="utf-8")

    print("Band-0 RX/GPIO19 esptool probe")
    print(f"Port: {args.port}")
    print("Keep BOOT/GPIO9 pulled down through 10K, then power-cycle Band-0.")
    print("Move only CH343 TX -> 1K -> candidate RX pad.")
    if args.keep_going:
        print("Keep-going mode: successful connections are logged, then probing continues.\n")
    else:
        print("This loop stops automatically once esptool connects.\n")

    attempt = 1
    success_count = 0
    while True:
        try:
            ok, msg = run_once(args, attempt)
        except subprocess.TimeoutExpired:
            ok, msg = False, f"[{time.strftime('%H:%M:%S')}] attempt {attempt}: timeout"
        except KeyboardInterrupt:
            print("\nStopped.")
            return 130
        except Exception as exc:
            ok, msg = False, f"[{time.strftime('%H:%M:%S')}] attempt {attempt}: {exc}"

        print(msg)
        with log_path.open("a", encoding="utf-8") as f:
            f.write(msg)
            f.write("\n")

        if ok:
            success_count += 1
            beep()
            notify(f"esptool connected ({success_count}). Current candidate is RX/GPIO19.")
            (log_path.parent / "rx_found.txt").write_text(msg, encoding="utf-8")
            if not args.keep_going:
                return 0

        attempt += 1
        time.sleep(args.interval)


if __name__ == "__main__":
    raise SystemExit(main())
