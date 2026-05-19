#!/usr/bin/env python3
"""Probe the Band-0 Claude Usage BLE GATT service from macOS."""

from __future__ import annotations

import argparse
import asyncio
import json
import sys
import time
from pathlib import Path
from typing import Any


DEVICE_NAME = "Band-0 Usage"
SERVICE_UUID = "cafe1234-0000-1000-8000-00805f9b34fb"
WRITE_UUID = "cafe5678-0000-1000-8000-00805f9b34fb"
STATUS_UUID = "cafe9999-0000-1000-8000-00805f9b34fb"


def load_bleak():
    try:
        from bleak import BleakClient, BleakScanner
    except ImportError as exc:  # pragma: no cover - environment diagnostic
        raise SystemExit("bleak is required: python3 -m pip install bleak") from exc
    return BleakClient, BleakScanner


def demo_payload() -> dict[str, Any]:
    now = int(time.time())
    return {
        "v": 1,
        "cu": 42,
        "cr": 58,
        "ri": "4h 12m",
        "wu": 37,
        "wr": 63,
        "wi": "3d 8h",
        "m": "Claude",
        "d": True,
        "s": "live",
        "age": 0,
        "stale": False,
        "src": "ble-probe",
        "err": "",
        "ts": now,
        "fs": now,
    }


async def find_device(address: str | None, timeout: float):
    _, BleakScanner = load_bleak()
    devices = await BleakScanner.discover(timeout=timeout, return_adv=True)
    for device, adv in devices.values():
        name = device.name or adv.local_name or ""
        if address and device.address.lower() == address.lower():
            return device
        if not address and name == DEVICE_NAME:
            return device
    return None


async def cmd_scan(args: argparse.Namespace) -> None:
    _, BleakScanner = load_bleak()
    devices = await BleakScanner.discover(timeout=args.timeout, return_adv=True)
    matched = False
    for device, adv in devices.values():
        name = device.name or adv.local_name or ""
        if args.all or name == DEVICE_NAME or SERVICE_UUID.lower() in [u.lower() for u in adv.service_uuids]:
            matched = True
            print(json.dumps({
                "name": name,
                "address": device.address,
                "rssi": adv.rssi,
                "service_uuids": adv.service_uuids,
            }, ensure_ascii=False))
    if not matched:
        print("Band-0 Usage not found")


async def connect(args: argparse.Namespace) -> BleakClient:
    BleakClient, _ = load_bleak()
    device = await find_device(args.address, args.timeout)
    if not device:
        raise SystemExit("Band-0 Usage not found; make sure baseline1 is running and BLE is enabled")
    client = BleakClient(device)
    await client.connect(timeout=args.timeout)
    return client


async def cmd_status(args: argparse.Namespace) -> None:
    client = await connect(args)
    try:
        raw = await client.read_gatt_char(STATUS_UUID)
        text = raw.decode("utf-8", "replace")
        try:
            print(json.dumps(json.loads(text), ensure_ascii=False, indent=2))
        except json.JSONDecodeError:
            print(text)
    finally:
        await client.disconnect()


def load_payload(args: argparse.Namespace) -> dict[str, Any]:
    if args.demo:
        return demo_payload()
    if args.json_file == "-":
        return json.load(sys.stdin)
    if args.json_file:
        return json.loads(Path(args.json_file).read_text())
    raise SystemExit("push needs --demo or a JSON file")


async def cmd_push(args: argparse.Namespace) -> None:
    payload = load_payload(args)
    raw = json.dumps(payload, separators=(",", ":")).encode("utf-8")
    if len(raw) > 760:
        raise SystemExit(f"payload too large for baseline BLE path: {len(raw)} bytes")

    client = await connect(args)
    try:
        await client.write_gatt_char(WRITE_UUID, raw, response=True)
        status = await client.read_gatt_char(STATUS_UUID)
        print(status.decode("utf-8", "replace"))
    finally:
        await client.disconnect()


def add_common(parser: argparse.ArgumentParser) -> None:
    parser.add_argument("--address", help="BLE address to use instead of name scan")
    parser.add_argument("--timeout", type=float, default=8)


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest="cmd", required=True)

    scan = sub.add_parser("scan")
    scan.add_argument("--timeout", type=float, default=8)
    scan.add_argument("--all", action="store_true")
    scan.set_defaults(func=cmd_scan)

    status = sub.add_parser("status")
    add_common(status)
    status.set_defaults(func=cmd_status)

    push = sub.add_parser("push")
    add_common(push)
    push.add_argument("json_file", nargs="?")
    push.add_argument("--demo", action="store_true")
    push.set_defaults(func=cmd_push)

    args = parser.parse_args()
    asyncio.run(args.func(args))


if __name__ == "__main__":
    main()
