#!/usr/bin/env python3
"""HTTPS OTA responder for unmodified Band-0 firmware MITM tests.

The official firmware queries:
  https://dot.mindreset.tech/api/authV2/panel/device/firmware/query

and then builds a download URL under:
  https://os-cdn.mindreset.tech/<path>

When ADV DNS redirects those hosts to the Mac, this server listens on 443 and
serves both the forced update JSON and the firmware binary.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import ssl
import subprocess
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path
from urllib.parse import unquote


QUERY_PATH = "/api/authV2/panel/device/firmware/query"
CDN_HOST = "os-cdn.mindreset.tech"
CERT_HOSTS = (
    "dot.mindreset.tech",
    "os-cdn.mindreset.tech",
    "mindreset.tech",
    "www.mindreset.tech",
)


class OtaHandler(BaseHTTPRequestHandler):
    server_version = "Band0HttpsOta/1.0"

    @property
    def firmware_path(self) -> Path:
        return Path(self.server.firmware_path)  # type: ignore[attr-defined]

    @property
    def firmware_name(self) -> str:
        return self.firmware_path.name

    @property
    def ota_path(self) -> str:
        return f"/dot/firmware/rand_0/1/{self.firmware_name}"

    def log_message(self, fmt: str, *args: object) -> None:
        host = self.headers.get("Host", "-")
        print(f"{self.address_string()} host={host} {fmt % args}", flush=True)

    def _send_json(self, status: int, body: dict) -> None:
        raw = json.dumps(body, ensure_ascii=False, separators=(",", ":")).encode("utf-8")
        self.send_response(status)
        self.send_header("Content-Type", "application/json; charset=utf-8")
        self.send_header("Cache-Control", "no-store")
        self.send_header("Content-Length", str(len(raw)))
        self.end_headers()
        self.wfile.write(raw)

    def _send_binary(self, data: bytes) -> None:
        self.send_response(200)
        self.send_header("Content-Type", "application/octet-stream")
        self.send_header("Cache-Control", "no-store")
        self.send_header("Content-Length", str(len(data)))
        self.send_header("X-Band0-OTA", "1")
        self.end_headers()
        self.wfile.write(data)

    def do_POST(self) -> None:
        path = self.path.split("?", 1)[0]
        length = int(self.headers.get("Content-Length") or "0")
        if length:
            self.rfile.read(length)

        if path != QUERY_PATH:
            self._send_json(404, {"error": "not found", "path": path})
            return

        fw = self.firmware_path
        size = fw.stat().st_size
        digest = sha256(fw)
        url = f"https://{CDN_HOST}{self.ota_path}"
        body = {
            "status": "RELEASED",
            "series": "rand",
            "model": "rand_0",
            "edition": 1,
            "version": "1.2.5",
            "needUpdate": True,
            "updateVersion": self.server.update_version,  # type: ignore[attr-defined]
            "host": CDN_HOST,
            "path": self.ota_path,
            "query": "",
            "size": size,
            "sha256": digest,
            "url": url,
            "ota": {
                "host": CDN_HOST,
                "path": self.ota_path,
                "query": "",
                "size": size,
                "sha256": digest,
                "url": url,
            },
        }
        print(f"[OTA-HTTPS] forced update: {url} size={size} sha256={digest}", flush=True)
        self._send_json(200, body)

    def do_GET(self) -> None:
        path = unquote(self.path.split("?", 1)[0])
        if path.endswith(".bin"):
            data = self.firmware_path.read_bytes()
            print(f"[OTA-HTTPS] serving {self.firmware_path} for {path}", flush=True)
            self._send_binary(data)
            return

        if path == "/":
            self._send_json(200, {"ok": True, "firmware": str(self.firmware_path), "ota_path": self.ota_path})
            return

        self._send_json(404, {"error": "not found", "path": path})


def sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def ensure_cert(cert: Path, key: Path) -> None:
    if cert.exists() and key.exists():
        return

    cert.parent.mkdir(parents=True, exist_ok=True)
    san = ",".join(f"DNS:{host}" for host in CERT_HOSTS)
    subprocess.run(
        [
            "openssl",
            "req",
            "-x509",
            "-newkey",
            "rsa:2048",
            "-sha256",
            "-days",
            "14",
            "-nodes",
            "-keyout",
            str(key),
            "-out",
            str(cert),
            "-subj",
            "/CN=dot.mindreset.tech",
            "-addext",
            f"subjectAltName={san}",
        ],
        check=True,
    )


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--host", default="0.0.0.0")
    parser.add_argument("--port", type=int, default=443)
    parser.add_argument("--firmware", default="sdk/build/Quote_0_ESP8684_IDF.bin")
    parser.add_argument("--cert", default="logs/mitm_ota.crt")
    parser.add_argument("--key", default="logs/mitm_ota.key")
    parser.add_argument("--update-version", default="claude-usage-local")
    args = parser.parse_args()

    firmware = Path(args.firmware)
    if not firmware.exists():
        raise SystemExit(f"firmware not found: {firmware}")

    cert = Path(args.cert)
    key = Path(args.key)
    ensure_cert(cert, key)

    httpd = ThreadingHTTPServer((args.host, args.port), OtaHandler)
    httpd.firmware_path = str(firmware)  # type: ignore[attr-defined]
    httpd.update_version = args.update_version  # type: ignore[attr-defined]

    ctx = ssl.SSLContext(ssl.PROTOCOL_TLS_SERVER)
    ctx.load_cert_chain(certfile=cert, keyfile=key)
    httpd.socket = ctx.wrap_socket(httpd.socket, server_side=True)

    print(f"HTTPS OTA listening on https://{args.host}:{args.port}", flush=True)
    print(f"Firmware: {firmware} ({sha256(firmware)})", flush=True)
    print(f"Serving query path: {QUERY_PATH}", flush=True)
    print(f"Serving CDN host: {CDN_HOST}", flush=True)
    httpd.serve_forever()


if __name__ == "__main__":
    main()
