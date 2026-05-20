#!/usr/bin/env python3
import os
import sys
from PIL import Image, ImageDraw, ImageFont

epd_width = 200
epd_height = 200

# Color constants
BG_COLOR = 1  # White
FG_COLOR = 0  # Black

def create_images(out_dir):
    os.makedirs(out_dir, exist_ok=True)
    
    # Try to load clean fonts
    try:
        font_title = ImageFont.truetype("/System/Library/Fonts/Supplemental/Arial.ttf", 16)
        font_medium = ImageFont.truetype("/System/Library/Fonts/Supplemental/Arial.ttf", 12)
        font_small = ImageFont.truetype("/System/Library/Fonts/Supplemental/Arial.ttf", 10)
        font_large = ImageFont.truetype("/System/Library/Fonts/Supplemental/Arial.ttf", 24)
    except Exception:
        font_title = ImageFont.load_default()
        font_medium = ImageFont.load_default()
        font_small = ImageFont.load_default()
        font_large = ImageFont.load_default()

    def render_screen(mode, language=0):
        # 1 = White
        fb = Image.new("1", (epd_width, epd_height), 1)
        draw = ImageDraw.Draw(fb)
        
        def epd_line(x1, y1, x2, y2):
            draw.line((x1, y1, x2, y2), fill=0)
            
        def epd_rect(x, y, w, h, fill=False):
            f = 0 if fill else None
            draw.rectangle((x, y, x + w, y + h), fill=f, outline=0)
            
        def epd_rounded_rect(x, y, w, h, r=4, fill=False):
            f = 0 if fill else None
            draw.rounded_rectangle((x, y, x + w, y + h), radius=r, fill=f, outline=0)
            
        def epd_text(y, text, style=0, font_override=None):
            font = font_override if font_override else font_medium
            bbox = draw.textbbox((0, 0), text, font=font)
            tw = bbox[2] - bbox[0]
            tx = (epd_width - tw) // 2
            
            if style == 0:
                draw.text((tx, y), text, font=font, fill=0)
            elif style == 1:
                th = bbox[3] - bbox[1]
                draw.rectangle((tx - 3, y - 1, tx + tw + 3, y + th + 1), fill=0)
                draw.text((tx, y), text, font=font, fill=1)
            elif style == 2:
                draw.text((tx, y), text, font=font, fill=0)
                
        def epd_text_left(x, y, text, font=None):
            f = font if font else font_medium
            draw.text((x, y), text, font=f, fill=0)
            
        def epd_draw_header(title):
            epd_text(10, title, 1, font_title)
            epd_line(20, 42, 180, 42)
            
        def epd_draw_footer(text):
            epd_line(10, 172, 190, 172)
            epd_text(178, text, 0, font_small)
            
        if mode == "CLOCK":
            epd_draw_header("时钟" if language == 1 else "CLOCK")
            date_str = "2026-05-20"
            day_str = "Wednesday" if language == 0 else "星期三"
            epd_text(70, date_str, 0, font_medium)
            epd_text(100, "11:43:52", 0, font_large)
            footer_str = f"{day_str}  |  BLE ON"
            epd_text(150, footer_str, 0, font_small)
            epd_text(182, "Press OK for Menu" if language == 0 else "按OK进入菜单", 0, font_small)
            
        elif mode == "CLAUDE_USAGE":
            epd_draw_header("CLAUDE USAGE" if language == 0 else "CLAUDE 额度")
            status_str = "Status: OK"
            epd_text_left(20, 50, "Sonnet 3.5", font_small)
            epd_text_left(120, 50, status_str, font_small)
            
            # Current Period
            pct_current = 15.0
            epd_text_left(20, 68, f"Current Period: {pct_current:.1f}%", font_small)
            epd_rect(20, 80, 160, 10, fill=False)
            fill_w = int(156 * (pct_current / 100.0))
            if fill_w > 0:
                epd_rect(22, 82, fill_w, 6, fill=True)
            curr_lbl = "1.50M / 10.00M (Reset 2h)"
            epd_text_left(20, 93, curr_lbl, font_small)
            
            # Weekly Quota
            pct_weekly = 45.0
            epd_text_left(20, 113, f"Weekly Quota: {pct_weekly:.1f}%", font_small)
            epd_rect(20, 125, 160, 10, fill=False)
            fill_w_wk = int(156 * (pct_weekly / 100.0))
            if fill_w_wk > 0:
                epd_rect(22, 127, fill_w_wk, 6, fill=True)
            wk_lbl = "22.5M / 50.0M (Reset 5d)"
            epd_text_left(20, 138, wk_lbl, font_small)
            
            epd_draw_footer("Long UP to exit")
            
        elif mode == "MERIT":
            epd_draw_header("功德计数" if language == 1 else "MERIT COUNTER")
            epd_text(60, "ACCUMULATED MERIT" if language == 0 else "当前累计功德", 0, font_small)
            epd_rounded_rect(30, 80, 140, 45, r=6, fill=False)
            epd_text(90, "108", 1, font_large)
            epd_text(140, "Press DOWN to knock Wooden Fish" if language == 0 else "按下键积攒功德 (+1)", 0, font_small)
            epd_draw_footer("Long UP to exit" if language == 0 else "长按上键退出")
            
        return fb

    # Render and save images
    render_screen("CLOCK").save(os.path.join(out_dir, "clock_screen.png"))
    render_screen("CLAUDE_USAGE").save(os.path.join(out_dir, "claude_usage_screen.png"))
    render_screen("MERIT").save(os.path.join(out_dir, "merit_screen.png"))
    print("Screens saved to:", out_dir)

if __name__ == "__main__":
    create_images(sys.argv[1] if len(sys.argv) > 1 else "/tmp")
