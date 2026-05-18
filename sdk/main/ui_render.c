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
#include "esp_log.h"
#include "app_config.h"
#include "display_epd.h"
#include "wallpaper.h"
#include "ui_render.h"

static const char *TAG = "ui";

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
        display_text(row_y, types[i], TEXT_STYLE_NORMAL);
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
    case APP_MODE_SETUP:
        ui_draw_setup_menu(eng);
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
