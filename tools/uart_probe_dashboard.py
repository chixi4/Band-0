#!/usr/bin/env python3
"""Local UART probe dashboard.

This helper is intentionally read-only: it opens the USB-UART port and shows
whether bytes are arriving while probing unknown TX pads.
"""

from __future__ import annotations

import argparse
import html
import json
import os
import re
import threading
import time
from collections import deque
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from typing import Deque

import serial


class ProbeState:
    def __init__(self) -> None:
        self.lock = threading.Lock()
        self.started = time.time()
        self.last_rx = 0.0
        self.total_bytes = 0
        self.last_hex = ""
        self.window: Deque[int] = deque(maxlen=2048)
        self.tail: Deque[str] = deque(maxlen=80)
        self.boot_events: Deque[dict] = deque(maxlen=12)
        self.scan_text = ""
        self._seen_boot_offsets: set[int] = set()
        self.error = ""
        self.port = ""
        self.baud = 115200
        self.raw_log = ""

    def add_bytes(self, data: bytes) -> None:
        now = time.time()
        text = data.decode("utf-8", errors="replace")
        with self.lock:
            self.last_rx = now
            self.total_bytes += len(data)
            self.last_hex = data[-64:].hex(" ")
            self.window.extend(data)
            self.scan_text = (self.scan_text + text)[-65536:]
            self._update_boot_events(now)
            for line in text.replace("\r", "\n").split("\n"):
                if line:
                    self.tail.append(line[-220:])

    def _update_boot_events(self, now: float) -> None:
        for match in re.finditer(r"rst:[^\r\n]*boot:0x([0-9a-fA-F]+)[^\r\n]*", self.scan_text):
            offset = match.start()
            if offset in self._seen_boot_offsets:
                continue
            self._seen_boot_offsets.add(offset)
            mode = match.group(1).lower()
            line = match.group(0)
            normal_spi = "SPI_FAST_FLASH_BOOT" in line or mode == "c"
            self.boot_events.append({
                "ts": now,
                "mode": f"0x{mode}",
                "line": line,
                "normal_spi": normal_spi,
            })

    def set_error(self, error: str) -> None:
        with self.lock:
            self.error = error

    def snapshot(self) -> dict:
        now = time.time()
        with self.lock:
            window = bytes(self.window)
            printable = sum(1 for b in window if b in b"\r\n\t" or 32 <= b <= 126)
            printable_ratio = (printable / len(window)) if window else 0.0
            text_tail = "\n".join(list(self.tail)[-8:])
            log_markers = ("ESP-ROM", "rst:", "boot:", "I (", "W (", "E (", "V (", "entry")
            log_score = sum(1 for marker in log_markers if marker in text_tail)
            likely_uart_log = len(window) >= 16 and (printable_ratio > 0.72 or log_score > 0)
            likely_binary = len(window) >= 16 and printable_ratio < 0.45 and log_score == 0
            scan_tail = self.scan_text[-8192:]
            download_seen = "DOWNLOAD" in scan_tail or "waiting for download" in scan_tail.lower()
            last_boot = self.boot_events[-1] if self.boot_events else None
            boot_verdict = "No boot header yet"
            boot_ok = False
            boot_warn = False
            if download_seen:
                boot_verdict = "DOWNLOAD MODE DETECTED - mark this pad as BOOT/GPIO9"
                boot_ok = True
            elif last_boot and not last_boot["normal_spi"]:
                boot_verdict = f"NON-SPI BOOT {last_boot['mode']} - likely BOOT/GPIO9"
                boot_ok = True
            elif last_boot:
                boot_verdict = f"Normal SPI boot {last_boot['mode']} - not BOOT/GPIO9"
                boot_warn = True
            age = None if self.last_rx == 0 else now - self.last_rx
            active = age is not None and age < 2.0
            recent = age is not None and age < 15.0
            return {
                "port": self.port,
                "baud": self.baud,
                "uptime_s": int(now - self.started),
                "last_rx_age_s": age,
                "active": active,
                "recent": recent,
                "total_bytes": self.total_bytes,
                "last_hex": self.last_hex,
                "raw_log": self.raw_log,
                "printable_ratio": printable_ratio,
                "log_score": log_score,
                "likely_uart_log": likely_uart_log,
                "likely_binary": likely_binary,
                "boot_verdict": boot_verdict,
                "boot_ok": boot_ok,
                "boot_warn": boot_warn,
                "download_seen": download_seen,
                "last_boot": last_boot,
                "boot_events": list(self.boot_events),
                "tail": list(self.tail)[-40:],
                "error": self.error,
            }


STATE = ProbeState()


