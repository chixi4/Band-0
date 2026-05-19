#!/usr/bin/env python3
"""USB control tool for the ADV 2.4G Band-0 bridge.

The ADV firmware exposes a JSON-lines protocol over USB CDC serial. This tool
keeps the Mac on its normal Internet network while ADV talks to Band-0 over
its private 2.4 GHz AP.
"""

from __future__ import annotations

import argparse
import base64
import fcntl
import glob
import hashlib
import json
import os
import sys
import time
from pathlib import Path
from typing import Any

try:
    import serial
    import serial.tools.list_ports
except ImportError as exc:  # pragma: no cover - environment diagnostic
    raise SystemExit(
        "pyserial is required: python3 -m pip install pyserial"
    ) from exc


DEFAULT_BAUD = 115200
DEFAULT_CHUNK = 128


class BridgeError(RuntimeError):
    pass


def sha256_file(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def candidate_ports() -> list[str]:
    ports: list[str] = []
    for info in serial.tools.list_ports.comports():
        ports.append(info.device)
    for pattern in (
        "/dev/cu.usbmodem*",
        "/dev/cu.usbserial*",
        "/dev/cu.wchusbserial*",
        "/dev/cu.SLAB_USBtoUART*",
    ):
        ports.extend(glob.glob(pattern))
    return sorted(dict.fromkeys(ports))


def read_response(ser: serial.Serial, expected_id: int, timeout: float, verbose: bool) -> dict[str, Any]:
    deadline = time.monotonic() + timeout
    while time.monotonic() < deadline:
        raw = ser.readline()
        if not raw:
            continue
        text = raw.decode("utf-8", "replace").strip()
        if not text:
            continue
        if verbose:
            print(f"< {text}", file=sys.stderr)
        if not text.startswith("{"):
            continue
        try:
            msg = json.loads(text)
        except json.JSONDecodeError:
            continue
        if msg.get("id") == expected_id:
            return msg
    raise BridgeError(f"timeout waiting for response id={expected_id}")


class AdvBridge:
    def __init__(self, port: str, baud: int = DEFAULT_BAUD, verbose: bool = False):
        self.port = port
        self.verbose = verbose
        self.seq = 1
        self._lock_file = open(self._lock_path(port), "w")
        fcntl.flock(self._lock_file.fileno(), fcntl.LOCK_EX)
        try:
            self.ser = serial.Serial(port, baudrate=baud, timeout=0.2, write_timeout=3)
            time.sleep(0.25)
            self.ser.reset_input_buffer()
        except Exception:
            fcntl.flock(self._lock_file.fileno(), fcntl.LOCK_UN)
            self._lock_file.close()
            raise

    @staticmethod
    def _lock_path(port: str) -> str:
        safe = "".join(c if c.isalnum() else "_" for c in port)
        return os.path.join("/tmp", f"band0_adv_bridge_{safe}.lock")

    def close(self) -> None:
        try:
            self.ser.close()
        finally:
            fcntl.flock(self._lock_file.fileno(), fcntl.LOCK_UN)
            self._lock_file.close()

    def cmd(self, name: str, timeout: float = 5, **payload: Any) -> dict[str, Any]:
        req = {"id": self.seq, "cmd": name}
        req.update(payload)
        self.seq += 1
        raw = json.dumps(req, separators=(",", ":")).encode("utf-8") + b"\n"
        if self.verbose:
            print(f"> {raw.decode().strip()}", file=sys.stderr)
        self.ser.write(raw)
        self.ser.flush()
        resp = read_response(self.ser, req["id"], timeout=timeout, verbose=self.verbose)
        if not resp.get("ok"):
            raise BridgeError(resp.get("error") or f"{name} failed: {resp}")
        return resp


def probe_port(port: str, baud: int, verbose: bool = False) -> bool:
    try:
        bridge = AdvBridge(port, baud=baud, verbose=verbose)
        try:
            resp = bridge.cmd("ping", timeout=1.5)
            return resp.get("device") == "adv-bridge"
        finally:
            bridge.close()
    except Exception:
        return False


def open_bridge(args: argparse.Namespace) -> AdvBridge:
    if args.port != "auto":
        return AdvBridge(args.port, baud=args.baud, verbose=args.verbose)

    for port in candidate_ports():
        if probe_port(port, args.baud, verbose=False):
            if args.verbose:
                print(f"using {port}", file=sys.stderr)
            return AdvBridge(port, baud=args.baud, verbose=args.verbose)
    raise BridgeError("ADV bridge serial port not found; run: tools/adv_bridge.py ports")


def parse_http_body(resp: dict[str, Any]) -> dict[str, Any]:
    body = resp.get("body")
    if isinstance(body, str):
        try:
            resp["body_json"] = json.loads(body)
        except json.JSONDecodeError:
            pass
    return resp


def print_json(obj: Any) -> None:
    print(json.dumps(obj, ensure_ascii=False, indent=2))


def upload_firmware(bridge: AdvBridge, path: Path, chunk_size: int = DEFAULT_CHUNK) -> dict[str, Any]:
    path = path.resolve()
    if not path.exists():
        raise BridgeError(f"firmware not found: {path}")
    size = path.stat().st_size
    digest = sha256_file(path)

    print(f"uploading {path} ({size} bytes, sha256={digest})")
    bridge.cmd("fw_begin", timeout=8, size=size, sha256=digest)

    sent = 0
    last_pct = -1
    with path.open("rb") as f:
        while True:
            chunk = f.read(chunk_size)
            if not chunk:
                break
            encoded = base64.b64encode(chunk).decode("ascii")
            bridge.cmd("fw_chunk", timeout=8, data=encoded)
            sent += len(chunk)
            pct = int(sent * 100 / size) if size else 100
            if pct != last_pct and (pct % 5 == 0 or pct == 100):
                print(f"  {pct:3d}% ({sent}/{size})")
                last_pct = pct

    resp = bridge.cmd("fw_end", timeout=20)
    print("upload complete")
    return resp


def cmd_ports(_: argparse.Namespace) -> None:
    ports = candidate_ports()
    if not ports:
        print("no serial ports found")
        return
    for port in ports:
        print(port)


def cmd_status(args: argparse.Namespace) -> None:
    bridge = open_bridge(args)
    try:
        print_json(bridge.cmd("status", timeout=4))
    finally:
        bridge.close()


def cmd_set_config(args: argparse.Namespace) -> None:
    bridge = open_bridge(args)
    try:
        payload: dict[str, Any] = {}
        if args.mac_ip:
            payload["mac_ip"] = args.mac_ip
        if args.band_ip:
            payload["band_ip"] = args.band_ip
        print_json(bridge.cmd("set_config", timeout=4, **payload))
    finally:
        bridge.close()


def cmd_upload(args: argparse.Namespace) -> None:
    bridge = open_bridge(args)
    try:
        print_json(upload_firmware(bridge, Path(args.firmware), args.chunk_size))
    finally:
        bridge.close()


def cmd_scan(args: argparse.Namespace) -> None:
    bridge = open_bridge(args)
    try:
        print_json(bridge.cmd("scan", timeout=18))
    finally:
        bridge.close()


def cmd_band_status(args: argparse.Namespace) -> None:
    bridge = open_bridge(args)
    try:
        print_json(parse_http_body(bridge.cmd("band_status", timeout=12)))
    finally:
        bridge.close()


def cmd_band_get(args: argparse.Namespace) -> None:
    bridge = open_bridge(args)
    try:
        print_json(parse_http_body(bridge.cmd("band_get", timeout=args.timeout, path=args.path)))
    finally:
        bridge.close()


def cmd_usage(args: argparse.Namespace) -> None:
    bridge = open_bridge(args)
    try:
        print_json(parse_http_body(bridge.cmd("band_usage", timeout=12)))
    finally:
        bridge.close()


def cmd_push_usage(args: argparse.Namespace) -> None:
    payload = json.loads(Path(args.json_file).read_text()) if args.json_file != "-" else json.load(sys.stdin)
    bridge = open_bridge(args)
    try:
        resp = bridge.cmd("band_post", timeout=12, path="/api/push", payload=payload)
        print_json(parse_http_body(resp))
    finally:
        bridge.close()


def cmd_band_post(args: argparse.Namespace) -> None:
    body: dict[str, Any]
    if args.json_file:
        body = json.loads(Path(args.json_file).read_text()) if args.json_file != "-" else json.load(sys.stdin)
        payload = {"payload": body}
    else:
        payload = {"body": args.body or "{}"}
    bridge = open_bridge(args)
    try:
        resp = bridge.cmd("band_post", timeout=args.timeout, path=args.path, **payload)
        print_json(parse_http_body(resp))
    finally:
        bridge.close()


def cmd_band_reboot(args: argparse.Namespace) -> None:
    bridge = open_bridge(args)
    try:
        resp = bridge.cmd("band_post", timeout=8, path="/api/reboot", body="{}")
        print_json(parse_http_body(resp))
    finally:
        bridge.close()


def cmd_ota_start(args: argparse.Namespace) -> None:
    bridge = open_bridge(args)
    try:
        payload: dict[str, Any] = {"reboot": not args.no_reboot}
        if args.band_ip:
            payload["band_ip"] = args.band_ip
        print_json(parse_http_body(bridge.cmd("ota_start", timeout=15, **payload)))
    finally:
        bridge.close()


def cmd_provision_ota(args: argparse.Namespace) -> None:
    bridge = open_bridge(args)
    try:
        resp = bridge.cmd(
            "provision_ota",
            timeout=35,
            setup_ssid=args.setup_ssid,
            setup_pwd=args.setup_pwd or "",
            reboot=not args.no_reboot,
            timeout_ms=args.timeout_ms,
        )
        print_json(parse_http_body(resp))
    finally:
        bridge.close()


def cmd_install(args: argparse.Namespace) -> None:
    bridge = open_bridge(args)
    try:
        upload_firmware(bridge, Path(args.firmware), args.chunk_size)
        if args.direct:
            payload: dict[str, Any] = {"reboot": True}
            if args.band_ip:
                payload["band_ip"] = args.band_ip
            resp = bridge.cmd("ota_start", timeout=15, **payload)
        else:
            resp = bridge.cmd(
                "provision_ota",
                timeout=35,
                setup_ssid=args.setup_ssid,
                setup_pwd=args.setup_pwd or "",
                reboot=True,
                timeout_ms=args.timeout_ms,
            )
        print_json(parse_http_body(resp))
    finally:
        bridge.close()


def add_common(parser: argparse.ArgumentParser) -> None:
    parser.add_argument("--port", default="auto", help="ADV serial port, or auto")
    parser.add_argument("--baud", type=int, default=DEFAULT_BAUD)
    parser.add_argument("--verbose", action="store_true")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    add_common(parser)
    sub = parser.add_subparsers(dest="cmd", required=True)

    p = sub.add_parser("ports", help="list serial ports")
    p.set_defaults(func=cmd_ports)

    p = sub.add_parser("status", help="show ADV bridge status")
    p.set_defaults(func=cmd_status)

    p = sub.add_parser("set-config", help="set saved bridge IPs")
    p.add_argument("--mac-ip")
    p.add_argument("--band-ip")
    p.set_defaults(func=cmd_set_config)

    p = sub.add_parser("upload", help="upload a Band-0 OTA image to ADV flash")
    p.add_argument("firmware")
    p.add_argument("--chunk-size", type=int, default=DEFAULT_CHUNK)
    p.set_defaults(func=cmd_upload)

    p = sub.add_parser("scan", help="scan nearby 2.4 GHz Wi-Fi networks from ADV")
    p.set_defaults(func=cmd_scan)

    p = sub.add_parser("band-status", help="GET Band-0 /api/status through ADV")
    p.set_defaults(func=cmd_band_status)

    p = sub.add_parser("band-get", help="GET an arbitrary Band-0 HTTP API path through ADV")
    p.add_argument("path")
    p.add_argument("--timeout", type=float, default=12)
    p.set_defaults(func=cmd_band_get)

    p = sub.add_parser("usage", help="GET Band-0 /api/usage through ADV")
    p.set_defaults(func=cmd_usage)

    p = sub.add_parser("push-usage", help="POST Claude usage JSON to Band-0 through ADV")
    p.add_argument("json_file", help="JSON file, or - for stdin")
    p.set_defaults(func=cmd_push_usage)

    p = sub.add_parser("band-post", help="POST to an arbitrary Band-0 HTTP API path through ADV")
    p.add_argument("path")
    p.add_argument("json_file", nargs="?", help="JSON file, or - for stdin")
    p.add_argument("--body", help="raw JSON body if no json_file is supplied")
    p.add_argument("--timeout", type=float, default=12)
    p.set_defaults(func=cmd_band_post)

    p = sub.add_parser("band-reboot", help="POST Band-0 /api/reboot through ADV")
    p.set_defaults(func=cmd_band_reboot)

    p = sub.add_parser("ota-start", help="trigger OTA when Band-0 is already on ADV 2.4G")
    p.add_argument("--band-ip")
    p.add_argument("--no-reboot", action="store_true")
    p.set_defaults(func=cmd_ota_start)

    p = sub.add_parser("provision-ota", help="ADV joins Band-0 Setup and triggers OTA")
    p.add_argument("--setup-ssid", default="Band-0 Setup")
    p.add_argument("--setup-pwd", default="")
    p.add_argument("--timeout-ms", type=int, default=18000)
    p.add_argument("--no-reboot", action="store_true")
    p.set_defaults(func=cmd_provision_ota)

    p = sub.add_parser("install", help="upload firmware, then trigger OTA")
    p.add_argument("firmware")
    p.add_argument("--chunk-size", type=int, default=DEFAULT_CHUNK)
    p.add_argument("--direct", action="store_true", help="Band-0 is already connected to ADV")
    p.add_argument("--band-ip")
    p.add_argument("--setup-ssid", default="Band-0 Setup")
    p.add_argument("--setup-pwd", default="")
    p.add_argument("--timeout-ms", type=int, default=18000)
    p.set_defaults(func=cmd_install)

    args = parser.parse_args()
    try:
        args.func(args)
    except BridgeError as exc:
        raise SystemExit(f"error: {exc}") from exc


if __name__ == "__main__":
    main()
