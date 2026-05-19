/**
 * Main UI rendering for Band-0.
 *
 * Draws screens for all application modes:
 *   - Answers / Fortune cards
 *   - Merit (功德) counter
 *   - BLE pager
 *   - Clock / lock screen
 *   - MBTI guide
 *   - Setup menu
 *
 * Calls display_epd functions to draw into the framebuffer,
 * then flushes to the EPD.
 */

#include <string.h>
#include <stdio.h>
#include "esp_log.h"
#include "esp_system.h"
#include "app_config.h"
#include "display_epd.h"
#include "gpio_key.h"
#include "wallpaper.h"
#include "ui_render.h"
#include "claude_usage.h"

/* ── Global Redraw Flag ──────────────────────────────────────── */
static bool s_redraw_requested = true;
static int  s_selected_row = 0;

/* ── Helpers ─────────────────────────────────────────────────── */
void ui_request_redraw(void)    { s_redraw_requested = true; }
void ui_clear_redraw_request(void) { s_redraw_requested = false; }
bool ui_redraw_requested(void)  { return s_redraw_requested; }

/* ── Key Event Handling per Mode ─────────────────────────────── */
bool ui_handle_key_event(key_event_t ev)
{
    if (ev.type != 1 || ev.event == 0) return false;

    LOGI("key: event=%d long=%d", ev.event, ev.is_long);

    app_mode_t mode = current_mode();

    switch (ev.event) {
    case KEY_EVENT_CONFIRM:  /* long press down = confirm */
        if (mode == APP_MODE_SETUP) {
            /* Execute selected setup option */
            LOGI("setup: selected row %d", s_selected_row);
        }
        return true;

    case KEY_EVENT_BACK:     /* long press up = back */
        set_current_mode(APP_MODE_CLOCK);
        ui_request_redraw();
        return true;

    case KEY_EVENT_NEXT:     /* short press down = next */
        if (mode == APP_MODE_SETUP) {
            s_selected_row++;
            if (s_selected_row > 5) s_selected_row = 0;
            ui_request_redraw();
        } else if (mode < APP_MODE_SETUP) {
            set_current_mode(mode + 1);
            ui_request_redraw();
        }
        return true;

    case KEY_EVENT_PREV:     /* short press up = prev */
        if (mode == APP_MODE_SETUP) {
            s_selected_row--;
            if (s_selected_row < 0) s_selected_row = 5;
            ui_request_redraw();
        } else if (mode > APP_MODE_ANSWERS) {
            set_current_mode(mode - 1);
            ui_request_redraw();
        }
        return true;
    }
    return false;
}

/* ── Screen: Clock ───────────────────────────────────────────── */
void ui_draw_clock_screen(bool english)
{
    display_begin_frame();

    int y = 40;
    display_text(y, english ? "12:34" : "12:34", TEXT_STYLE_TITLE);
    y += 30;

    /* Date line */
    display_text(y, english ? "Mon, Jan 1" : "2024-01-01 周一", TEXT_STYLE_NORMAL);
    y += 30;

    /* Status: Wi-Fi, BLE */
    display_text(y, english ? "Wi-Fi Connected" : "Wi-Fi 已连接", TEXT_STYLE_NORMAL);
    y += 20;

    display_text(y, english ? "BLE Pager: OFF" : "BLE 翻页器: 关闭", TEXT_STYLE_NORMAL);
    y += 30;

    /* Footer hint */
    display_text(180, english ? "Hold UP=back  DOWN=next" : "上=返回  下=切换", TEXT_STYLE_NORMAL);

    /* Draw battery */
    display_draw_battery(-1, false);

    ui_flush_display();
}

/* ── Screen: Setup Menu ──────────────────────────────────────── */
void ui_draw_setup_menu(bool english)
{
    display_begin_frame();

    int y = 10;
    display_text(y, english ? "SETTINGS" : "设置", TEXT_STYLE_TITLE);
    y += 25;

    const char *items[] = {
        english ? "Language"       : "语言",
        english ? "Sleep Timer"    : "休眠时间",
        english ? "BLE Pager"      : "蓝牙翻页器",
        english ? "Merit Counter"  : "功德计数",
        english ? "MBTI Guide"     : "MBTI 指南",
        english ? "About"          : "关于",
    };

    for (int i = 0; i < 6; i++) {
        if (i == s_selected_row) {
            display_fill_rounded_rect(8, y - 2, 184, 18, 3);
            display_text(y, items[i], TEXT_STYLE_INVERTED);
        } else {
            display_outline_rect(8, y - 2, 184, 18);
            display_text(y, items[i], TEXT_STYLE_NORMAL);
        }
        y += 22;
    }

    display_text(180, english ? "Short UP/DN = navigate" : "短按上下 = 导航", TEXT_STYLE_NORMAL);

    ui_flush_display();
}

