#!/usr/bin/env python3
import tkinter as tk
from tkinter import ttk
from PIL import Image, ImageDraw, ImageFont
import datetime
import random

# Color constants for simulator
BG_COLOR = "#FFFFFF"  # White background
FG_COLOR = "#000000"  # Black foreground
CARD_BG = "#F0F0F0"   # Light gray for mockups/guidelines
ACCENT_COLOR = "#333333"

# MBTI Types
MBTI_TYPES = [
    "INTJ", "INTP", "ENTJ", "ENTP",
    "INFJ", "INFP", "ENFJ", "ENFP",
    "ISTJ", "ISFJ", "ESTJ", "ESFJ",
    "ISTP", "ISFP", "ESTP", "ESFP"
]

# Daily Fortune Quotes (From Firmware string pool)
FORTUNE_QUOTES = [
    "Finish the single most important task first today.",
    "Write three conclusions before speaking in meetings.",
    "Confirm deadline and criteria before taking new work.",
    "Do not push too many tasks at once; clear one first.",
    "Use ten minutes to remove one delayed small issue.",
    "When stuck, research first instead of guessing.",
    "Tidy the desk before starting deep work.",
    "Check urgency before replying to messages.",
    "Follow the checklist today, not impulses.",
    "Eliminate clearly unworkable options before deciding.",
    "If you work late, set an end time first.",
    "Finish the required part before optimizing.",
    "Promise one less thing so execution stays steady.",
    "Ask about vague requests before accepting them.",
    "Log spending before buying anything today.",
    "Set one file naming rule before saving.",
    "A short social visit is fine; protect your rhythm.",
    "Good day to review, not to open a new hole.",
    "Put essentials back now to save time tonight.",
    "Pause five minutes before replying in emotion."
]

# Setup Menu Items
SETUP_ITEMS = [
    ("Language / 语言", "English / 中文"),
    ("Sleep Time / 休眠时间", "10s / 30s / 60s"),
    ("Key Sound / 按键音", "ON / OFF"),
    ("Guide Pages / 知识库", "SHOW / HIDE"),
    ("BLE Template / 蓝牙模板", "PPT / Camera / Media"),
    ("Wallpaper / 壁纸", "Default / Custom"),
    ("OTA Server / OTA服务器", "Default"),
    ("Diagnostics / 诊断", "Run Tests"),
    ("Wi-Fi OTA / 固件更新", "Check Update"),
    ("Shutdown / 关机", "Power Off"),
    ("About Dot. / 关于", "v1.2.6")
]