HTML = """<!doctype html>
<html lang="en">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>UART Probe Dashboard</title>
<style>
:root { color-scheme: light dark; font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", sans-serif; }
body { margin: 0; background: #111318; color: #eceff4; }
main { max-width: 980px; margin: 0 auto; padding: 24px; }
.top { display: flex; gap: 16px; align-items: stretch; flex-wrap: wrap; }
.status { flex: 1 1 280px; border: 1px solid #343946; border-radius: 8px; padding: 18px; background: #181b22; }
.lamp { width: 28px; height: 28px; border-radius: 50%; background: #6b7280; box-shadow: 0 0 0 6px rgba(107,114,128,.18); display: inline-block; vertical-align: middle; margin-right: 10px; }
.lamp.active { background: #30d158; box-shadow: 0 0 0 8px rgba(48,209,88,.18), 0 0 24px rgba(48,209,88,.75); }
.lamp.recent { background: #ffd60a; box-shadow: 0 0 0 8px rgba(255,214,10,.18); }
.bootbox { border: 1px solid #343946; border-radius: 8px; padding: 18px; background: #181b22; margin-top: 16px; }
.bootbox.ok { border-color: #30d158; box-shadow: 0 0 0 4px rgba(48,209,88,.12); }
.bootbox.warn { border-color: #ffd60a; box-shadow: 0 0 0 4px rgba(255,214,10,.10); }
.bootverdict { font-size: 24px; font-weight: 800; line-height: 1.15; }
h1 { margin: 0 0 16px; font-size: 28px; }
h2 { margin: 0 0 10px; font-size: 15px; color: #aeb6c8; font-weight: 600; }
.big { font-size: 34px; font-weight: 800; line-height: 1.05; }
.sub { color: #aeb6c8; margin-top: 8px; }
.grid { display: grid; grid-template-columns: repeat(4, minmax(120px, 1fr)); gap: 10px; margin-top: 16px; }
.metric { border: 1px solid #343946; border-radius: 8px; padding: 12px; background: #181b22; }
.label { color: #aeb6c8; font-size: 12px; margin-bottom: 5px; }
.value { font-size: 19px; font-weight: 700; word-break: break-word; }
pre { margin: 0; white-space: pre-wrap; word-break: break-word; font: 13px/1.45 ui-monospace, SFMono-Regular, Menlo, Consolas, monospace; }
.panel { margin-top: 16px; border: 1px solid #343946; border-radius: 8px; padding: 14px; background: #181b22; }
.hint { margin-top: 14px; color: #aeb6c8; font-size: 14px; }
.err { color: #ff6b6b; font-weight: 700; }
@media (max-width: 700px) { .grid { grid-template-columns: repeat(2, minmax(120px, 1fr)); } }
</style>
</head>
<body>
<main>
  <h1>UART Probe Dashboard</h1>
  <div class="top">
    <section class="status">
      <h2>RX state</h2>
      <div><span id="lamp" class="lamp"></span><span id="state" class="big">Idle</span></div>
      <div id="detail" class="sub">Waiting for bytes...</div>
      <div id="error" class="sub err"></div>
    </section>
    <section class="status">
      <h2>How to use</h2>
      <div class="sub">Keep USB-UART GND on the board ground. Move only USB-UART RX across pads. Do not connect TX or power pins yet.</div>
    </section>
  </div>
  <div class="grid">
    <div class="metric"><div class="label">Port</div><div id="port" class="value"></div></div>
    <div class="metric"><div class="label">Baud</div><div id="baud" class="value"></div></div>
    <div class="metric"><div class="label">Total bytes</div><div id="bytes" class="value">0</div></div>
    <div class="metric"><div class="label">Last RX age</div><div id="age" class="value">never</div></div>
    <div class="metric"><div class="label">UART confidence</div><div id="uart" class="value">unknown</div></div>
    <div class="metric"><div class="label">Raw log</div><div id="raw" class="value"></div></div>
  </div>
  <section id="bootbox" class="bootbox">
    <h2>Boot / GPIO9 detector</h2>
    <div id="bootverdict" class="bootverdict">No boot header yet</div>
    <div id="bootline" class="sub"></div>
  </section>
  <section class="panel">
    <h2>Text tail</h2>
    <pre id="tail"></pre>
  </section>
  <section class="panel">
    <h2>Last bytes as hex</h2>
    <pre id="hex"></pre>
  </section>
  <div class="hint">Green means bytes are arriving now. Yellow means bytes arrived recently. Gray means no current UART activity.</div>
</main>
<script>
let alertedBootOk = false;
function notifyBootOk() {
  if (alertedBootOk) return;
  alertedBootOk = true;
  try {
    const ctx = new (window.AudioContext || window.webkitAudioContext)();
    const osc = ctx.createOscillator();
    const gain = ctx.createGain();
    osc.frequency.value = 880;
    gain.gain.value = 0.05;
    osc.connect(gain);
    gain.connect(ctx.destination);
    osc.start();
    setTimeout(() => { osc.stop(); ctx.close(); }, 550);
  } catch (_) {}
}
async function tick() {
  try {
    const res = await fetch('/api/status', {cache: 'no-store'});
    const s = await res.json();
    const lamp = document.getElementById('lamp');
    lamp.className = 'lamp' + (s.active ? ' active' : (s.recent ? ' recent' : ''));
    document.getElementById('state').textContent = s.active ? 'Receiving' : (s.recent ? 'Recent output' : 'Idle');
    let verdict = 'No data yet';
    if (s.likely_uart_log) verdict = 'Looks like UART text/logs';
    else if (s.likely_binary) verdict = 'Binary/noise, likely SPI or another signal';
    else if (s.total_bytes > 0) verdict = 'Data seen, not enough text confidence';
    document.getElementById('detail').textContent = s.active ? verdict : 'Move RX to the next pad and hold for 10 seconds.';
    document.getElementById('error').textContent = s.error || '';
    document.getElementById('port').textContent = s.port;
    document.getElementById('baud').textContent = s.baud;
    document.getElementById('bytes').textContent = s.total_bytes;
    document.getElementById('age').textContent = s.last_rx_age_s === null ? 'never' : s.last_rx_age_s.toFixed(1) + ' s';
    document.getElementById('uart').textContent = s.likely_uart_log ? 'high' : (s.likely_binary ? 'low' : 'unknown');
    document.getElementById('raw').textContent = s.raw_log || '';
    const bootbox = document.getElementById('bootbox');
    bootbox.className = 'bootbox' + (s.boot_ok ? ' ok' : (s.boot_warn ? ' warn' : ''));
    document.getElementById('bootverdict').textContent = s.boot_verdict || 'No boot header yet';
    document.getElementById('bootline').textContent = s.last_boot ? s.last_boot.line : '';
    if (s.boot_ok) notifyBootOk();
    document.getElementById('tail').textContent = (s.tail || []).join('\\n');
    document.getElementById('hex').textContent = s.last_hex || '';
  } catch (err) {
    document.getElementById('state').textContent = 'Dashboard error';
    document.getElementById('error').textContent = String(err);
  }
}
setInterval(tick, 300);
tick();
</script>
</body>
</html>
"""