/* ── Screen: Answer / Fortune Card ───────────────────────────── */
void ui_draw_answer_or_fortune(bool english)
{
    display_begin_frame();

    int y = 30;
    display_text(y, english ? "Answer" : "答案之书", TEXT_STYLE_TITLE);
    y += 40;

    const char *msg = english
        ? "Ask a yes/no question\nand press DOWN."
        : "想一个是非问题\n然后按下键。";
    display_text(y, msg, TEXT_STYLE_NORMAL);

    display_text(170, english ? "Hold UP to exit" : "长按上键退出", TEXT_STYLE_NORMAL);
    ui_flush_display();
}

/* ── Screen: Fortune / 签语 ──────────────────────────────────── */
void ui_draw_fortune(bool english)
{
    display_begin_frame();

    int y = 30;
    display_text(y, english ? "Fortune" : "电子签语", TEXT_STYLE_TITLE);
    y += 40;

    const char *msg = english
        ? "Shake or press DOWN\nfor a fortune."
        : "摇一摇或按下键\n抽取签语。";
    display_text(y, msg, TEXT_STYLE_NORMAL);

    display_text(170, english ? "Hold UP to exit" : "长按上键退出", TEXT_STYLE_NORMAL);
    ui_flush_display();
}

/* ── Screen: Merit Counter (功德) ────────────────────────────── */
void ui_draw_merit_counter(bool english)
{
    display_begin_frame();

    int y = 30;
    display_text(y, english ? "Merit" : "功德", TEXT_STYLE_TITLE);
    y += 50;

    char count[16];
    snprintf(count, sizeof(count), "%d", g_config.merit_count);
    display_text(y, count, TEXT_STYLE_INVERTED);
    y += 40;

    display_text(y, english ? "Press DOWN to add 1" : "按下键 +1", TEXT_STYLE_NORMAL);

    display_text(170, english ? "Hold UP to exit" : "长按上键退出", TEXT_STYLE_NORMAL);
    ui_flush_display();
}

/* ── Screen: MBTI Guide ──────────────────────────────────────── */
void ui_draw_mbti_guide(bool english)
{
    display_begin_frame();

    int y = 10;
    display_text(y, english ? "MBTI Guide" : "MBTI 指南", TEXT_STYLE_TITLE);
    y += 25;

    const char *types[] = {"INTJ", "INTP", "ENTJ", "ENTP",
                           "INFJ", "INFP", "ENFJ", "ENFP",
                           "ISTJ", "ISFJ", "ESTJ", "ESFJ",
                           "ISTP", "ISFP", "ESTP", "ESFP"};
    int col = 0, row_y = y;
    for (int i = 0; i < 16; i++) {
        int x = 10 + col * 48;
        display_text_at(x, row_y, types[i], TEXT_STYLE_NORMAL);
        col++;
        if (col >= 4) {
            col = 0;
            row_y += 18;
        }
    }

    display_text(170, english ? "Hold UP to exit" : "长按上键退出", TEXT_STYLE_NORMAL);
    ui_flush_display();
}

/* ── Screen: BT Pager ────────────────────────────────────────── */
void ui_draw_bt_pager(bool english)
{
    display_begin_frame();

    int y = 10;
    display_text(y, english ? "BLE Pager" : "蓝牙翻页器", TEXT_STYLE_TITLE);
    y += 25;

    static const char *modes_zh[] = {"YXT协议", "PPT遥控", "手机呼叫", "拍照", "媒体", "阅读", "Vibe Coding"};
    static const char *modes_en[] = {"YXT Proto", "PPT Remote", "Phone Pager", "Camera", "Media", "Reading", "Vibe Code"};

    for (int i = 0; i < 7; i++) {
        const char *label = english ? modes_en[i] : modes_zh[i];
        if (i == s_selected_row) {
            display_fill_rounded_rect(8, y - 2, 184, 18, 3);
            display_text(y, label, TEXT_STYLE_INVERTED);
        } else {
            display_text(y, label, TEXT_STYLE_NORMAL);
        }
        y += 20;
    }

    display_text(180, english ? "Short UP/DN = switch" : "短按上下 = 切换模式", TEXT_STYLE_NORMAL);
    ui_flush_display();
}

