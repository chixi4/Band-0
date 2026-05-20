#!/usr/bin/env python3
"""Generate Band-0 official-style UI reference images and pixel diffs.

This is a host-side design gate. It does not emulate the full official
firmware; instead it renders the recovered 1.2.6 layout grammar:
200x200 monochrome canvas, centered title, three 0x10..0xb7 selectable rows,
short footer hints, and compact status pages.
"""

from __future__ import annotations

import argparse
from dataclasses import dataclass
from pathlib import Path

from PIL import Image, ImageChops, ImageDraw, ImageFont


W = 200
H = 200
BLACK = 0
WHITE = 255


def load_font(size: int, bold: bool = False) -> ImageFont.FreeTypeFont | ImageFont.ImageFont:
    candidates = [
        "/System/Library/Fonts/Supplemental/Arial Bold.ttf" if bold else "/System/Library/Fonts/Supplemental/Arial.ttf",
        "/System/Library/Fonts/Helvetica.ttc",
        "/Library/Fonts/Arial.ttf",
    ]
    for path in candidates:
        try:
            return ImageFont.truetype(path, size=size)
        except Exception:
            pass
    return ImageFont.load_default()


@dataclass
class Theme:
    title: ImageFont.ImageFont
    text: ImageFont.ImageFont
    small: ImageFont.ImageFont
    tiny: ImageFont.ImageFont


THEME = Theme(
    title=load_font(15, True),
    text=load_font(12),
    small=load_font(10),
    tiny=load_font(9),
)