def reader_loop(port: str, baud: int, raw_log: str) -> None:
    while True:
        try:
            STATE.set_error("")
            with serial.Serial(port, baudrate=baud, timeout=0.2) as ser:
                while True:
                    data = ser.read(512)
                    if data:
                        STATE.add_bytes(data)
                        if raw_log:
                            with open(raw_log, "ab") as f:
                                f.write(data)
        except Exception as exc:  # noqa: BLE001
            STATE.set_error(str(exc))
            time.sleep(1.0)


class Handler(BaseHTTPRequestHandler):
    def do_GET(self) -> None:  # noqa: N802
        if self.path == "/" or self.path.startswith("/?"):
            body = HTML.encode("utf-8")
            self.send_response(200)
            self.send_header("Content-Type", "text/html; charset=utf-8")
            self.send_header("Content-Length", str(len(body)))
            self.end_headers()
            self.wfile.write(body)
            return
        if self.path.startswith("/api/status"):
            body = json.dumps(STATE.snapshot()).encode("utf-8")
            self.send_response(200)
            self.send_header("Content-Type", "application/json")
            self.send_header("Cache-Control", "no-store")
            self.send_header("Content-Length", str(len(body)))
            self.end_headers()
            self.wfile.write(body)
            return
        self.send_error(404)

    def log_message(self, fmt: str, *args: object) -> None:
        return


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--serial-port", required=True)
    parser.add_argument("--baud", type=int, default=115200)
    parser.add_argument("--host", default="127.0.0.1")
    parser.add_argument("--http-port", type=int, default=8765)
    parser.add_argument("--raw-log", default="logs/uart_probe_capture.bin")
    args = parser.parse_args()

    STATE.port = args.serial_port
    STATE.baud = args.baud
    STATE.raw_log = args.raw_log

    if args.raw_log:
        os.makedirs(os.path.dirname(args.raw_log) or ".", exist_ok=True)
        open(args.raw_log, "wb").close()

    t = threading.Thread(target=reader_loop, args=(args.serial_port, args.baud, args.raw_log), daemon=True)
    t.start()

    httpd = ThreadingHTTPServer((args.host, args.http_port), Handler)
    print(f"UART probe dashboard: http://{args.host}:{args.http_port}")
    print(f"Reading {args.serial_port} at {args.baud}, RX-only")
    if args.raw_log:
        print(f"Raw capture: {args.raw_log}")
    httpd.serve_forever()
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
