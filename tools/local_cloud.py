#!/usr/bin/env python3
"""Local replacement for the small cloud surface used by the device.

It intentionally implements only the endpoints observed in firmware:
  POST /api/authV2/panel/device/firmware/query
  POST /api/authV2/device/render/convert
  GET  /dot/firmware/rand_0/1/<firmware>

The local-only patched firmware also accepts shorter aliases:
  POST /fwq
  POST /render

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
FIRMWARE_QUERY_PATHS = {
    "/api/authV2/panel/device/firmware/query",
    "/fwq",
}
RENDER_CONVERT_PATHS = {
    "/api/authV2/device/render/convert",
    "/render",
}


class LocalCloudHandler(BaseHTTPRequestHandler):
    server_version = "Rand0LocalCloud/1.0"

    def _send_json(self, status: int, body: dict) -> None:
        raw = json.dumps(body, ensure_ascii=False, indent=2).encode("utf-8")
        self.send_response(status)
        self.send_header("Content-Type", "application/json; charset=utf-8")
        self.send_header("Cache-Control", "no-store")
        self._send_cors_headers()
        self.send_header("Content-Length", str(len(raw)))
        self.end_headers()
        self.wfile.write(raw)

    def _send_cors_headers(self) -> None:
        self.send_header("Access-Control-Allow-Origin", "*")
        self.send_header("Access-Control-Allow-Methods", "GET, POST, OPTIONS")
        self.send_header("Access-Control-Allow-Headers", "Authorization, Content-Type")

    def _read_json(self) -> dict:
        length = int(self.headers.get("Content-Length") or "0")
        raw = self.rfile.read(length)
        return json.loads(raw.decode("utf-8")) if raw else {}

    @property
    def firmware_path(self) -> Path:
        return Path(self.server.firmware_path)  # type: ignore[attr-defined]

    @property
    def public_base_url(self) -> str:
        scheme = self.server.public_scheme  # type: ignore[attr-defined]
        host = self.server.public_host  # type: ignore[attr-defined]
        return f"{scheme}://{host}"

    def do_OPTIONS(self) -> None:
        self.send_response(204)
        self._send_cors_headers()
        self.send_header("Content-Length", "0")
        self.end_headers()

    def do_GET(self) -> None:
        path = unquote(self.path.split("?", 1)[0])
        if path.startswith("/dot/firmware/rand_0/1/") and path.endswith(".bin"):
            data = self.firmware_path.read_bytes()
            self.send_response(200)
            self.send_header("Content-Type", "application/octet-stream")
            self._send_cors_headers()
            self.send_header("Content-Length", str(len(data)))
            self.end_headers()
            self.wfile.write(data)
            return
        self._send_json(404, {"error": "not found", "path": path})

    def do_POST(self) -> None:
        path = self.path.split("?", 1)[0]
        if path in FIRMWARE_QUERY_PATHS:
            fw = self.firmware_path
            ota_path = f"/dot/firmware/rand_0/1/{fw.name}"
            body = {
                "status": "RELEASED",
                "series": "rand",
                "model": "rand_0",
                "edition": 1,
                "version": "1.2.5-local",
                "needUpdate": True,
                "updateVersion": "hello-world-local",
                "host": self.server.public_host,  # type: ignore[attr-defined]
                "path": ota_path,
                "query": "",
                "size": fw.stat().st_size,
                "url": f"{self.public_base_url}{ota_path}",
                "ota": {
                    "host": self.server.public_host,  # type: ignore[attr-defined]
                    "path": ota_path,
                    "query": "",
                    "url": f"{self.public_base_url}{ota_path}",
                    "sha256": self.server.firmware_sha256,  # type: ignore[attr-defined]
                    "size": fw.stat().st_size,
                },
                "token_seen": self.headers.get("Authorization") == f"Bearer {TOKEN}",
            }
            self._send_json(200, body)
            return

        if path in RENDER_CONVERT_PATHS:
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
    parser.add_argument("--firmware", default="build/firmware_1.2.5_hello_local_only_ota.bin")
    parser.add_argument(
        "--public-host",
        default=None,
        help="host:port advertised to the device; defaults to <host>:<port>",
    )
    parser.add_argument("--scheme", default="http", choices=["http", "https"])
    args = parser.parse_args()

    firmware = Path(args.firmware)
    if not firmware.exists():
        raise SystemExit(f"firmware not found: {firmware}")

    httpd = ThreadingHTTPServer((args.host, args.port), LocalCloudHandler)
    httpd.firmware_path = str(firmware)  # type: ignore[attr-defined]
    httpd.firmware_sha256 = sha256(firmware)  # type: ignore[attr-defined]
    httpd.public_host = args.public_host or f"{args.host}:{args.port}"  # type: ignore[attr-defined]
    httpd.public_scheme = args.scheme  # type: ignore[attr-defined]
    print(f"Local cloud listening on http://{args.host}:{args.port}")
    print(f"Advertised OTA base: {httpd.public_scheme}://{httpd.public_host}")  # type: ignore[attr-defined]
    print(f"Firmware: {firmware} ({httpd.firmware_sha256})")
    httpd.serve_forever()


if __name__ == "__main__":
    main()
