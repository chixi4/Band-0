#!/usr/bin/env python3
"""
mitmproxy inline script — transparent OTA firmware swap for Dot. / Rand-0.

Usage:
    mitmproxy -s tools/mitm_ota_swap.py --listen-port 8080

Then configure hosts/port-forwarding to route device traffic through mitmproxy:
    dot.mindreset.tech  →  192.168.137.1:443  (mitmproxy listens on 443)
    os-cdn.mindreset.tech  →  192.168.137.1:443

The script:
  1. Intercepts the firmware/query POST response
  2. Changes the `host`, `path`, `url` fields to point to your custom firmware
  3. When the device fetches the firmware binary, serves your modified image
"""

import json
from pathlib import Path
from mitmproxy import http

# ── Configuration ──────────────────────────────────────────────
# Path to the modified firmware binary to serve
CUSTOM_FIRMWARE = Path("build/firmware_1.2.5_hello_ota.bin")

# Your server that hosts the custom firmware
SPOOF_HOST = "192.168.4.2:8088"
SPOOF_PATH = "/dot/firmware/rand_0/1/custom_hello_ota.bin"

# The CDN host we want to intercept
CDN_HOST = "os-cdn.mindreset.tech"
# ──────────────────────────────────────────────────────────────


def request(flow: http.HTTPFlow) -> None:
    """Handle outgoing requests."""
    # If device is downloading from the CDN, redirect to our server
    if CDN_HOST in flow.request.pretty_host:
        # Option A: Redirect to our custom firmware server
        flow.request.host = SPOOF_HOST.split(":")[0]
        flow.request.port = int(SPOOF_HOST.split(":")[1]) if ":" in SPOOF_HOST else 8088
        flow.request.scheme = "http"
        flow.request.path = SPOOF_PATH
        flow.request.host_header = SPOOF_HOST


def response(flow: http.HTTPFlow) -> None:
    """Handle incoming responses."""
    url = flow.request.pretty_url

    # 1. Intercept firmware query response
    if "firmware/query" in url or "/fwq" in url:
        if flow.response.status_code != 200:
            return

        # Read the original JSON response
        try:
            data = json.loads(flow.response.text)
        except (json.JSONDecodeError, ValueError):
            return

        # Override the OTA download URL fields
        if data.get("needUpdate"):
            print(f"[OTA-SWAP] Intercepted firmware query, overriding download URL")
            custom_size = CUSTOM_FIRMWARE.stat().st_size
            custom_sha256 = _sha256(CUSTOM_FIRMWARE)

            # Point the device to download from OUR server
            data["host"] = SPOOF_HOST
            data["path"] = SPOOF_PATH
            data["url"] = f"http://{SPOOF_HOST}{SPOOF_PATH}"
            data["ota"] = {
                "host": SPOOF_HOST,
                "path": SPOOF_PATH,
                "query": "",
                "url": f"http://{SPOOF_HOST}{SPOOF_PATH}",
                "sha256": custom_sha256,
                "size": custom_size,
            }
            data["size"] = custom_size
            data["updateVersion"] = "hello-world-custom"

            flow.response.text = json.dumps(data, indent=2)
            flow.response.headers["Content-Length"] = str(len(flow.response.text))
            print(f"[OTA-SWAP] Firmware redirected to: http://{SPOOF_HOST}{SPOOF_PATH}")

    # 2. Alternatively, intercept firmware BINARY download from CDN
    #    (This handles the case where the device ignores the query response
    #     and directly hits os-cdn.mindreset.tech)
    if CDN_HOST in flow.request.pretty_host and flow.response.status_code == 200:
        ctype = flow.response.headers.get("Content-Type", "")
        if "octet-stream" in ctype or "binary" in ctype or ".bin" in url:
            print(f"[OTA-SWAP] Swapping firmware binary!")
            custom_data = CUSTOM_FIRMWARE.read_bytes()
            flow.response.content = custom_data
            flow.response.headers["Content-Length"] = str(len(custom_data))
            print(f"[OTA-SWAP] Served {len(custom_data)} bytes of custom firmware")


def _sha256(path: Path) -> str:
    import hashlib
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()
