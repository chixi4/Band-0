#!/usr/bin/env python3
"""Local replacement for the small cloud surface used by the device.

It intentionally implements only the endpoints observed in firmware:
  POST /api/authV2/panel/device/firmware/query
  POST /api/authV2/device/render/convert
  GET  /dot/firmware/rand_0/1/<firmware>

Use this behind hosts/port forwarding or mitmproxy when demonstrating a
cloud-free workflow. The renderer itself is fully local.
"""

from __future__ import annotations

import argparse
import json
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path
from urllib.parse import unquote

from local_render import convert_json_request


TOKEN = "2782772a1b8f6fb3065c050631185738de5999729682b44095d38f24d405e0e2"


class LocalCloudHandler(BaseHTTPRequestHandler):
    server_version = "Rand0LocalCloud/1.0"

    def _send_json(self, status: int, body: dict) -> None:
        raw = json.dumps(body, ensure_ascii=False, indent=2).encode("utf-8")
        self.send_response(status)
        self.send_header("Content-Type", "application/json; charset=utf-8")
        self.send_header("Cache-Control", "no-store")
        self.send_header("Content-Length", str(len(raw)))
        self.end_headers()
        self.wfile.write(raw)

    def _read_json(self) -> dict:
        length = int(self.headers.get("Content-Length") or "0")
        raw = self.rfile.read(length)
        return json.loads(raw.decode("utf-8")) if raw else {}

    @property
    def firmware_path(self) -> Path:
        return Path(self.server.firmware_path)  # type: ignore[attr-defined]

    def do_GET(self) -> None:
        path = unquote(self.path.split("?", 1)[0])
        if path.startswith("/dot/firmware/rand_0/1/") and path.endswith(".bin"):
            data = self.firmware_path.read_bytes()
            self.send_response(200)
            self.send_header("Content-Type", "application/octet-stream")
            self.send_header("Content-Length", str(len(data)))
            self.end_headers()
            self.wfile.write(data)
            return
        self._send_json(404, {"error": "not found", "path": path})

    def do_POST(self) -> None:
        path = self.path.split("?", 1)[0]
        if path == "/api/authV2/panel/device/firmware/query":
            fw = self.firmware_path
            body = {
                "status": "RELEASED",
                "series": "rand",
                "model": "rand_0",
                "edition": 1,
                "version": "1.2.5-local",
                "needUpdate": True,
                "updateVersion": "hello-world-local",
                "ota": {
                    "path": f"/dot/firmware/rand_0/1/{fw.name}",
                    "sha256": self.server.firmware_sha256,  # type: ignore[attr-defined]
                    "size": fw.stat().st_size,
                },
                "token_seen": self.headers.get("Authorization") == f"Bearer {TOKEN}",
            }
            self._send_json(200, body)
            return

        if path == "/api/authV2/device/render/convert":
            try:
                self._send_json(200, convert_json_request(self._read_json()))
            except Exception as exc:
                self._send_json(400, {"error": str(exc)})
            return

        self._send_json(404, {"error": "not found", "path": path})


def sha256(path: Path) -> str:
    import hashlib

    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--host", default="127.0.0.1")
    parser.add_argument("--port", type=int, default=8088)
    parser.add_argument("--firmware", default="build/firmware_1.2.5_hello_ota.bin")
    args = parser.parse_args()

    firmware = Path(args.firmware)
    if not firmware.exists():
        raise SystemExit(f"firmware not found: {firmware}")

    httpd = ThreadingHTTPServer((args.host, args.port), LocalCloudHandler)
    httpd.firmware_path = str(firmware)  # type: ignore[attr-defined]
    httpd.firmware_sha256 = sha256(firmware)  # type: ignore[attr-defined]
    print(f"Local cloud listening on http://{args.host}:{args.port}")
    print(f"Firmware: {firmware} ({httpd.firmware_sha256})")
    httpd.serve_forever()


if __name__ == "__main__":
    main()