/* ── Screen: Claude Usage ───────────────────────────────────── */
static int pct_for_bar(int pct)
{
    if (pct < 0) return 0;
    if (pct > 100) return 100;
    return pct;
}

static int text_width_px(const char *text)
{
    return text ? (int)strlen(text) * 9 : 0;
}

static void draw_usage_bar(int x, int y, int w, int h, int pct)
{
    int fill = (w - 2) * pct_for_bar(pct) / 100;
    display_outline_rect(x, y, w, h);
    if (fill > 0) {
        display_fill_rounded_rect(x + 1, y + 1, fill, h - 2, 0);
    }
}

static void draw_digit_segment(int x, int y, int w, int h)
{
    display_fill_rounded_rect(x, y, w, h, 0);
}

static void draw_big_digit(int x, int y, int digit)
{
    static const uint8_t masks[10] = {
        0x3f, /* 0: a b c d e f */
        0x06, /* 1: b c */
        0x5b, /* 2: a b d e g */
        0x4f, /* 3: a b c d g */
        0x66, /* 4: b c f g */
        0x6d, /* 5: a c d f g */
        0x7d, /* 6: a c d e f g */
        0x07, /* 7: a b c */
        0x7f, /* 8: all */
        0x6f, /* 9: a b c d f g */
    };
    if (digit < 0 || digit > 9) return;

    const int w = 16;
    const int h = 28;
    const int t = 3;
    uint8_t m = masks[digit];

    if (m & 0x01) draw_digit_segment(x + t,     y,             w - 2 * t, t);       /* a */
    if (m & 0x02) draw_digit_segment(x + w - t, y + t,         t,         h / 2 - t); /* b */
    if (m & 0x04) draw_digit_segment(x + w - t, y + h / 2,     t,         h / 2 - t); /* c */
    if (m & 0x08) draw_digit_segment(x + t,     y + h - t,     w - 2 * t, t);       /* d */
    if (m & 0x10) draw_digit_segment(x,         y + h / 2,     t,         h / 2 - t); /* e */
    if (m & 0x20) draw_digit_segment(x,         y + t,         t,         h / 2 - t); /* f */
    if (m & 0x40) draw_digit_segment(x + t,     y + h / 2 - 1, w - 2 * t, t);       /* g */
}

static int draw_big_pct(int x, int y, int pct)
{
    if (pct < 0) {
        display_text_at(x, y + 8, "--%", TEXT_STYLE_NORMAL);
        return x + 28;
    }

    char buf[5];
    snprintf(buf, sizeof(buf), "%d", pct_for_bar(pct));

    int cx = x;
    for (int i = 0; buf[i] != '\0'; i++) {
        draw_big_digit(cx, y, buf[i] - '0');
        cx += 19;
    }
    display_text_at(cx + 1, y + 13, "%", TEXT_STYLE_NORMAL);
    return cx + 12;
}

static void draw_text_clipped_style(int x, int y, const char *text, int max_chars, int style)
{
    char buf[44];
    if (!text) text = "";
    if (max_chars > (int)sizeof(buf) - 1) max_chars = sizeof(buf) - 1;
    strlcpy(buf, text, (size_t)max_chars + 1);
    display_text_at(x, y, buf, style);
}

static void draw_text_clipped(int x, int y, const char *text, int max_chars)
{
    draw_text_clipped_style(x, y, text, max_chars, TEXT_STYLE_NORMAL);
}

static void draw_clawd_logo(int x, int y)
{
    static const char *rows[] = {
        "...XXXXXXXXXXXX...",
        "...XX.XXXXXX.XX...",
        ".XXXXXXXXXXXXXXXX.",
        "...XXXXXXXXXXXX...",
        "....X.X....X.X....",
    };

    for (int row = 0; row < 5; row++) {
        for (int col = 0; rows[row][col] != '\0'; col++) {
            if (rows[row][col] == 'X') {
                display_fill_rounded_rect(x + col * 2, y + row * 4, 2, 4, 0);
            }
        }
    }
}

