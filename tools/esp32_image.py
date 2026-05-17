#!/usr/bin/env python3
"""Small ESP image helpers for offline patching.

The project firmware is an ESP-IDF application image for ESP32-C2/ESP8684.
After binary string patches we must refresh both the ESP image checksum and
the appended SHA-256 validation hash, otherwise the bootloader will reject it.
"""

from __future__ import annotations

import hashlib
import struct
from dataclasses import dataclass


ESP_IMAGE_MAGIC = 0xE9
ESP_CHECKSUM_SEED = 0xEF


@dataclass(frozen=True)
class EspSegment:
    load_addr: int
    offset: int
    size: int


@dataclass(frozen=True)
class EspImageLayout:
    segment_count: int
    segments: list[EspSegment]
    checksum_offset: int
    hash_offset: int
    image_end: int


def parse_image_layout(image: bytes) -> EspImageLayout:
    if not image or image[0] != ESP_IMAGE_MAGIC:
        raise ValueError("not an ESP image: bad magic")

    segment_count = image[1]
    offset = 24
    segments: list[EspSegment] = []

    for _ in range(segment_count):
        if offset + 8 > len(image):
            raise ValueError("truncated segment header")
        load_addr, size = struct.unpack_from("<II", image, offset)
        offset += 8
        if offset + size > len(image):
            raise ValueError("truncated segment data")
        segments.append(EspSegment(load_addr=load_addr, offset=offset, size=size))
        offset += size

    # ESP-IDF pads the segment payload area so the checksum byte lands at
    # offset % 16 == 15. The SHA-256 validation hash starts at the following
    # 16-byte boundary.
    checksum_offset = ((offset + 16) // 16) * 16 - 1
    hash_offset = checksum_offset + 1
    image_end = hash_offset + 32
    if image_end > len(image):
        raise ValueError("truncated checksum/hash footer")

    return EspImageLayout(
        segment_count=segment_count,
        segments=segments,
        checksum_offset=checksum_offset,
        hash_offset=hash_offset,
        image_end=image_end,
    )


def compute_checksum(image: bytes, layout: EspImageLayout | None = None) -> int:
    layout = layout or parse_image_layout(image)
    checksum = ESP_CHECKSUM_SEED
    for seg in layout.segments:
        for value in image[seg.offset : seg.offset + seg.size]:
            checksum ^= value
    return checksum


def repair_image_footer(image: bytes | bytearray) -> bytes:
    data = bytearray(image)
    layout = parse_image_layout(data)

    if layout.checksum_offset >= len(data):
        raise ValueError("checksum offset outside image")

    data[layout.checksum_offset] = compute_checksum(data, layout)
    digest = hashlib.sha256(data[: layout.hash_offset]).digest()
    data[layout.hash_offset : layout.hash_offset + 32] = digest
    return bytes(data)


def patch_c_string(data: bytes | bytearray, old: bytes, new: bytes) -> tuple[bytes, int]:
    if len(new) > len(old):
        raise ValueError(f"replacement is longer than target: {new!r} > {old!r}")

    buf = bytearray(data)
    count = 0
    start = 0
    replacement = new + b" " * (len(old) - len(new))
    while True:
        pos = buf.find(old, start)
        if pos < 0:
            break
        buf[pos : pos + len(old)] = replacement
        count += 1
        start = pos + len(old)
    return bytes(buf), count
