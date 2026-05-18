#!/usr/bin/env python3
"""Tiny local NTP server for fully offline demos.

The local-only firmware patch rewrites public SNTP hosts to 192.168.4.2 by
default. Run this on the machine at that address so the device can sync time
without touching public NTP services.
"""

from __future__ import annotations

import argparse
import socket
import struct
import time


NTP_DELTA = 2208988800


def ntp_timestamp(now: float) -> bytes:
    seconds = int(now) + NTP_DELTA
    fraction = int((now - int(now)) * (1 << 32))
    return struct.pack("!II", seconds, fraction)


def build_response(request: bytes) -> bytes:
    now = time.time()
    receive_ts = ntp_timestamp(now)
    transmit_ts = ntp_timestamp(time.time())
    originate_ts = request[40:48] if len(request) >= 48 else b"\x00" * 8

    packet = bytearray(48)
    packet[0] = 0x24  # LI=0, version=4, mode=4(server)
    packet[1] = 1     # stratum 1: local reference
    packet[2] = 6
    packet[3] = 0xEC  # signed precision -20
    packet[4:8] = struct.pack("!I", 1 << 16)
    packet[8:12] = struct.pack("!I", 1 << 16)
    packet[12:16] = b"LOCL"
    packet[16:24] = receive_ts
    packet[24:32] = originate_ts
    packet[32:40] = receive_ts
    packet[40:48] = transmit_ts
    return bytes(packet)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--host", default="0.0.0.0")
    parser.add_argument("--port", type=int, default=123)
    args = parser.parse_args()

    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    sock.bind((args.host, args.port))
    print(f"Local NTP listening on udp://{args.host}:{args.port}")

    while True:
        request, address = sock.recvfrom(512)
        sock.sendto(build_response(request), address)


if __name__ == "__main__":
    main()