static void draw_spark(int x, int y)
{
    display_fill_rounded_rect(x, y, 2, 2, 0);
    display_fill_rounded_rect(x - 5, y, 3, 1, 0);
    display_fill_rounded_rect(x + 4, y, 3, 1, 0);
    display_fill_rounded_rect(x, y - 5, 1, 3, 0);
    display_fill_rounded_rect(x, y + 4, 1, 3, 0);
    display_fill_rounded_rect(x - 4, y - 4, 2, 2, 0);
    display_fill_rounded_rect(x + 4, y - 4, 2, 2, 0);
    display_fill_rounded_rect(x - 4, y + 4, 2, 2, 0);
    display_fill_rounded_rect(x + 4, y + 4, 2, 2, 0);
}

static void draw_pill(int x, int y, int w, const char *label, bool filled)
{
    int label_w = text_width_px(label);
    int tx = x + (w - label_w) / 2;
    if (tx < x + 2) tx = x + 2;

    if (filled) {
        display_fill_rounded_rect(x, y, w, 16, 3);
        draw_text_clipped_style(tx, y + 2, label, (w - 4) / 9, TEXT_STYLE_INVERTED);
    } else {
        display_outline_rect(x, y, w, 16);
        draw_text_clipped(tx, y + 2, label, (w - 4) / 9);
    }
}

static void draw_footer_status(const char *text)
{
    char buf[24];
    strlcpy(buf, text && text[0] ? text : "Waiting for bridge", sizeof(buf));
    int max_chars = 20;
    if ((int)strlen(buf) > max_chars) {
        buf[max_chars - 1] = '.';
        buf[max_chars] = '\0';
    }

    int w = text_width_px(buf) + 16;
    int x = (EPD_WIDTH - w) / 2;
    if (x < 8) x = 8;

    display_outline_rect(8, 174, 184, 1);
    draw_spark(x + 4, 187);
    display_text_at(x + 14, 181, buf, TEXT_STYLE_NORMAL);
}

static void draw_usage_block(int y, const char *label, int used_pct,
                             int remaining_pct, const char *reset_text)
{
    char detail_buf[40];

    if (remaining_pct >= 0 && reset_text && reset_text[0]) {
        snprintf(detail_buf, sizeof(detail_buf), "%d%% left / %s",
                 pct_for_bar(remaining_pct), reset_text);
    } else if (remaining_pct >= 0) {
        snprintf(detail_buf, sizeof(detail_buf), "%d%% left", pct_for_bar(remaining_pct));
    } else {
        snprintf(detail_buf, sizeof(detail_buf), "resets in %s",
                 reset_text && reset_text[0] ? reset_text : "--");
    }

    draw_big_pct(12, y, used_pct);
    draw_pill(116, y + 3, 72, label, false);
    draw_usage_bar(12, y + 34, 176, 8, used_pct);
    draw_text_clipped(12, y + 48, detail_buf, 19);
    display_outline_rect(12, y + 62, 176, 1);
}

void ui_draw_claude_usage(bool english)
{
    (void)english;
    claude_usage_state_t usage;
    claude_usage_get_state(&usage);

    display_begin_frame();

    draw_clawd_logo(8, 6);
    display_text_at(56, 10, "Usage", TEXT_STYLE_NORMAL);

    const bool has_problem = usage.error[0] && strcmp(usage.error, "Open bridge :8788");
    const char *badge = "WAIT";
    bool filled_badge = false;
    if (has_problem) {
        badge = "ERROR";
        filled_badge = true;
    } else if (usage.stale) {
        badge = "STALE";
    } else if (usage.is_demo) {
        badge = "DEMO";
    } else if (usage.has_data) {
        badge = "LIVE";
        filled_badge = true;
    }
    draw_pill(138, 8, 54, badge, filled_badge);
    display_outline_rect(8, 31, 184, 1);

    if (!usage.has_data) {
        display_text_at(22, 58, has_problem ? "Needs attention" : "Ready to sync", TEXT_STYLE_NORMAL);
        display_outline_rect(22, 82, 156, 1);
        display_text_at(22, 96, "ADV USB + Wi-Fi", TEXT_STYLE_NORMAL);
        display_text_at(22, 116, "localhost:8788", TEXT_STYLE_NORMAL);
        draw_text_clipped(22, 136, usage.error[0] ? usage.error : "Open web app", 17);
        draw_footer_status("Short key switches app");
        ui_flush_display();
        return;
    }

    draw_usage_block(41, "Current", usage.current_used, usage.current_remaining,
                     usage.current_resets_in);
    draw_usage_block(104, "Weekly", usage.weekly_used, usage.weekly_remaining,
                     usage.weekly_resets_in);

    char meta[64];
    if (has_problem) {
        snprintf(meta, sizeof(meta), "%s", usage.error);
    } else if (usage.stale) {
        snprintf(meta, sizeof(meta), "Cached  %s", usage.source[0] ? usage.source : usage.status);
    } else if (usage.is_demo) {
        snprintf(meta, sizeof(meta), "Demo  %s", usage.model[0] ? usage.model : usage.status);
    } else {
        snprintf(meta, sizeof(meta), "%s via %s",
                 usage.model[0] ? usage.model : "live",
                 usage.source[0] ? usage.source : usage.last_transport);
    }

    if (usage.age_seconds >= 0 && !has_problem && usage.stale) {
        char aged[24];
        int age = usage.age_seconds > 9999 ? 9999 : usage.age_seconds;
        snprintf(aged, sizeof(aged), "Cached age %ds", age);
        draw_footer_status(aged);
    } else {
        draw_footer_status(meta);
    }
    ui_flush_display();
}