class Band0Simulator:
    def __init__(self, root):
        self.root = root
        self.root.title("Band-0 UI Simulator / Viewer")
        self.root.geometry("700x550")
        self.root.configure(bg="#1E1E1E")
        self.root.resizable(False, False)

        # Simulator State
        self.current_mode = "CLOCK"
        self.language = 0 # 0=English, 1=Chinese
        self.merit_count = 108
        self.mbti_index = 0
        self.mbti_guide_page = 0  # 0=Type selection, 1=Details
        self.menu_selected = 0
        self.setup_selected = 0
        self.ble_connected = False
        self.ble_mode = 0  # 0=PPT, 1=Camera, 2=Media
        self.sleep_time = 30
        self.key_sound = True
        self.guide_hidden = False
        
        # Claude usage state
        self.claude_current_used = 1.25
        self.claude_current_total = 10.0
        self.claude_weekly_used = 15.6
        self.claude_weekly_total = 50.0
        self.claude_model = "Claude 3.5 Sonnet"
        self.claude_reset_hours = 3
        self.claude_reset_days = 2
        
        # Answers / Fortune State
        self.answers_visible = False
        self.current_answer = ""
        self.current_fortune = ""
        
        # EPD Screen Frame Buffer (200x200 PIL Image)
        self.scale = 2
        self.epd_width = 200
        self.epd_height = 200
        self.fb = Image.new("1", (self.epd_width, self.epd_height), 1) # 1 = White
        self.draw = ImageDraw.Draw(self.fb)
        
        # Try to load clean fonts
        try:
            self.font_title = ImageFont.truetype("/System/Library/Fonts/Supplemental/Arial.ttf", 16)
            self.font_medium = ImageFont.truetype("/System/Library/Fonts/Supplemental/Arial.ttf", 12)
            self.font_small = ImageFont.truetype("/System/Library/Fonts/Supplemental/Arial.ttf", 10)
            self.font_large = ImageFont.truetype("/System/Library/Fonts/Supplemental/Arial.ttf", 24)
        except Exception:
            self.font_title = ImageFont.load_default()
            self.font_medium = ImageFont.load_default()
            self.font_small = ImageFont.load_default()
            self.font_large = ImageFont.load_default()

        # Build UI layout
        self.create_widgets()
        
        # Keyboard bindings
        self.root.bind("<Up>", lambda e: self.handle_key("UP"))
        self.root.bind("<Down>", lambda e: self.handle_key("DOWN"))
        self.root.bind("<Return>", lambda e: self.handle_key("CONFIRM"))
        self.root.bind("<Escape>", lambda e: self.handle_key("BACK"))
        self.root.bind("<BackSpace>", lambda e: self.handle_key("BACK"))
        
        # Tick timer for updating clock
        self.tick()

    def create_widgets(self):
        # Left Panel (EPD Device Mockup)
        left_panel = tk.Frame(self.root, bg="#1E1E1E", width=450)
        left_panel.pack(side=tk.LEFT, fill=tk.BOTH, expand=True)

        # Device Shell Header
        shell_lbl = tk.Label(left_panel, text="BAND-0 SIMULATOR (200x200 EPD)", fg="#888888", bg="#1E1E1E", font=("Arial", 10, "bold"))
        shell_lbl.pack(pady=10)

        # EPD Screen Canvas (Scaled up 2x for rendering, displayed via PhotoImage)
        self.canvas_size = self.epd_width * self.scale
        self.canvas = tk.Canvas(left_panel, width=self.canvas_size, height=self.canvas_size, bg="white", highlightthickness=2, highlightbackground="#333333")
        self.canvas.pack(pady=10)

        # Keyboard Guide
        guide_lbl = tk.Label(left_panel, text="Keys: ↑ = UP  |  ↓ = DN  |  Enter = OK  |  Esc = BACK", fg="#666666", bg="#1E1E1E", font=("Arial", 9))
        guide_lbl.pack(pady=5)

        # Right Panel (Controls & State modifiers)
        right_panel = tk.Frame(self.root, bg="#2A2A2A", width=250)
        right_panel.pack(side=tk.RIGHT, fill=tk.BOTH, padx=10, pady=10)

        # Control Panel Title
        ctrl_lbl = tk.Label(right_panel, text="CONTROL PANEL", fg="#FFFFFF", bg="#2A2A2A", font=("Arial", 12, "bold"))
        ctrl_lbl.pack(pady=10)

        # Mode Selection
        mode_frame = tk.LabelFrame(right_panel, text="Jump to Mode", fg="#AAAAAA", bg="#2A2A2A")
        mode_frame.pack(fill=tk.X, padx=10, pady=5)
        
        self.modes_list = ["CLOCK", "MENU", "ANSWERS", "FORTUNE", "COIN", "DICE", "MERIT", "BT_PAGER", "MBTI_GUIDE", "SETUP", "CLAUDE_USAGE"]
        self.mode_var = tk.StringVar(value=self.current_mode)
        self.mode_cb = ttk.Combobox(mode_frame, textvariable=self.mode_var, values=self.modes_list, state="readonly")
        self.mode_cb.pack(fill=tk.X, padx=5, pady=5)
        self.mode_cb.bind("<<ComboboxSelected>>", self.on_mode_jump)

        # State Toggles
        state_frame = tk.LabelFrame(right_panel, text="Simulator Variables", fg="#AAAAAA", bg="#2A2A2A")
        state_frame.pack(fill=tk.X, padx=10, pady=5)

        # Language Toggle
        self.lang_btn = tk.Button(state_frame, text="Lang: English", command=self.toggle_lang, bg="#333333", fg="white", relief=tk.FLAT)
        self.lang_btn.pack(fill=tk.X, padx=5, pady=2)

        # BLE Status Toggle
        self.ble_btn = tk.Button(state_frame, text="BLE Status: Disconnected", command=self.toggle_ble, bg="#333333", fg="white", relief=tk.FLAT)
        self.ble_btn.pack(fill=tk.X, padx=5, pady=2)

        # Merit Adjust
        merit_frame = tk.Frame(state_frame, bg="#2A2A2A")
        merit_frame.pack(fill=tk.X, padx=5, pady=2)
        tk.Label(merit_frame, text="Merit Count:", fg="white", bg="#2A2A2A").pack(side=tk.LEFT)
        self.merit_entry = tk.Entry(merit_frame, width=8)
        self.merit_entry.insert(0, str(self.merit_count))
        self.merit_entry.pack(side=tk.RIGHT)
        self.merit_entry.bind("<KeyRelease>", self.on_merit_change)

        # Claude usage modifiers
        claude_frame = tk.LabelFrame(right_panel, text="Claude Usage Mock Data", fg="#AAAAAA", bg="#2A2A2A")
        claude_frame.pack(fill=tk.X, padx=10, pady=5)
        
        # Slider for current used MB
        tk.Label(claude_frame, text="Current Used (MB):", fg="white", bg="#2A2A2A", font=("Arial", 8)).pack(anchor=tk.W, padx=5)
        self.curr_slider = tk.Scale(claude_frame, from_=0, to=10, resolution=0.1, orient=tk.HORIZONTAL, bg="#2A2A2A", fg="white", highlightthickness=0, command=lambda v: self.update_claude_slider(v))
        self.curr_slider.set(self.claude_current_used)
        self.curr_slider.pack(fill=tk.X, padx=5)

        # Physical Button Simulator
        btn_frame = tk.LabelFrame(right_panel, text="Hardware Buttons", fg="#AAAAAA", bg="#2A2A2A")
        btn_frame.pack(fill=tk.X, padx=10, pady=10)

        up_btn = tk.Button(btn_frame, text="UP (Short)", command=lambda: self.handle_key("UP"), bg="#444444", fg="white")
        up_btn.grid(row=0, column=0, padx=5, pady=5, sticky="ew")
        
        dn_btn = tk.Button(btn_frame, text="DN (Short)", command=lambda: self.handle_key("DOWN"), bg="#444444", fg="white")
        dn_btn.grid(row=0, column=1, padx=5, pady=5, sticky="ew")

        back_btn = tk.Button(btn_frame, text="BACK (Long UP)", command=lambda: self.handle_key("BACK"), bg="#663333", fg="white")
        back_btn.grid(row=1, column=0, padx=5, pady=5, sticky="ew")
        
        ok_btn = tk.Button(btn_frame, text="OK (Long DN)", command=lambda: self.handle_key("CONFIRM"), bg="#336633", fg="white")
        ok_btn.grid(row=1, column=1, padx=5, pady=5, sticky="ew")

        btn_frame.columnconfigure(0, weight=1)
        btn_frame.columnconfigure(1, weight=1)

    def on_mode_jump(self, event=None):
        self.current_mode = self.mode_var.get()
        self.mbti_guide_page = 0
        self.answers_visible = False
        self.trigger_redraw()

    def toggle_lang(self):
        self.language = 1 - self.language
        self.lang_btn.configure(text=f"Lang: {'Chinese' if self.language == 1 else 'English'}")
        self.trigger_redraw()

    def toggle_ble(self):
        self.ble_connected = not self.ble_connected
        self.ble_btn.configure(text=f"BLE Status: {'Connected' if self.ble_connected else 'Disconnected'}")
        self.trigger_redraw()

    def on_merit_change(self, event=None):
        try:
            self.merit_count = int(self.merit_entry.get())
            self.trigger_redraw()
        except ValueError:
            pass

    def update_claude_slider(self, val):
        try:
            self.claude_current_used = float(val)
            self.trigger_redraw()
        except ValueError:
            pass

    # Simulator loop / timer
    def tick(self):
        if self.current_mode == "CLOCK":
            self.trigger_redraw()
        self.root.after(1000, self.tick)

    def trigger_redraw(self):
        self.render_screen()
        # Convert 1-bit PIL image to PhotoImage (via 2x resizing for clear viewing)
        scaled_img = self.fb.resize((self.canvas_size, self.canvas_size), Image.NEAREST)
        self.tk_img = tk.PhotoImage(width=self.canvas_size, height=self.canvas_size)
        
        # Load image into PhotoImage
        # A simple way to put PIL image onto canvas without external ImageTk dependency
        data = []
        for y in range(self.canvas_size):
            row = []
            for x in range(self.canvas_size):
                p = scaled_img.getpixel((x, y))
                row.append("#FFFFFF" if p == 1 else "#000000")
            data.append(row)
        
        self.tk_img.put(data)
        self.canvas.create_image(0, 0, anchor=tk.NW, image=self.tk_img)

    # ── KEY HANDLERS ───────────────────────────────────────────
    def handle_key(self, key):
        if self.current_mode == "CLOCK":
            if key == "CONFIRM":
                self.current_mode = "MENU"
                self.menu_selected = 0
            elif key == "DOWN":
                # Toggle Bluetooth status directly in Clock (shortcut)
                self.toggle_ble()
                
        elif self.current_mode == "MENU":
            items = ["ANSWERS", "FORTUNE", "MERIT", "BT_PAGER", "MBTI_GUIDE", "SETUP", "CLAUDE_USAGE"]
            if key == "UP":
                self.menu_selected = (self.menu_selected - 1) % len(items)
            elif key == "DOWN":
                self.menu_selected = (self.menu_selected + 1) % len(items)
            elif key == "CONFIRM":
                self.current_mode = items[self.menu_selected]
                self.answers_visible = False
            elif key == "BACK":
                self.current_mode = "CLOCK"
                
        elif self.current_mode == "ANSWERS":
            if key == "BACK":
                self.current_mode = "MENU"
                self.menu_selected = 0
            elif key == "DOWN" or key == "CONFIRM":
                self.answers_visible = True
                answers_pool = [
                    "YES, BUT DON'T FORCE IT", "BETTER TO WAIT", "DO IT EARLY", 
                    "ABSOLUTELY NOT", "IT SEEMS ASSURED", "CREATE MORE SPACE FOR IT",
                    "KEEP IT TO YOURSELF", "ALLOW YOURSELF TO REST FIRST", "IT IS SENSIBLE"
                ]
                self.current_answer = random.choice(answers_pool)
            elif key == "UP":
                self.answers_visible = False
                
        elif self.current_mode == "FORTUNE":
            if key == "BACK":
                self.current_mode = "MENU"
                self.menu_selected = 1
            elif key == "DOWN" or key == "CONFIRM":
                self.answers_visible = True
                self.current_fortune = random.choice(FORTUNE_QUOTES)
            elif key == "UP":
                self.answers_visible = False

        elif self.current_mode == "MERIT":
            if key == "BACK":
                self.current_mode = "MENU"
                self.menu_selected = 2
            elif key == "DOWN" or key == "CONFIRM":
                self.merit_count += 1
                self.merit_entry.delete(0, tk.END)
                self.merit_entry.insert(0, str(self.merit_count))
                
        elif self.current_mode == "BT_PAGER":
            if key == "BACK":
                self.current_mode = "MENU"
                self.menu_selected = 3
            elif key == "CONFIRM":
                self.ble_mode = (self.ble_mode + 1) % 3
                
        elif self.current_mode == "MBTI_GUIDE":
            if self.mbti_guide_page == 0:
                if key == "UP":
                    self.mbti_index = (self.mbti_index - 1) % 16
                elif key == "DOWN":
                    self.mbti_index = (self.mbti_index + 1) % 16
                elif key == "CONFIRM":
                    self.mbti_guide_page = 1
                elif key == "BACK":
                    self.current_mode = "MENU"
                    self.menu_selected = 4
            else:
                if key == "BACK" or key == "CONFIRM":
                    self.mbti_guide_page = 0
                    
        elif self.current_mode == "SETUP":
            if key == "UP":
                self.setup_selected = (self.setup_selected - 1) % len(SETUP_ITEMS)
            elif key == "DOWN":
                self.setup_selected = (self.setup_selected + 1) % len(SETUP_ITEMS)
            elif key == "CONFIRM":
                self.handle_setup_confirm()
            elif key == "BACK":
                self.current_mode = "MENU"
                self.menu_selected = 5
                
        elif self.current_mode == "CLAUDE_USAGE":
            if key == "BACK" or key == "CONFIRM":
                self.current_mode = "MENU"
                self.menu_selected = 6

        self.mode_var.set(self.current_mode)
        self.trigger_redraw()

    def handle_setup_confirm(self):
        item = SETUP_ITEMS[self.setup_selected][0]
        if "Language" in item:
            self.toggle_lang()
        elif "Key Sound" in item:
            self.key_sound = not self.key_sound
        elif "Guide Pages" in item:
            self.guide_hidden = not self.guide_hidden
        elif "BLE Template" in item:
            self.ble_mode = (self.ble_mode + 1) % 3

    # ── EPD GRAPHICS DRAW HELPERS ──────────────────────────────
    def epd_clear(self):
        self.draw.rectangle((0, 0, self.epd_width, self.epd_height), fill=1) # 1 = White

    def epd_line(self, x1, y1, x2, y2):
        self.draw.line((x1, y1, x2, y2), fill=0) # 0 = Black

    def epd_rect(self, x, y, w, h, fill=False):
        f = 0 if fill else None
        o = 0
        self.draw.rectangle((x, y, x + w, y + h), fill=f, outline=o)

    def epd_rounded_rect(self, x, y, w, h, r=4, fill=False):
        f = 0 if fill else None
        o = 0
        self.draw.rounded_rectangle((x, y, x + w, y + h), radius=r, fill=f, outline=o)

    def epd_text(self, y, text, style=0, font_override=None):
        # Calculates centered text
        font = font_override if font_override else self.font_medium
        # Get text size
        bbox = self.draw.textbbox((0, 0), text, font=font)
        tw = bbox[2] - bbox[0]
        tx = (self.epd_width - tw) // 2
        
        if style == 0:  # Normal black on white
            self.draw.text((tx, y), text, font=font, fill=0)
        elif style == 1:  # Inverted white on black (for selected items/titles)
            # Find height of font bounding box
            th = bbox[3] - bbox[1]
            # Draw black box slightly larger than text
            self.draw.rectangle((tx - 3, y - 1, tx + tw + 3, y + th + 1), fill=0)
            self.draw.text((tx, y), text, font=font, fill=1)
        elif style == 2:  # Light gray or dotted (simulated as normal text in 1-bit)
            self.draw.text((tx, y), text, font=font, fill=0)

    def epd_text_left(self, x, y, text, font=None):
        if not font:
            font = self.font_medium
        self.draw.text((x, y), text, font=font, fill=0)

    def epd_draw_header(self, title):
        self.epd_text(10, title, 1, self.font_title)
        # Divider line exactly at y=42
        self.epd_line(20, 42, 180, 42)

    def epd_draw_footer(self, text):
        self.epd_line(10, 172, 190, 172)
        self.epd_text(178, text, 0, self.font_small)

    # ── MODE RENDERING PIPELINES ────────────────────────────────
    def render_screen(self):
        self.epd_clear()
        
        if self.current_mode == "CLOCK":
            self.render_clock()
        elif self.current_mode == "MENU":
            self.render_menu()
        elif self.current_mode == "ANSWERS":
            self.render_answers()
        elif self.current_mode == "FORTUNE":
            self.render_fortune()
        elif self.current_mode == "MERIT":
            self.render_merit()
        elif self.current_mode == "BT_PAGER":
            self.render_bt_pager()
        elif self.current_mode == "MBTI_GUIDE":
            self.render_mbti_guide()
        elif self.current_mode == "SETUP":
            self.render_setup()
        elif self.current_mode == "CLAUDE_USAGE":
            self.render_claude_usage()

    # 1. Clock Screen (Original UI Restored)
    def render_clock(self):
        self.epd_draw_header("时钟" if self.language == 1 else "CLOCK")
        
        # Display Date
        now = datetime.datetime.now()
        date_str = now.strftime("%Y-%m-%d")
        day_str = now.strftime("%A") if self.language == 0 else ["星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六"][now.weekday()]
        
        # Year Month Day
        self.epd_text(70, date_str, 0, self.font_medium)
        
        # Large Time
        time_str = now.strftime("%H:%M:%S")
        self.epd_text(100, time_str, 0, self.font_large)
        
        # Day of week / Connection state at bottom
        footer_str = f"{day_str}  |  {'BLE ON' if self.ble_connected else 'BLE OFF'}"
        self.epd_text(150, footer_str, 0, self.font_small)
        
        self.epd_text(182, "Press OK for Menu" if self.language == 0 else "按OK进入菜单", 0, self.font_small)

    # 2. Main Menu
    def render_menu(self):
        self.epd_draw_header("应用列表" if self.language == 1 else "APPLICATIONS")
        
        items = [
            ("ANSWERS", "答案之书"),
            ("FORTUNE", "电子签语"),
            ("MERIT", "功德计数"),
            ("BT_PAGER", "蓝牙翻页器"),
            ("MBTI_GUIDE", "MBTI 指南"),
            ("SETUP", "设置"),
            ("CLAUDE_USAGE", "Claude 额度")
        ]
        
        # Page menu (3 items visible at once)
        start_idx = max(0, self.menu_selected - 1)
        if start_idx + 3 > len(items):
            start_idx = max(0, len(items) - 3)
            
        y = 55
        for i in range(start_idx, min(start_idx + 3, len(items))):
            name_en, name_zh = items[i]
            label = name_zh if self.language == 1 else name_en
            
            is_selected = (i == self.menu_selected)
            if is_selected:
                self.epd_rounded_rect(15, y - 2, 170, 28, r=4, fill=True)
                # Invert text inside filled rect
                self.draw.text((30, y + 4), f"> {label}", font=self.font_medium, fill=1)
            else:
                self.epd_rounded_rect(15, y - 2, 170, 28, r=4, fill=False)
                self.draw.text((30, y + 4), label, font=self.font_medium, fill=0)
            y += 34
            
        self.epd_draw_footer("↑/↓: Navigate  |  OK: Open" if self.language == 0 else "上下: 导航  |  OK: 打开")

    # 3. Answers Screen (Original UI Restored)
    def render_answers(self):
        self.epd_draw_header("答案之书" if self.language == 1 else "ANSWERS")
        
        if not self.answers_visible:
            self.epd_text(70, "Ask a YES/NO question" if self.language == 0 else "想好一个是非问题", 0)
            self.epd_text(90, "in your mind, then" if self.language == 0 else "闭上眼睛，然后", 0)
            self.epd_rounded_rect(40, 115, 120, 25, r=4, fill=True)
            self.draw.text((60, 120), "PRESS DOWN" if self.language == 0 else "按下键获取", font=self.font_medium, fill=1)
        else:
            # Card View
            self.epd_rounded_rect(15, 55, 170, 80, r=6, fill=False)
            self.epd_text(65, "ANSWER:" if self.language == 0 else "你的答案:", 0, self.font_small)
            
            # Format large text
            ans = self.current_answer if self.language == 0 else "确实如此，但别强求"
            self.epd_text(95, ans, 1, self.font_medium)
            
            self.epd_text(145, "Press UP to reset" if self.language == 0 else "按上键重置", 0, self.font_small)

        self.epd_draw_footer("Long UP to exit" if self.language == 0 else "长按上键退出")

    # 4. Fortune Screen (Original UI Restored)
    def render_fortune(self):
        self.epd_draw_header("电子签语" if self.language == 1 else "FORTUNE")
        
        if not self.answers_visible:
            self.epd_text(75, "Draw a Daily Advice Card" if self.language == 0 else "求取一张今日签语", 0)
            self.epd_rounded_rect(40, 110, 120, 25, r=4, fill=True)
            self.draw.text((55, 115), "PRESS DOWN" if self.language == 0 else "按下键求签", font=self.font_medium, fill=1)
        else:
            # Card View
            self.epd_rounded_rect(15, 55, 170, 95, r=6, fill=False)
            self.epd_text(60, "TODAY'S ADVICE:" if self.language == 0 else "今日签语:", 0, self.font_small)
            
            # Multi-line word wrapping for advice
            adv = self.current_fortune if self.language == 0 else "做事踏实，稳步推进，切忌浮躁"
            words = adv.split()
            lines = []
            curr_line = ""
            for w in words:
                if len(curr_line + " " + w) > 22:
                    lines.append(curr_line)
                    curr_line = w
                else:
                    curr_line = curr_line + " " + w if curr_line else w
            lines.append(curr_line)
            
            y_start = 80
            for line in lines[:3]:
                self.epd_text(y_start, line, 0, self.font_medium)
                y_start += 16
                
            self.epd_text(155, "Press UP to redraw" if self.language == 0 else "按上键重抽", 0, self.font_small)

        self.epd_draw_footer("Long UP to exit" if self.language == 0 else "长按上键退出")

    # 5. Merit Screen (Original UI Restored)
    def render_merit(self):
        self.epd_draw_header("功德计数" if self.language == 1 else "MERIT COUNTER")
        
        self.epd_text(60, "ACCUMULATED MERIT" if self.language == 0 else "当前累计功德", 0, self.font_small)
        
        # Display counter inside a beautiful large board
        self.epd_rounded_rect(30, 80, 140, 45, r=6, fill=False)
        self.epd_text(90, f"{self.merit_count}", 1, self.font_large)
        
        # Micro-animation mockup: showing "+1 Merit" prompt
        self.epd_text(140, "Press DOWN to knock Wooden Fish" if self.language == 0 else "按下键积攒功德 (+1)", 0, self.font_small)
        
        self.epd_draw_footer("Long UP to exit" if self.language == 0 else "长按上键退出")

    # 6. BT Pager Screen (Original UI Restored)
    def render_bt_pager(self):
        self.epd_draw_header("蓝牙翻页器" if self.language == 1 else "BLE PAGER")
        
        # Connection status pill
        status_text = "CONNECTED" if self.ble_connected else "ADVERTISING..."
        status_zh = "已连接" if self.ble_connected else "广播中..."
        self.epd_text(55, status_zh if self.language == 1 else status_text, 1, self.font_small)
        
        # Show configuration templates
        templates = ["PPT Clicker", "Camera Shutter", "Media Control"]
        templates_zh = ["PPT 翻页笔", "相机快门", "媒体控制器"]
        active_tpl = templates_zh[self.ble_mode] if self.language == 1 else templates[self.ble_mode]
        
        self.epd_text(90, "ACTIVE PROFILE:" if self.language == 0 else "当前模板:", 0, self.font_small)
        self.epd_rounded_rect(30, 105, 140, 25, r=4, fill=False)
        self.epd_text(110, active_tpl, 0, self.font_medium)
        
        self.epd_text(145, "Press OK to switch profiles" if self.language == 0 else "按OK键切换模式", 0, self.font_small)
        
        self.epd_draw_footer("Long UP to exit" if self.language == 0 else "长按上键退出")

    # 7. MBTI Guide
    def render_mbti_guide(self):
        self.epd_draw_header("MBTI 指南" if self.language == 1 else "MBTI GUIDE")
        
        if self.mbti_guide_page == 0:
            # Type selection list
            self.epd_text(50, "Select MBTI personality:" if self.language == 0 else "选择人格类型:", 0, self.font_small)
            
            selected_type = MBTI_TYPES[self.mbti_index]
            
            # Grid view mockup or card view
            self.epd_rounded_rect(45, 75, 110, 40, r=6, fill=True)
            self.draw.text((80, 85), selected_type, font=self.font_title, fill=1)
            
            # Helper text for selection
            self.epd_text(130, "↑/↓: Change  |  OK: Select" if self.language == 0 else "上下键切换  |  OK查看详情", 0, self.font_small)
        else:
            # Details Page
            selected_type = MBTI_TYPES[self.mbti_index]
            self.epd_text(50, f"PERSONALITY: {selected_type}" if self.language == 0 else f"人格特征: {selected_type}", 1, self.font_medium)
            
            # Advice related to personality
            adv = FORTUNE_QUOTES[self.mbti_index % len(FORTUNE_QUOTES)]
            self.epd_text(80, "Daily reminder for you:" if self.language == 0 else "今日建议:", 0, self.font_small)
            
            # Wrap advice text
            words = adv.split()
            lines = []
            curr_line = ""
            for w in words:
                if len(curr_line + " " + w) > 20:
                    lines.append(curr_line)
                    curr_line = w
                else:
                    curr_line = curr_line + " " + w if curr_line else w
            lines.append(curr_line)
            
            y_start = 100
            for line in lines[:3]:
                self.epd_text(y_start, line, 0, self.font_medium)
                y_start += 16
                
            self.epd_text(150, "Press OK to back" if self.language == 0 else "按确认键返回", 0, self.font_small)

        self.epd_draw_footer("Long UP to exit" if self.language == 0 else "长按上键退出")

    # 8. Setup Menu
    def render_setup(self):
        self.epd_draw_header("系统设置" if self.language == 1 else "SETTINGS")
        
        # Display 3 setup items at a time
        start_idx = max(0, self.setup_selected - 1)
        if start_idx + 3 > len(SETUP_ITEMS):
            start_idx = max(0, len(SETUP_ITEMS) - 3)
            
        y = 52
        for i in range(start_idx, min(start_idx + 3, len(SETUP_ITEMS))):
            label, val = SETUP_ITEMS[i]
            
            # Localize labels
            if self.language == 1:
                if "Language" in label: label = "语言"
                elif "Sleep Time" in label: label = "休眠时间"
                elif "Key Sound" in label: label = "按键音"
                elif "Guide Pages" in label: label = "知识库"
                elif "BLE Template" in label: label = "蓝牙模板"
                elif "Wallpaper" in label: label = "壁纸"
                elif "OTA Server" in label: label = "OTA服务器"
                elif "Diagnostics" in label: label = "诊断"
                elif "Wi-Fi OTA" in label: label = "固件更新"
                elif "Shutdown" in label: label = "关机"
                elif "About" in label: label = "关于"
                
                # Localize values
                if "ON / OFF" in val: val = "开" if self.key_sound else "关"
                elif "SHOW / HIDE" in val: val = "隐藏" if self.guide_hidden else "显示"
                elif "PPT" in val: val = ["PPT 翻页", "相机快门", "媒体控制"][self.ble_mode]
                elif "English" in val: val = "中文"
            else:
                # English values
                if "ON / OFF" in val: val = "ON" if self.key_sound else "OFF"
                elif "SHOW / HIDE" in val: val = "HIDE" if self.guide_hidden else "SHOW"
                elif "PPT" in val: val = ["PPT Clicker", "Camera", "Media"][self.ble_mode]
            
            is_selected = (i == self.setup_selected)
            if is_selected:
                self.epd_rounded_rect(10, y - 2, 180, 24, r=4, fill=True)
                # Inverted text
                self.draw.text((15, y + 2), f"> {label}", font=self.font_small, fill=1)
                self.draw.text((135, y + 2), val, font=self.font_small, fill=1)
            else:
                self.epd_rounded_rect(10, y - 2, 180, 24, r=4, fill=False)
                self.draw.text((15, y + 2), label, font=self.font_small, fill=0)
                self.draw.text((135, y + 2), val, font=self.font_small, fill=0)
            y += 28
            
        self.epd_draw_footer("↑/↓: Select  |  OK: Change" if self.language == 0 else "上下: 选择  |  OK: 修改")

    # 9. Claude Usage (New Premium Single-Screen Design)
    def render_claude_usage(self):
        self.epd_draw_header("CLAUDE USAGE" if self.language == 0 else "CLAUDE 额度")
        
        # Model & Bridge status
        status_str = "Status: OK" if self.ble_connected else "Status: OFFLINE"
        if self.language == 1:
            status_str = "连接状态: 正常" if self.ble_connected else "连接状态: 离线"
            
        self.epd_text_left(20, 50, self.claude_model, self.font_small)
        self.epd_text_left(120, 50, status_str, self.font_small)
        
        # Single screen layout showing both Current and Weekly usage!
        # Current Period
        pct_current = (self.claude_current_used / self.claude_current_total) * 100
        self.epd_text_left(20, 68, f"Current Period: {pct_current:.1f}%" if self.language == 0 else f"本期用量: {pct_current:.1f}%", self.font_small)
        # Custom C progress bar logic
        # Border box
        self.epd_rect(20, 80, 160, 10, fill=False)
        # Fill box based on percentage
        fill_w = int(156 * (pct_current / 100.0))
        if fill_w > 0:
            self.epd_rect(22, 82, min(fill_w, 156), 6, fill=True)
            
        # Current details: x.xx MB / x.xx MB
        curr_lbl = f"{self.claude_current_used:.2f}M / {self.claude_current_total:.2f}M (Reset {self.claude_reset_hours}h)"
        if self.language == 1:
            curr_lbl = f"{self.claude_current_used:.2f}M / {self.claude_current_total:.2f}M ({self.claude_reset_hours}小时后重置)"
        self.epd_text_left(20, 93, curr_lbl, self.font_small)

        # Weekly Quota
        pct_weekly = (self.claude_weekly_used / self.claude_weekly_total) * 100
        self.epd_text_left(20, 113, f"Weekly Quota: {pct_weekly:.1f}%" if self.language == 0 else f"周用量额度: {pct_weekly:.1f}%", self.font_small)
        self.epd_rect(20, 125, 160, 10, fill=False)
        fill_w_wk = int(156 * (pct_weekly / 100.0))
        if fill_w_wk > 0:
            self.epd_rect(22, 127, min(fill_w_wk, 156), 6, fill=True)
            
        wk_lbl = f"{self.claude_weekly_used:.1f}M / {self.claude_weekly_total:.1f}M (Reset {self.claude_reset_days}d)"
        if self.language == 1:
            wk_lbl = f"{self.claude_weekly_used:.1f}M / {self.claude_weekly_total:.1f}M ({self.claude_reset_days}天后重置)"
        self.epd_text_left(20, 138, wk_lbl, self.font_small)
        
        self.epd_draw_footer("Long UP to exit" if self.language == 0 else "长按上键退出")


if __name__ == "__main__":
    root = tk.Tk()
    app = Band0Simulator(root)
    # Perform initial redraw
    app.trigger_redraw()
    root.mainloop()
