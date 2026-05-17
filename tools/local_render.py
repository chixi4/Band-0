#!/usr/bin/env python3
"""Local renderer for Dot. / Rand/0 wallpaper payloads.

The official web UI posts an image to:
  /api/authV2/device/render/convert

Firmware strings show that the response field consumed by the device is
`COMPRESS_ARRAY_V2`. Reverse engineering shows this is an LZ4 block containing
a 200 x 200 image packed as 2 bits per pixel: white=0b00, black=0b11.
This tool reproduces that payload locally and can also emit a preview PNG.
"""

from __future__ import annotations

import argparse
import base64
import io
import json
from pathlib import Path
from typing import Iterable

import lz4.block
from PIL import Image, ImageDraw, ImageFont


WIDTH = 200
HEIGHT = 200
WHITE = 255
BLACK = 0


KERNELS: dict[str, tuple[float, list[tuple[int, int, float]]]] = {
    "FLOYD_STEINBERG": (16.0, [(1, 0, 7), (-1, 1, 3), (0, 1, 5), (1, 1, 1)]),
    "ATKINSON": (8.0, [(1, 0, 1), (2, 0, 1), (-1, 1, 1), (0, 1, 1), (1, 1, 1), (0, 2, 1)]),
    "SIERRA2": (16.0, [(1, 0, 4), (2, 0, 3), (-2, 1, 1), (-1, 1, 2), (0, 1, 3), (1, 1, 2), (2, 1, 1)]),
    "BURKES": (32.0, [(1, 0, 8), (2, 0, 4), (-2, 1, 2), (-1, 1, 4), (0, 1, 8), (1, 1, 4), (2, 1, 2)]),
    "STUCKI": (
        42.0,
        [
            (1, 0, 8),
            (2, 0, 4),
            (-2, 1, 2),
            (-1, 1, 4),
            (0, 1, 8),
            (1, 1, 4),
            (2, 1, 2),
            (-2, 2, 1),
            (-1, 2, 2),
            (0, 2, 4),
            (1, 2, 2),
            (2, 2, 1),
        ],
    ),
    "JARVIS_JUDICE_NINKE": (
        48.0,
        [
            (1, 0, 7),
            (2, 0, 5),
            (-2, 1, 3),
            (-1, 1, 5),
            (0, 1, 7),
            (1, 1, 5),
            (2, 1, 3),
            (-2, 2, 1),
            (-1, 2, 3),
            (0, 2, 5),
            (1, 2, 3),
            (2, 2, 1),
        ],
    ),
}


def load_font(size: int) -> ImageFont.ImageFont:
    candidates = [
        "/System/Library/Fonts/Supplemental/Arial Bold.ttf",
        "/System/Library/Fonts/Supplemental/Arial.ttf",
        "/Library/Fonts/Arial Unicode.ttf",
    ]
    for path in candidates:
        if Path(path).exists():
            return ImageFont.truetype(path, size)
    return ImageFont.load_default()


