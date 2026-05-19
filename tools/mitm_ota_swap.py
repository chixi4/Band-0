#!/usr/bin/env python3
"""mitmproxy inline script: force official firmware checks to install our OTA.

Usage:
    MITM_CUSTOM_FIRMWARE=build/firmware_1.2.5_hello_local_only_ota.bin \
      mitmproxy -s tools/mitm_ota_swap.py --mode regular --listen-port 8080

Route the device's HTTPS traffic through mitmproxy by router transparent proxy,
Wi-Fi hotspot NAT rules, or a test DNS/gateway setup. The target device must be
your own lab device.

The script:
  1. Intercepts the firmware/query JSON response.
  2. Forces needUpdate=true and points the returned path to a custom OTA image.
  3. Serves the custom OTA directly when the device asks os-cdn.mindreset.tech.
"""

from __future__ import annotations

import hashlib
import json
import os
from pathlib import Path
from mitmproxy import http


CUSTOM_FIRMWARE = Path(
    os.environ.get("MITM_CUSTOM_FIRMWARE", "build/firmware_1.2.5_hello_local_only_ota.bin")
)
UPDATE_VERSION = os.environ.get("MITM_UPDATE_VERSION", "mitm-custom-local")
CDN_HOST = "os-cdn.mindreset.tech"
QUERY_MARKERS = (
    "firmware/query",
    "/api/authV2/panel/device/firmware/query",
)


def _firmware_path() -> str:
    return f"/dot/firmware/rand_0/1/{CUSTOM_FIRMWARE.name}"


def request(flow: http.HTTPFlow) -> None:
    """Serve the custom binary without depending on the real CDN."""
    if flow.request.pretty_host != CDN_HOST:
        return
    if not flow.request.path.endswith(".bin"):
        return

    if not CUSTOM_FIRMWARE.exists():
        flow.response = http.Response.make(500, f"custom firmware not found: {CUSTOM_FIRMWARE}\n")
        return

    custom_data = CUSTOM_FIRMWARE.read_bytes()
    flow.response = http.Response.make(
        200,
        custom_data,
        {
            "Content-Type": "application/octet-stream",
            "Content-Length": str(len(custom_data)),
            "Cache-Control": "no-store",
            "X-MITM-OTA-Swap": "1",
        },
    )
    print(f"[OTA-SWAP] served {CUSTOM_FIRMWARE} for {flow.request.pretty_url}")


def response(flow: http.HTTPFlow) -> None:
    """Patch firmware-query JSON so original firmware enters updater."""
    url = flow.request.pretty_url

    if not any(marker in url for marker in QUERY_MARKERS):
        return
    if flow.response.status_code != 200:
        return
    if not CUSTOM_FIRMWARE.exists():
        print(f"[OTA-SWAP] custom firmware not found: {CUSTOM_FIRMWARE}")
        return

    try:
        data = json.loads(flow.response.text)
    except (json.JSONDecodeError, ValueError):
        print("[OTA-SWAP] firmware query was not JSON; left unchanged")
        return

    custom_size = CUSTOM_FIRMWARE.stat().st_size
    custom_sha256 = _sha256(CUSTOM_FIRMWARE)
    custom_path = _firmware_path()

    _patch_update_object(data, custom_path, custom_size, custom_sha256)

    raw = json.dumps(data, ensure_ascii=False, separators=(",", ":")).encode("utf-8")
    flow.response.content = raw
    flow.response.headers["Content-Type"] = "application/json; charset=utf-8"
    flow.response.headers["Content-Length"] = str(len(raw))
    flow.response.headers["Cache-Control"] = "no-store"
    flow.response.headers["X-MITM-OTA-Swap"] = "1"
    print(f"[OTA-SWAP] forced update path https://{CDN_HOST}{custom_path}")


def _patch_update_object(data: dict, custom_path: str, size: int, digest: str) -> None:
    """Patch known response shapes without assuming the exact official schema."""
    data["needUpdate"] = True
    data["version"] = data.get("version") or "1.2.5"
    data["updateVersion"] = UPDATE_VERSION
    data["host"] = CDN_HOST
    data["path"] = custom_path
    data["query"] = ""
    data["size"] = size
    data["sha256"] = digest
    data["url"] = f"https://{CDN_HOST}{custom_path}"

    ota = data.get("ota")
    if not isinstance(ota, dict):
        ota = {}
        data["ota"] = ota
    ota.update(
        {
            "host": CDN_HOST,
            "path": custom_path,
            "query": "",
            "size": size,
            "sha256": digest,
            "url": f"https://{CDN_HOST}{custom_path}",
        }
    )

    # Some APIs wrap payloads under data/result. Patch those too if present.
    for key in ("data", "result"):
        child = data.get(key)
        if isinstance(child, dict):
            _patch_update_object(child, custom_path, size, digest)


def _sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()
