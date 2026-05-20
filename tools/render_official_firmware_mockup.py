#!/usr/bin/env python3
"""Render a conservative visual interpretation of the stock Band-0 UI.

The image is not a screenshot. It is a design reference derived from recovered
1.2.6 strings plus confirmed rounded-row geometry from the BLE pager renderer.
"""

from __future__ import annotations

from pathlib import Path

from PIL import Image, ImageDraw, ImageFont


W = 200
H = 200
BLACK = 0
WHITE = 255


def font(size: int, bold: bool = False) -> ImageFont.ImageFont:
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


TITLE = font(15, True)
TEXT = font(13, False)
SMALL = font(10, False)
TINY = font(9, False)
BIG = font(34, True)


class Screen:
    def __init__(self) -> None:
        self.img = Image.new("L", (W, H), WHITE)
        self.d = ImageDraw.Draw(self.img)

    def size(self, text: str, f: ImageFont.ImageFont = TEXT) -> tuple[int, int]:
        box = self.d.textbbox((0, 0), text, font=f)
        return box[2] - box[0], box[3] - box[1]

    def text(self, x: int, y: int, value: str, f: ImageFont.ImageFont = TEXT, fill: int = BLACK) -> None:
        self.d.text((x, y), value, font=f, fill=fill)

    def center(self, y: int, value: str, f: ImageFont.ImageFont = TEXT, fill: int = BLACK) -> None:
        tw, _ = self.size(value, f)
        self.text(max(0, (W - tw) // 2), y, value, f, fill)

    def pill(self, box: tuple[int, int, int, int], radius: int = 6, fill: int = BLACK, outline: int | None = None) -> None:
        self.d.rounded_rectangle(box, radius=radius, fill=fill, outline=outline)

    def header(self, title: str) -> None:
        tw, th = self.size(title, TITLE)
        x = (W - tw) // 2
        self.pill((x - 9, 7, x + tw + 9, 7 + th + 9), radius=5, fill=BLACK)
        self.text(x, 11, title, TITLE, WHITE)

    def list_title(self, title: str) -> None:
        self.text(12, 8, title, TITLE, BLACK)

    def footer(self, text: str) -> None:
        self.center(181, text, TINY)

    def menu_row(self, y: int, label: str, value: str = "", selected: bool = False) -> None:
        x, w, h = 16, 168, 22
        if selected:
            self.pill((x, y, x + w, y + h), radius=6, fill=BLACK)
            color = WHITE
        else:
            self.pill((x, y, x + w, y + h), radius=6, fill=WHITE, outline=BLACK)
            color = BLACK
        self.text(x + 15, y + 5, label, SMALL, color)
        if value:
            vw, _ = self.size(value, TINY)
            self.text(x + w - vw - 13, y + 6, value, TINY, color)

    def progress(self, x: int, y: int, w: int, pct: int) -> None:
        self.pill((x, y, x + w, y + 9), radius=1, fill=WHITE, outline=BLACK)
        fill = max(0, min(w - 2, (w - 2) * pct // 100))
        if fill:
            self.d.rectangle((x + 1, y + 1, x + 1 + fill, y + 8), fill=BLACK)

    def usage_icon(self, x: int, y: int) -> None:
        rows = [
            "...XXXXXXXXXXXX...",
            "...XX.XXXXXX.XX...",
            ".XXXXXXXXXXXXXXXX.",
            "...XXXXXXXXXXXX...",
            "....X.X....X.X....",
        ]
        for row, data in enumerate(rows):
            for col, ch in enumerate(data):
                if ch == "X":
                    self.d.rectangle((x + col * 2, y + row * 4,
                                      x + col * 2 + 1, y + row * 4 + 3),
                                     fill=BLACK)

    def save(self, path: Path) -> None:
        path.parent.mkdir(parents=True, exist_ok=True)
        self.img.convert("1").save(path)


def draw_clock() -> Screen:
    s = Screen()
    s.header("CLOCK")
    s.center(54, "BAT: --", SMALL)
    s.center(76, "12:34", BIG)
    s.center(124, "Wed 05/20", TEXT)
    s.pill((42, 151, 158, 170), radius=5, fill=WHITE, outline=BLACK)
    s.center(154, "Hold OK Cfg", TINY)
    return s


def draw_setup() -> Screen:
    s = Screen()
    s.list_title("Settings")
    s.menu_row(37, "Lock Now", "", True)
    s.menu_row(64, "Wi-Fi Time", "OK", False)
    s.menu_row(91, "Saved Wi-Fi", "", False)
    s.menu_row(118, "Wallpaper", "", False)
    s.menu_row(145, "Wi-Fi OTA", "OK", False)
    s.footer("Press=Switch / Hold=OK")
    return s

def draw_applications() -> Screen:
    s = Screen()
    s.list_title("Applications")
    s.menu_row(37, "Fortune", "", False)
    s.menu_row(64, "Merit", "108", False)
    s.menu_row(91, "BT Pager", "OFF", True)
    s.menu_row(118, "MBTI Guide", "", False)
    s.menu_row(145, "Usage", "LIVE", False)
    s.footer("Press=Switch / Hold=OK")
    return s


def draw_wireless() -> Screen:
    s = Screen()
    s.list_title("Wireless")
    s.menu_row(37, "Wi-Fi", "ADV", True)
    s.menu_row(64, "Local API", "ON", False)
    s.menu_row(91, "OTA", "READY", False)
    s.menu_row(118, "Logs", "OK", False)
    s.menu_row(145, "BLE", "OFF", False)
    s.footer("Hold BACK to Settings")
    return s


def draw_usage() -> Screen:
    s = Screen()
    s.usage_icon(8, 7)
    s.center(11, "Usage", TITLE)
    s.pill((165, 8, 185, 18), radius=1, fill=WHITE, outline=BLACK)
    s.d.rectangle((185, 11, 187, 15), fill=BLACK)
    for i in range(4):
        s.pill((167 + i * 4, 10, 170 + i * 4, 16), radius=0, fill=BLACK)
    s.text(2, 44, "0%", TEXT)
    s.pill((122, 44, 188, 61), radius=2, fill=WHITE, outline=BLACK)
    s.text(127, 46, "Current", TEXT)
    s.progress(12, 70, 176, 0)
    s.text(12, 84, "100% left / --", TEXT)
    s.text(11, 101, "16%", TEXT)
    s.pill((124, 100, 190, 117), radius=2, fill=WHITE, outline=BLACK)
    s.text(130, 103, "Weekly", TEXT)
    s.progress(12, 128, 176, 16)
    s.text(12, 142, "84% left / 8h 5m", TEXT)
    s.center(178, "Stale data", TITLE)
    return s


def draw_bt_pager() -> Screen:
    s = Screen()
    s.header("BT Pager")
    s.center(56, "Rand/0 Pager", TEXT)
    s.pill((34, 84, 166, 113), radius=8, fill=BLACK)
    s.center(90, "PPT Remote", TITLE, WHITE)
    s.center(128, "Pager-Up / Pager-Down", SMALL)
    s.footer("Long BACK to Exit")
    return s


def draw_mbti() -> Screen:
    s = Screen()
    s.header("MBTI Guide")
    labels = ["INTJ", "INTP", "ENTJ", "ENTP", "INFJ", "INFP", "ENFJ", "ENFP"]
    for i, label in enumerate(labels):
        col = i % 2
        row = i // 2
        x = 24 + col * 80
        y = 49 + row * 27
        selected = label == "INTJ"
        if selected:
            s.pill((x - 6, y - 4, x + 60, y + 18), radius=5, fill=BLACK)
        s.text(x, y, label, SMALL, WHITE if selected else BLACK)
    s.footer("Long BACK to Exit")
    return s


def make_contact_sheet(out: Path) -> None:
    pages = [
        ("applications", draw_applications()),
        ("setup", draw_setup()),
        ("wireless", draw_wireless()),
        ("usage", draw_usage()),
    ]
    scale = 3
    label_h = 22
    gap = 16
    sheet_w = 2 * W * scale + gap
    sheet_h = 2 * (H * scale + label_h) + gap
    sheet = Image.new("RGB", (sheet_w, sheet_h), "white")
    d = ImageDraw.Draw(sheet)
    label_font = font(11, True)
    for i, (name, screen) in enumerate(pages):
        x = (i % 2) * (W * scale + gap)
        y = (i // 2) * (H * scale + label_h + gap)
        img = screen.img.convert("RGB").resize((W * scale, H * scale), Image.Resampling.NEAREST)
        sheet.paste(img, (x, y))
        d.text((x + 4, y + H * scale + 4), name, font=label_font, fill=(0, 0, 0))

    out.parent.mkdir(parents=True, exist_ok=True)
    sheet.save(out)
    for name, screen in pages:
        screen.save(out.parent / f"official_mock_{name}.png")


def main() -> None:
    out = Path("build/ui_mockups/official_firmware_interpretation.png")
    make_contact_sheet(out)
    print(out)


if __name__ == "__main__":
    main()