def text_image(lines: Iterable[str]) -> Image.Image:
    image = Image.new("L", (WIDTH, HEIGHT), WHITE)
    draw = ImageDraw.Draw(image)
    clean_lines = [line.strip() for line in lines if line.strip()]
    if not clean_lines:
        clean_lines = ["HELLO", "WORLD"]

    font_size = 42 if len(clean_lines) <= 2 else 30
    font = load_font(font_size)
    line_boxes = [draw.textbbox((0, 0), line, font=font) for line in clean_lines]
    line_heights = [box[3] - box[1] for box in line_boxes]
    total_height = sum(line_heights) + 10 * (len(clean_lines) - 1)
    y = (HEIGHT - total_height) // 2

    for line, box, line_height in zip(clean_lines, line_boxes, line_heights):
        line_width = box[2] - box[0]
        draw.text(((WIDTH - line_width) // 2, y), line, fill=BLACK, font=font)
        y += line_height + 10

    return image


def open_input_image(path: str) -> Image.Image:
    return Image.open(path).convert("L").resize((WIDTH, HEIGHT), Image.Resampling.LANCZOS)


def image_from_data_url(data_url: str) -> Image.Image:
    marker = "base64,"
    if marker not in data_url:
        raise ValueError("image must be a data URL containing base64 data")
    raw = base64.b64decode(data_url.split(marker, 1)[1])
    return Image.open(io.BytesIO(raw)).convert("L").resize((WIDTH, HEIGHT), Image.Resampling.LANCZOS)


def threshold(image: Image.Image) -> Image.Image:
    return image.point(lambda p: WHITE if p >= 128 else BLACK, mode="1").convert("L")


def dither(image: Image.Image, kernel_name: str) -> Image.Image:
    name = kernel_name.upper()
    if name in {"THRESHOLD", "DIFFUSION_ROW", "DIFFUSION_COLUMN", "DIFFUSION_2D"}:
        return threshold(image)

    divisor, kernel = KERNELS.get(name, KERNELS["FLOYD_STEINBERG"])
    pixels = [[float(image.getpixel((x, y))) for x in range(WIDTH)] for y in range(HEIGHT)]

    for y in range(HEIGHT):
        for x in range(WIDTH):
            old = pixels[y][x]
            new = WHITE if old >= 128 else BLACK
            error = old - new
            pixels[y][x] = new
            for dx, dy, weight in kernel:
                nx = x + dx
                ny = y + dy
                if 0 <= nx < WIDTH and 0 <= ny < HEIGHT:
                    pixels[ny][nx] += error * weight / divisor

    out = Image.new("L", (WIDTH, HEIGHT), WHITE)
    for y in range(HEIGHT):
        for x in range(WIDTH):
            out.putpixel((x, y), WHITE if pixels[y][x] >= 128 else BLACK)
    return out


def pack_2bpp(image: Image.Image) -> bytes:
    image = image.convert("L")
    packed = bytearray()
    for y in range(HEIGHT):
        for x in range(0, WIDTH, 4):
            value = 0
            for i in range(4):
                pixel = image.getpixel((x + i, y))
                two_bits = 0b11 if pixel < 128 else 0b00
                value |= two_bits << (6 - 2 * i)
            packed.append(value)
    return bytes(packed)


def encode_payload(image: Image.Image, kernel: str = "FLOYD_STEINBERG") -> tuple[str, Image.Image]:
    bw = dither(image, kernel)
    raw = pack_2bpp(bw)
    compressed = lz4.block.compress(raw, mode="high_compression", compression=12, store_size=False)
    return base64.b64encode(compressed).decode("ascii"), bw


def preview_base64(image: Image.Image) -> str:
    buf = io.BytesIO()
    image.convert("RGB").save(buf, format="PNG")
    return base64.b64encode(buf.getvalue()).decode("ascii")


def convert_json_request(body: dict) -> dict:
    image = image_from_data_url(str(body["image"]))
    kernel = str(body.get("ditherKernel") or body.get("ditherType") or "FLOYD_STEINBERG")
    payload, preview = encode_payload(image, kernel)
    return {
        "COMPRESS_ARRAY_V2": payload,
        "COMPRESS_RENDER": preview_base64(preview),
    }


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--input", help="source image path")
    parser.add_argument("--text", default="HELLO\\nWORLD", help="text rendered when --input is not provided")
    parser.add_argument("--kernel", default="FLOYD_STEINBERG")
    parser.add_argument("--json-out", default="build/hello_world_wallpaper.json")
    parser.add_argument("--payload-out", default="build/hello_world_wallpaper.txt")
    parser.add_argument("--preview-out", default="build/hello_world_preview.png")
    args = parser.parse_args()

    if args.input:
        image = open_input_image(args.input)
    else:
        image = text_image(args.text.replace("\\n", "\n").splitlines())

    payload, preview = encode_payload(image, args.kernel)

    json_out = Path(args.json_out)
    payload_out = Path(args.payload_out)
    preview_out = Path(args.preview_out)
    for path in [json_out, payload_out, preview_out]:
        path.parent.mkdir(parents=True, exist_ok=True)

    response = {
        "COMPRESS_ARRAY_V2": payload,
        "COMPRESS_RENDER": preview_base64(preview),
        "width": WIDTH,
        "height": HEIGHT,
        "format": "lz4-block, 2bpp packed, white=0, black=3",
        "kernel": args.kernel,
    }
    json_out.write_text(json.dumps(response, indent=2), encoding="utf-8")
    payload_out.write_text(payload + "\n", encoding="ascii")
    preview.save(preview_out)
    print(json.dumps({k: response[k] for k in ["width", "height", "format", "kernel"]}, indent=2))
    print(f"payload bytes: {len(payload)} base64 chars")
    print(f"wrote: {json_out}, {payload_out}, {preview_out}")


if __name__ == "__main__":
    main()