void ui_draw_safe_status(bool english)
{
    (void)english;
    claude_usage_state_t usage;
    claude_usage_get_state(&usage);

    display_begin_frame();
    display_text_at(16, 10, "BAND-0 SAFE", TEXT_STYLE_NORMAL);
    display_outline_rect(8, 28, 184, 1);

    char line[40];
    display_text_at(12, 42, "fw", TEXT_STYLE_NORMAL);
    draw_text_clipped(42, 42, BAND0_FIRMWARE_VERSION, 17);
    snprintf(line, sizeof(line), "mode %d heap %luK", current_mode(),
             (unsigned long)(esp_get_free_heap_size() / 1024));
    display_text_at(12, 62, line, TEXT_STYLE_NORMAL);
    snprintf(line, sizeof(line), "usage %s", usage.has_data ? usage.status : "waiting");
    display_text_at(12, 82, line, TEXT_STYLE_NORMAL);
    snprintf(line, sizeof(line), "src %s", usage.last_transport[0] ? usage.last_transport : "-");
    display_text_at(12, 102, line, TEXT_STYLE_NORMAL);

    display_outline_rect(8, 126, 184, 1);
    display_text_at(12, 140, "UP hold: Usage", TEXT_STYLE_NORMAL);
    display_text_at(12, 158, "DN hold: Redraw", TEXT_STYLE_NORMAL);
    display_text_at(12, 176, "BOTH 10s: reboot", TEXT_STYLE_NORMAL);
    ui_flush_display();
}

/* ── Screen: Pending Request Overlay ─────────────────────────── */
void ui_draw_pending_request(const pending_request_t *req)
{
    if (!req) return;

    display_begin_frame();

    int y = 40;
    display_text(y, "OTA Request", TEXT_STYLE_TITLE);
    y += 30;
    display_text(y, req->message, TEXT_STYLE_NORMAL);

    display_text(170, "Hold DOWN to confirm", TEXT_STYLE_NORMAL);
    ui_flush_display();
}

/* ── Main Render Entry ───────────────────────────────────────── */
void ui_render_current_screen(void)
{
    if (!display_is_ready()) return;
    if (!s_redraw_requested) return;

    bool eng = language_is_english();

    /* Draw custom wallpaper first (if present) */
    bool has_wallpaper = wallpaper_draw_if_present();
    (void)has_wallpaper;

    switch (current_mode()) {
    case APP_MODE_ANSWERS:
        ui_draw_answer_or_fortune(eng);
        break;
    case APP_MODE_FORTUNE:
        ui_draw_fortune(eng);
        break;
    case APP_MODE_MERIT:
        ui_draw_merit_counter(eng);
        break;
    case APP_MODE_BT_PAGER:
        ui_draw_bt_pager(eng);
        break;
    case APP_MODE_CLOCK:
        ui_draw_clock_screen(eng);
        break;
    case APP_MODE_MBTI_GUIDE:
        ui_draw_mbti_guide(eng);
        break;
    case APP_MODE_CLAUDE_USAGE:
        ui_draw_claude_usage(eng);
        break;
    case APP_MODE_SETUP:
        ui_draw_setup_menu(eng);
        break;
    case APP_MODE_SAFE_STATUS:
        ui_draw_safe_status(eng);
        break;
    default:
        ui_draw_clock_screen(eng);
        break;
    }

    s_redraw_requested = false;
}

void ui_flush_display(void)
{
    display_refresh();
}