class Canvas:
    def __init__(self) -> None:
        self.img = Image.new("L", (W, H), WHITE)
        self.d = ImageDraw.Draw(self.img)

    def text_size(self, text: str, font: ImageFont.ImageFont) -> tuple[int, int]:
        box = self.d.textbbox((0, 0), text, font=font)
        return box[2] - box[0], box[3] - box[1]

    def center(self, y: int, text: str, font: ImageFont.ImageFont | None = None, invert: bool = False) -> None:
        font = font or THEME.text
        tw, th = self.text_size(text, font)
        x = max(0, (W - tw) // 2)
        if invert:
            self.d.rounded_rectangle((x - 6, y - 3, x + tw + 6, y + th + 5), radius=3, fill=BLACK)
            self.d.text((x, y), text, font=font, fill=WHITE)
        else:
            self.d.text((x, y), text, font=font, fill=BLACK)

    def left(self, x: int, y: int, text: str, font: ImageFont.ImageFont | None = None, fill: int = BLACK) -> None:
        self.d.text((x, y), text, font=font or THEME.text, fill=fill)

    def header(self, title: str) -> None:
        self.center(9, title, THEME.title, invert=True)
        self.d.line((20, 42, 180, 42), fill=BLACK)

    def footer(self, text: str) -> None:
        self.d.line((10, 172, 190, 172), fill=BLACK)
        self.center(179, text, THEME.tiny)

    def row(self, y: int, label: str, value: str = "", selected: bool = False, icon: str | None = None) -> None:
        x, w, h = 16, 168, 26
        fill = BLACK if selected else WHITE
        outline = BLACK
        self.d.rounded_rectangle((x, y, x + w, y + h), radius=4, fill=fill, outline=outline)
        text_fill = WHITE if selected else BLACK
        tx = x + 12
        if icon:
            self.icon(icon, x + 8, y + 5, selected)
            tx = x + 34
        self.left(tx, y + 7, label, THEME.small, text_fill)
        if value:
            vw, _ = self.text_size(value, THEME.tiny)
            self.left(x + w - vw - 10, y + 8, value, THEME.tiny, text_fill)

    def icon(self, name: str, x: int, y: int, selected: bool = False) -> None:
        color = WHITE if selected else BLACK
        if name == "usage":
            draw_clawd(self.d, x, y + 1, 1, color)
        elif name == "wireless":
            self.d.arc((x, y + 8, x + 20, y + 28), 210, 330, fill=color, width=2)
            self.d.arc((x + 4, y + 12, x + 16, y + 24), 210, 330, fill=color, width=2)
            self.d.ellipse((x + 9, y + 19, x + 12, y + 22), fill=color)
        elif name == "settings":
            self.d.rectangle((x + 4, y + 4, x + 16, y + 16), outline=color)
            self.d.line((x + 7, y + 8, x + 14, y + 8), fill=color)
            self.d.line((x + 7, y + 12, x + 14, y + 12), fill=color)
        elif name == "pager":
            self.d.rounded_rectangle((x + 4, y + 3, x + 16, y + 18), radius=2, outline=color)
            self.d.line((x + 7, y + 7, x + 13, y + 7), fill=color)
            self.d.line((x + 7, y + 11, x + 13, y + 11), fill=color)
        elif name == "mbti":
            self.left(x + 1, y + 5, "MB", THEME.tiny, color)
        else:
            self.d.ellipse((x + 5, y + 5, x + 16, y + 16), outline=color)

    def progress(self, x: int, y: int, w: int, pct: int) -> None:
        pct = max(0, min(100, pct))
        self.d.rectangle((x, y, x + w, y + 8), outline=BLACK)
        fill_w = (w - 2) * pct // 100
        if fill_w > 0:
            self.d.rectangle((x + 1, y + 1, x + fill_w, y + 7), fill=BLACK)

    def save(self, path: Path) -> None:
        path.parent.mkdir(parents=True, exist_ok=True)
        self.img.convert("1").save(path)


def draw_clawd(draw: ImageDraw.ImageDraw, x: int, y: int, scale: int, fill: int) -> None:
    rows = [
        "...XXXXXXXXXXXX...",
        "...XX.XXXXXX.XX...",
        ".XXXXXXXXXXXXXXXX.",
        "...XXXXXXXXXXXX...",
        "....X.X....X.X....",
    ]
    cw = max(1, scale)
    ch = max(2, scale * 2)
    for row, bits in enumerate(rows):
        for col, bit in enumerate(bits):
            if bit == "X":
                draw.rectangle((x + col * cw, y + row * ch, x + col * cw + cw - 1, y + row * ch + ch - 1), fill=fill)


def page_menu(selected: int = 5) -> Canvas:
    c = Canvas()
    c.header("APPLICATIONS")
    rows = [
        ("Answers", "", "circle"),
        ("Fortune", "", "circle"),
        ("Merit", "108", "circle"),
        ("BT Pager", "OFF", "pager"),
        ("MBTI Guide", "", "mbti"),
        ("Usage", "LIVE", "usage"),
        ("Settings", "", "settings"),
    ]
    start = max(0, min(selected - 1, len(rows) - 3))
    for slot, idx in enumerate(range(start, start + 3)):
        label, value, icon = rows[idx]
        c.row(54 + slot * 33, label, value, idx == selected, icon)
    c.footer("Press=Switch / Hold=OK")
    return c


def page_settings(selected: int = 4) -> Canvas:
    c = Canvas()
    c.header("SETTINGS")
    rows = [
        ("Language", "EN"),
        ("Sleep Time", "OFF"),
        ("Key Sound", "OFF"),
        ("Guide Pages", "SHOW"),
        ("Wireless", "ADV"),
        ("Update", "OK"),
        ("About Dot.", "1.2.6+"),
    ]
    start = max(0, min(selected - 1, len(rows) - 3))
    for slot, idx in enumerate(range(start, start + 3)):
        label, value = rows[idx]
        c.row(54 + slot * 33, label, value, idx == selected, "wireless" if label == "Wireless" else None)
    c.footer("Press=Switch / Hold=OK")
    return c


def page_wireless(selected: int = 0) -> Canvas:
    c = Canvas()
    c.header("WIRELESS")
    rows = [
        ("Wi-Fi", "ADV"),
        ("Local API", "ON"),
        ("OTA", "READY"),
        ("Logs", "OK"),
        ("BLE", "OFF"),
    ]
    start = max(0, min(selected - 1, len(rows) - 3))
    for slot, idx in enumerate(range(start, start + 3)):
        label, value = rows[idx]
        c.row(54 + slot * 33, label, value, idx == selected, "wireless" if idx == 0 else None)
    c.footer("Hold BACK to Settings")
    return c


def page_wifi_detail() -> Canvas:
    c = Canvas()
    c.header("WI-FI")
    c.center(55, "SSID", THEME.tiny)
    c.center(72, "ADV 2.4G", THEME.text)
    c.center(102, "IP", THEME.tiny)
    c.center(119, "192.168.4.2", THEME.text)
    c.footer("BACK Exit")
    return c


def page_usage() -> Canvas:
    c = Canvas()
    draw_clawd(c.d, 8, 7, 2, BLACK)
    c.center(10, "Usage", THEME.title)
    c.d.rectangle((166, 8, 188, 18), outline=BLACK)
    c.d.rectangle((188, 11, 190, 15), fill=BLACK)
    for i in range(4):
        c.d.rectangle((169 + i * 4, 11, 171 + i * 4, 15), outline=BLACK)
    c.d.line((10, 34, 190, 34), fill=BLACK)

    def section(y: int, label: str, pct: int, left: int, reset: str) -> None:
        c.left(12, y, f"{pct}%", THEME.title)
        c.d.rectangle((122, y - 1, 188, y + 15), outline=BLACK)
        c.left(128, y + 2, label, THEME.tiny)
        c.progress(12, y + 20, 176, pct)
        c.left(12, y + 34, f"{left}% left / {reset}", THEME.tiny)

    section(46, "Current", 87, 13, "59m")
    section(104, "Weekly", 73, 27, "3d 1h")
    c.d.line((10, 172, 190, 172), fill=BLACK)
    c.d.line((64, 184, 72, 184), fill=BLACK)
    c.d.line((68, 180, 68, 188), fill=BLACK)
    c.d.line((65, 181, 71, 187), fill=BLACK)
    c.d.line((65, 187, 71, 181), fill=BLACK)
    c.left(78, 178, "live", THEME.small)
    return c


def page_update() -> Canvas:
    c = Canvas()
    c.header("UPDATE")
    c.center(56, "Source", THEME.tiny)
    c.center(73, "Local ADV", THEME.text)
    c.center(104, "Last", THEME.tiny)
    c.center(121, "Success #12", THEME.text)
    c.footer("OK Check / BACK Exit")
    return c


PAGES = {
    "menu": page_menu,
    "menu_usage": lambda: page_menu(5),
    "settings": page_settings,
    "settings_wireless": lambda: page_settings(4),
    "wireless": page_wireless,
    "wifi": page_wifi_detail,
    "usage": page_usage,
    "update": page_update,
}


def diff_images(a: Path, b: Path, out: Path) -> tuple[int, int, float]:
    ia = Image.open(a).convert("1").convert("L")
    ib = Image.open(b).convert("1").convert("L")
    if ia.size != ib.size:
        raise SystemExit(f"size mismatch: {a}={ia.size}, {b}={ib.size}")
    diff = ImageChops.difference(ia, ib)
    px = diff.load()
    heat = Image.new("RGB", ia.size, "white")
    hp = heat.load()
    mismatches = 0
    for y in range(ia.height):
        for x in range(ia.width):
            if px[x, y] != 0:
                mismatches += 1
                hp[x, y] = (220, 0, 0)
            else:
                v = ia.getpixel((x, y))
                hp[x, y] = (0, 0, 0) if v == 0 else (255, 255, 255)
    out.parent.mkdir(parents=True, exist_ok=True)
    heat.save(out)
    total = ia.width * ia.height
    return mismatches, total, mismatches * 100.0 / total


def make_contact_sheet(paths: list[Path], out: Path) -> None:
    if not paths:
        return
    scale = 2
    label_h = 18
    cols = 4
    rows = (len(paths) + cols - 1) // cols
    sheet = Image.new("RGB", (cols * W * scale, rows * (H * scale + label_h)), "white")
    draw = ImageDraw.Draw(sheet)
    font = load_font(10)
    for i, path in enumerate(paths):
        img = Image.open(path).convert("RGB").resize((W * scale, H * scale), Image.Resampling.NEAREST)
        x = (i % cols) * W * scale
        y = (i // cols) * (H * scale + label_h)
        sheet.paste(img, (x, y))
        draw.text((x + 4, y + H * scale + 2), path.stem, font=font, fill=(0, 0, 0))
    out.parent.mkdir(parents=True, exist_ok=True)
    sheet.save(out)


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--out-dir", default="build/ui_reference")
    parser.add_argument("--page", choices=sorted(PAGES) + ["all"], default="all")
    parser.add_argument("--diff", nargs=3, metavar=("A", "B", "OUT"))
    args = parser.parse_args()

    if args.diff:
        mismatches, total, pct = diff_images(Path(args.diff[0]), Path(args.diff[1]), Path(args.diff[2]))
        print(f"{mismatches}/{total} pixels differ ({pct:.2f}%)")
        return

    out_dir = Path(args.out_dir)
    names = list(PAGES) if args.page == "all" else [args.page]
    written: list[Path] = []
    for name in names:
        path = out_dir / f"official_{name}.png"
        PAGES[name]().save(path)
        written.append(path)
        print(path)
    make_contact_sheet(written, out_dir / "official_contact_sheet.png")
    print(out_dir / "official_contact_sheet.png")


if __name__ == "__main__":
    main()
