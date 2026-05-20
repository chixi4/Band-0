/**
 * Official-style Band-0 UI shell.
 *
 * The goal is to preserve the recovered 1.2.6 interaction grammar while adding
 * two local extensions: a native-looking Usage app entry and a Wireless settings
 * submenu for ADV/local API/OTA/BLE diagnostics.
 */

#include <stdio.h>
#include <string.h>
#include "esp_heap_caps.h"
#include "esp_system.h"
#include "app_config.h"
#include "ble_pager.h"
#include "ble_usage.h"
#include "claude_usage.h"
#include "display_epd.h"
#include "gpio_key.h"
#include "nvs_utils.h"
#include "ui_render.h"
#include "wallpaper.h"
#include "wifi_config.h"

static bool s_redraw_requested = true;

typedef enum {
    SETTINGS_ROOT = 0,
    SETTINGS_WIRELESS_DETAIL = 1,
    SETTINGS_CONFIRM_RESET = 2,
} settings_page_t;

typedef enum {
    APP_ROW_ANSWERS = 0,
    APP_ROW_FORTUNE,
    APP_ROW_MERIT,
    APP_ROW_BT_PAGER,
    APP_ROW_MBTI,
    APP_ROW_USAGE,
    APP_ROW_SETTINGS,
    APP_ROW_COUNT,
} app_row_t;

typedef enum {
    SETTINGS_LOCK_NOW = 0,
    SETTINGS_WIFI_TIME,
    SETTINGS_SAVED_WIFI,
    SETTINGS_WALLPAPER,
    SETTINGS_WIFI_OTA,
    SETTINGS_LANGUAGE,
    SETTINGS_SLEEP,
    SETTINGS_KEY_SOUND,
    SETTINGS_LOCK_FLIP,
    SETTINGS_GUIDE,
    SETTINGS_RESET_MBTI,
    SETTINGS_RESET_MERIT,
    SETTINGS_FACTORY_RESET,
    SETTINGS_ABOUT,
    SETTINGS_LOCAL_CONTROL,
    SETTINGS_COUNT,
} settings_row_t;

typedef enum {
    WIRELESS_WIFI = 0,
    WIRELESS_LOCAL_API,
    WIRELESS_OTA,
    WIRELESS_LOGS,
    WIRELESS_BLE,
    WIRELESS_COUNT,
} wireless_row_t;

static int s_app_selected = APP_ROW_BT_PAGER;
static int s_settings_selected = SETTINGS_LOCK_NOW;
static int s_wireless_selected = WIRELESS_WIFI;
static settings_page_t s_settings_page = SETTINGS_ROOT;
static settings_row_t s_settings_confirm_row = SETTINGS_RESET_MBTI;

static bool s_answers_visible = false;
static int s_answers_index = 0;
static bool s_fortune_visible = false;
static int s_fortune_index = 0;
static bool s_mbti_detail = false;
static int s_mbti_index = 0;

static const char *APP_LABELS[APP_ROW_COUNT] = {
    "Answers",
    "Fortune",
    "Merit",
    "BT Pager",
    "MBTI Guide",
    "Usage",
    "Settings",
};

static const app_mode_t APP_MODES[APP_ROW_COUNT] = {
    APP_MODE_ANSWERS,
    APP_MODE_FORTUNE,
    APP_MODE_MERIT,
    APP_MODE_BT_PAGER,
    APP_MODE_MBTI_GUIDE,
    APP_MODE_CLAUDE_USAGE,
    APP_MODE_SETUP,
};

static const char *WIRELESS_LABELS[WIRELESS_COUNT] = {
    "Wi-Fi",
    "Local API",
    "OTA",
    "Logs",
    "BLE",
};

static const char *ANSWERS[] = {
    "IT IS SENSIBLE",
    "BETTER TO WAIT",
    "DO IT EARLY",
    "REMAIN FLEXIBLE",
    "SETTING PRIORITIES",
    "KEEP IT SIMPLE",
    "UNPREDICTABLE",
    "LOOK CLOSER",
};

static const char *FORTUNES[] = {
    "Finish one task first.",
    "Check urgency first.",
    "Sleep earlier tonight.",
    "Delete one small issue.",
    "Promise one less thing.",
    "Review before starting.",
    "Write the criteria.",
    "Protect your rhythm.",
};

static const char *MBTI_TYPES[] = {
    "INTJ", "INTP", "ENTJ", "ENTP",
    "INFJ", "INFP", "ENFJ", "ENFP",
    "ISTJ", "ISFJ", "ESTJ", "ESFJ",
    "ISTP", "ISFP", "ESTP", "ESFP",
};

void ui_request_redraw(void) { s_redraw_requested = true; }
void ui_clear_redraw_request(void) { s_redraw_requested = false; }
bool ui_redraw_requested(void) { return s_redraw_requested; }

static int text_width_px(const char *text)
{
    return text ? (int)strlen(text) * 9 : 0;
}

static void draw_text_clipped_style(int x, int y, const char *text, int max_chars, int style)
{
    char buf[36];
    if (!text) text = "";
    if (max_chars > (int)sizeof(buf) - 1) max_chars = sizeof(buf) - 1;
    strlcpy(buf, text, (size_t)max_chars + 1);
    display_text_at(x, y, buf, style);
}

static void draw_text_clipped(int x, int y, const char *text, int max_chars)
{
    draw_text_clipped_style(x, y, text, max_chars, TEXT_STYLE_NORMAL);
}

static void draw_centered(int y, const char *text, int style)
{
    int x = (EPD_WIDTH - text_width_px(text)) / 2;
    if (x < 0) x = 0;
    display_text_at(x, y, text, style);
}

static void draw_header(const char *title)
{
    int w = text_width_px(title) + 14;
    int x = (EPD_WIDTH - w) / 2;
    if (x < 6) x = 6;
    display_fill_rounded_rect(x, 7, w, 23, 5);
    draw_centered(12, title, TEXT_STYLE_INVERTED);
}

static void draw_list_title(const char *title)
{
    draw_text_clipped_style(12, 9, title, 16, TEXT_STYLE_TITLE);
}

static void draw_footer(const char *text)
{
    draw_centered(181, text, TEXT_STYLE_NORMAL);
}

static void pixel_block(int x, int y, int w, int h, bool black)
{
    for (int yy = y; yy < y + h; yy++) {
        for (int xx = x; xx < x + w; xx++) {
            display_draw_pixel(xx, yy, black);
        }
    }
}

static void draw_clawd_icon(int x, int y, int scale, bool selected)
{
    static const char *rows[] = {
        "...XXXXXXXXXXXX...",
        "...XX.XXXXXX.XX...",
        ".XXXXXXXXXXXXXXXX.",
        "...XXXXXXXXXXXX...",
        "....X.X....X.X....",
    };
    bool black = !selected;
    int cw = scale;
    int ch = scale * 2;
    if (cw < 1) cw = 1;
    if (ch < 2) ch = 2;
    for (int row = 0; row < 5; row++) {
        for (int col = 0; rows[row][col] != '\0'; col++) {
            if (rows[row][col] == 'X') {
                pixel_block(x + col * cw, y + row * ch, cw, ch, black);
            }
        }
    }
}

static void draw_wireless_icon(int x, int y, bool selected)
{
    bool black = !selected;
    for (int i = 0; i < 5; i++) {
        display_draw_pixel(x + 8 + i, y + 17, black);
    }
    display_draw_pixel(x + 10, y + 14, black);
    display_draw_pixel(x + 6, y + 12, black);
    display_draw_pixel(x + 14, y + 12, black);
    display_draw_pixel(x + 3, y + 10, black);
    display_draw_pixel(x + 17, y + 10, black);
    display_draw_pixel(x + 1, y + 8, black);
    display_draw_pixel(x + 19, y + 8, black);
}

static void draw_settings_icon(int x, int y, bool selected)
{
    bool black = !selected;
    for (int xx = x + 4; xx <= x + 16; xx++) {
        display_draw_pixel(xx, y + 4, black);
        display_draw_pixel(xx, y + 17, black);
    }
    for (int yy = y + 4; yy <= y + 17; yy++) {
        display_draw_pixel(x + 4, yy, black);
        display_draw_pixel(x + 16, yy, black);
    }
    for (int xx = x + 7; xx <= x + 13; xx++) {
        display_draw_pixel(xx, y + 8, black);
        display_draw_pixel(xx, y + 12, black);
    }
}

static void draw_generic_icon(int x, int y, bool selected)
{
    bool black = !selected;
    for (int yy = y + 5; yy <= y + 15; yy++) {
        display_draw_pixel(x + 5, yy, black);
        display_draw_pixel(x + 15, yy, black);
    }
    for (int xx = x + 5; xx <= x + 15; xx++) {
        display_draw_pixel(xx, y + 5, black);
        display_draw_pixel(xx, y + 15, black);
    }
}

static void draw_icon_for_app(int app, int x, int y, bool selected)
{
    if (app == APP_ROW_USAGE) {
        draw_clawd_icon(x, y + 4, 1, selected);
    } else if (app == APP_ROW_SETTINGS) {
        draw_settings_icon(x, y, selected);
    } else if (app == APP_ROW_BT_PAGER) {
        draw_generic_icon(x, y, selected);
    } else if (app == APP_ROW_MBTI) {
        draw_text_clipped_style(x, y + 5, "MB", 2, selected ? TEXT_STYLE_INVERTED : TEXT_STYLE_NORMAL);
    } else {
        draw_generic_icon(x, y, selected);
    }
}

static void draw_menu_row(int y, const char *label, const char *value,
                          bool selected, int app_icon, bool wireless_icon)
{
    int x = 16;
    int w = 168;
    int h = 22;
    if (selected) {
        display_fill_rounded_rect(x, y, w, h, 6);
    } else {
        display_outline_rounded_rect(x, y, w, h, 6);
    }

    int tx = x + 15;
    if (app_icon >= 0) {
        draw_icon_for_app(app_icon, x + 8, y + 1, selected);
        tx = x + 36;
    } else if (wireless_icon) {
        draw_wireless_icon(x + 8, y + 1, selected);
        tx = x + 36;
    }

    int style = selected ? TEXT_STYLE_INVERTED : TEXT_STYLE_NORMAL;
    int label_limit = (value && value[0]) ? 12 : 17;
    draw_text_clipped_style(tx, y + 5, label, label_limit, style);
    if (value && value[0]) {
        int vx = x + w - text_width_px(value) - 10;
        if (vx < tx + 72) vx = tx + 72;
        draw_text_clipped_style(vx, y + 5, value, 7, style);
    }
}

static int window_start_for(int selected, int total, int visible)
{
    int start = selected - visible / 2;
    if (start < 0) start = 0;
    if (start + visible > total) start = total - visible;
    if (start < 0) start = 0;
    return start;
}

static const char *sleep_value(void)
{
    if (g_config.sleep_time_seconds <= 0) return "OFF";
    if (g_config.sleep_time_seconds == 10) return "10s";
    if (g_config.sleep_time_seconds == 30) return "30s";
    if (g_config.sleep_time_seconds == 60) return "60s";
    return "ON";
}

static const char *settings_label(settings_row_t row)
{
    switch (row) {
    case SETTINGS_LOCK_NOW:      return "Lock Now";
    case SETTINGS_WIFI_TIME:     return "Wi-Fi Time";
    case SETTINGS_SAVED_WIFI:    return "Saved Wi-Fi";
    case SETTINGS_WALLPAPER:     return "Wallpaper";
    case SETTINGS_WIFI_OTA:      return "Wi-Fi OTA";
    case SETTINGS_LANGUAGE:      return "Language";
    case SETTINGS_SLEEP:         return "Sleep Time";
    case SETTINGS_KEY_SOUND:     return "Key Sound";
    case SETTINGS_LOCK_FLIP:     return "Lock Flip";
    case SETTINGS_GUIDE:         return "Guide Pages";
    case SETTINGS_RESET_MBTI:    return "Reset MBTI";
    case SETTINGS_RESET_MERIT:   return "Reset Merit";
    case SETTINGS_FACTORY_RESET: return "Factory Reset";
    case SETTINGS_ABOUT:         return "System Version";
    case SETTINGS_LOCAL_CONTROL: return "Local Control";
    default:                     return "";
    }
}

static const char *settings_value(settings_row_t row, const wifi_runtime_status_t *wifi)
{
    switch (row) {
    case SETTINGS_WIFI_TIME:
        return (wifi && wifi->sta_connected) ? "OK" : "";
    case SETTINGS_WIFI_OTA:
        return (wifi && wifi->sta_connected) ? "OK" : "";
    case SETTINGS_LANGUAGE:
        return g_config.language ? "EN" : "ZH";
    case SETTINGS_SLEEP:
        return sleep_value();
    case SETTINGS_KEY_SOUND:
        return g_config.key_sound ? "ON" : "OFF";
    case SETTINGS_LOCK_FLIP:
        return g_config.clock_warning ? "ON" : "OFF";
    case SETTINGS_GUIDE:
        return g_config.mbti_knowledge_hidden ? "OFF" : "ON";
    case SETTINGS_LOCAL_CONTROL:
        return "ADV";
    default:
        return "";
    }
}

static bool settings_is_local_extension(settings_row_t row)
{
    (void)row;
    return false;
}

static const char *bt_template_value(void)
{
    switch (g_config.bt_template) {
    case BT_MODE_YXT_PROTOCOL: return "YXT";
    case BT_MODE_PPT_REMOTE: return "PPT";
    case BT_MODE_PHONE_PAGER: return "PHONE";
    case BT_MODE_CAMERA: return "CAM";
    case BT_MODE_MEDIA: return "MEDIA";
    case BT_MODE_READING: return "READ";
    default: return "VIBE";
    }
}

static void draw_progress(int x, int y, int w, int pct)
{
    if (pct < 0) pct = 0;
    if (pct > 100) pct = 100;
    display_outline_rounded_rect(x, y, w, 9, 1);
    int fill = (w - 2) * pct / 100;
    if (fill > 0) {
        display_fill_rounded_rect(x + 1, y + 1, fill, 7, 0);
    }
}

static void draw_mini_battery_unknown(int x, int y)
{
    display_outline_rect(x, y, 22, 10);
    pixel_block(x + 22, y + 3, 2, 4, true);
    for (int i = 0; i < 4; i++) {
        display_outline_rect(x + 3 + i * 4, y + 3, 2, 4);
    }
}

static void draw_spark_icon(int x, int y)
{
    display_draw_pixel(x, y, true);
    display_draw_pixel(x - 4, y, true);
    display_draw_pixel(x + 4, y, true);
    display_draw_pixel(x, y - 4, true);
    display_draw_pixel(x, y + 4, true);
    display_draw_pixel(x - 3, y - 3, true);
    display_draw_pixel(x + 3, y - 3, true);
    display_draw_pixel(x - 3, y + 3, true);
    display_draw_pixel(x + 3, y + 3, true);
}

static int pct_for_bar(int pct);

static const char *usage_pct_text(int pct, char *buf, size_t len)
{
    if (pct < 0) {
        strlcpy(buf, "--%", len);
    } else {
        snprintf(buf, len, "%d%%", pct_for_bar(pct));
    }
    return buf;
}

static int pct_for_bar(int pct)
{
    if (pct < 0) return 0;
    if (pct > 100) return 100;
    return pct;
}

static void draw_usage_badge(int x, int y, const char *label)
{
    int w = 66;
    display_outline_rounded_rect(x, y, w, 16, 2);
    draw_text_clipped(x + 6, y + 3, label, 7);
}

static void draw_usage_section(int y, const char *label, int used_pct, int remaining_pct,
                               const char *resets_in)
{
    char pct[8];
    usage_pct_text(used_pct, pct, sizeof(pct));
    draw_text_clipped(12, y, pct, 4);
    draw_usage_badge(122, y - 1, label);
    draw_progress(12, y + 20, 176, pct_for_bar(used_pct));

    char detail[28];
    if (remaining_pct >= 0 && resets_in && resets_in[0]) {
        snprintf(detail, sizeof(detail), "%d%% left / %s",
                 pct_for_bar(remaining_pct), resets_in);
    } else if (remaining_pct >= 0) {
        snprintf(detail, sizeof(detail), "%d%% left / --", pct_for_bar(remaining_pct));
    } else if (resets_in && resets_in[0]) {
        snprintf(detail, sizeof(detail), "Resets in %s", resets_in);
    } else {
        strlcpy(detail, "Resets in --", sizeof(detail));
    }
    draw_text_clipped(12, y + 34, detail, 20);
}

static void draw_usage_footer_text(const claude_usage_state_t *usage)
{
    char footer[28];
    if (usage->error[0]) {
        strlcpy(footer, usage->error, sizeof(footer));
    } else if (!usage->has_data) {
        strlcpy(footer, "Open bridge :8788", sizeof(footer));
    } else if (usage->stale) {
        strlcpy(footer, "Stale data", sizeof(footer));
    } else if (usage->is_demo) {
        strlcpy(footer, "Demo data", sizeof(footer));
    } else if (usage->status[0]) {
        strlcpy(footer, usage->status, sizeof(footer));
    } else {
        strlcpy(footer, "Live data", sizeof(footer));
    }

    int tw = text_width_px(footer);
    int x = (EPD_WIDTH - tw - 14) / 2;
    if (x < 10) x = 10;
    draw_spark_icon(x + 4, 184);
    draw_text_clipped(x + 14, 178, footer, 20);
}

static void cycle_sleep_time(void)
{
    if (g_config.sleep_time_seconds <= 0) g_config.sleep_time_seconds = 10;
    else if (g_config.sleep_time_seconds == 10) g_config.sleep_time_seconds = 30;
    else if (g_config.sleep_time_seconds == 30) g_config.sleep_time_seconds = 60;
    else g_config.sleep_time_seconds = 0;
}

static void enter_app(app_row_t row)
{
    if (row >= 0 && row < APP_ROW_COUNT) {
        set_current_mode(APP_MODES[row]);
        if (row == APP_ROW_SETTINGS) {
            s_settings_page = SETTINGS_ROOT;
        }
        ui_request_redraw();
    }
}

static void enter_wireless_row(wireless_row_t row, bool detail)
{
    if (row < 0 || row >= WIRELESS_COUNT) return;
    s_wireless_selected = row;
    s_settings_page = detail ? SETTINGS_WIRELESS_DETAIL : SETTINGS_ROOT;
    set_current_mode(APP_MODE_WIRELESS);
    ui_request_redraw();
}

static void perform_settings_reset(settings_row_t row)
{
    if (row == SETTINGS_RESET_MBTI) {
        g_config.mbti_type = 0;
        s_mbti_index = 0;
        nvs_save_config(&g_config);
    } else if (row == SETTINGS_RESET_MERIT) {
        g_config.merit_count = 0;
        nvs_save_config(&g_config);
    } else if (row == SETTINGS_FACTORY_RESET) {
        nvs_reset_config();
        g_config = nvs_load_config();
    }
}

bool ui_handle_key_event(key_event_t ev)
{
    if (ev.type != 1 || ev.event == 0) return false;

    app_mode_t mode = current_mode();
    bool short_up = ev.event == KEY_EVENT_PREV && !ev.is_long;
    bool short_down = ev.event == KEY_EVENT_NEXT && !ev.is_long;
    bool ok = ev.event == KEY_EVENT_CONFIRM && ev.is_long;
    bool back = ev.event == KEY_EVENT_BACK && ev.is_long;

    if (mode == APP_MODE_CLOCK) {
        if (ok || short_down) {
            set_current_mode(APP_MODE_APP_MENU);
            ui_request_redraw();
            return true;
        }
        if (back) {
            set_current_mode(APP_MODE_SAFE_STATUS);
            ui_request_redraw();
            return true;
        }
        return true;
    }

    if (mode == APP_MODE_APP_MENU) {
        if (short_up) {
            s_app_selected = (s_app_selected + APP_ROW_COUNT - 1) % APP_ROW_COUNT;
            ui_request_redraw();
            return true;
        }
        if (short_down) {
            s_app_selected = (s_app_selected + 1) % APP_ROW_COUNT;
            ui_request_redraw();
            return true;
        }
        if (ok) {
            enter_app((app_row_t)s_app_selected);
            return true;
        }
        if (back) {
            set_current_mode(APP_MODE_CLOCK);
            ui_request_redraw();
            return true;
        }
        return true;
    }

    if (back) {
        if (mode == APP_MODE_SETUP && s_settings_page != SETTINGS_ROOT) {
            s_settings_page = SETTINGS_ROOT;
            ui_request_redraw();
        } else if (mode == APP_MODE_WIRELESS && s_settings_page == SETTINGS_WIRELESS_DETAIL) {
            s_settings_page = SETTINGS_ROOT;
            ui_request_redraw();
        } else if (mode == APP_MODE_WIRELESS) {
            set_current_mode(APP_MODE_SETUP);
            s_settings_page = SETTINGS_ROOT;
            ui_request_redraw();
        } else {
            set_current_mode(APP_MODE_APP_MENU);
            ui_request_redraw();
        }
        return true;
    }

    switch (mode) {
    case APP_MODE_ANSWERS:
        if (ok || short_down) {
            s_answers_visible = !s_answers_visible;
            if (s_answers_visible) {
                s_answers_index = (s_answers_index + 3) % (int)(sizeof(ANSWERS) / sizeof(ANSWERS[0]));
            }
            ui_request_redraw();
            return true;
        }
        if (short_up) {
            s_answers_visible = false;
            ui_request_redraw();
            return true;
        }
        break;

    case APP_MODE_FORTUNE:
        if (ok || short_down) {
            s_fortune_visible = true;
            s_fortune_index = (s_fortune_index + 5) % (int)(sizeof(FORTUNES) / sizeof(FORTUNES[0]));
            ui_request_redraw();
            return true;
        }
        if (short_up) {
            s_fortune_visible = false;
            ui_request_redraw();
            return true;
        }
        break;

    case APP_MODE_MERIT:
        if (ok || short_down) {
            g_config.merit_count++;
            nvs_save_config(&g_config);
            ui_request_redraw();
            return true;
        }
        break;

    case APP_MODE_BT_PAGER:
        if (ok || short_down) {
            g_config.bt_template = (g_config.bt_template + 1) % 7;
            nvs_save_config(&g_config);
            ble_pager_update_advertisement(g_config.bt_template);
            ui_request_redraw();
            return true;
        }
        break;

    case APP_MODE_MBTI_GUIDE:
        if (!s_mbti_detail) {
            if (short_up) s_mbti_index = (s_mbti_index + 15) % 16;
            else if (short_down) s_mbti_index = (s_mbti_index + 1) % 16;
            else if (ok) s_mbti_detail = true;
            else break;
        } else if (ok || short_up || short_down) {
            s_mbti_detail = false;
        } else {
            break;
        }
        ui_request_redraw();
        return true;

    case APP_MODE_SETUP:
        if (s_settings_page == SETTINGS_CONFIRM_RESET) {
            if (ok) {
                perform_settings_reset(s_settings_confirm_row);
                s_settings_page = SETTINGS_ROOT;
                ui_request_redraw();
                return true;
            }
            return true;
        }
        if (short_up) {
            s_settings_selected = (s_settings_selected + SETTINGS_COUNT - 1) % SETTINGS_COUNT;
        } else if (short_down) {
            s_settings_selected = (s_settings_selected + 1) % SETTINGS_COUNT;
        } else if (ok) {
            if (s_settings_selected == SETTINGS_LOCK_NOW) {
                set_current_mode(APP_MODE_CLOCK);
            } else if (s_settings_selected == SETTINGS_WIFI_TIME) {
                enter_wireless_row(WIRELESS_WIFI, true);
            } else if (s_settings_selected == SETTINGS_SAVED_WIFI) {
                enter_wireless_row(WIRELESS_WIFI, true);
            } else if (s_settings_selected == SETTINGS_WALLPAPER) {
                set_current_mode(APP_MODE_CLOCK);
            } else if (s_settings_selected == SETTINGS_WIFI_OTA) {
                enter_wireless_row(WIRELESS_OTA, true);
            } else if (s_settings_selected == SETTINGS_LANGUAGE) {
                g_config.language = g_config.language ? 0 : 1;
                nvs_save_config(&g_config);
            } else if (s_settings_selected == SETTINGS_SLEEP) {
                cycle_sleep_time();
                nvs_save_config(&g_config);
            } else if (s_settings_selected == SETTINGS_KEY_SOUND) {
                g_config.key_sound = !g_config.key_sound;
                nvs_save_config(&g_config);
            } else if (s_settings_selected == SETTINGS_LOCK_FLIP) {
                g_config.clock_warning = !g_config.clock_warning;
                nvs_save_config(&g_config);
            } else if (s_settings_selected == SETTINGS_GUIDE) {
                g_config.mbti_knowledge_hidden = !g_config.mbti_knowledge_hidden;
                nvs_save_config(&g_config);
            } else if (s_settings_selected == SETTINGS_RESET_MBTI) {
                s_settings_confirm_row = SETTINGS_RESET_MBTI;
                s_settings_page = SETTINGS_CONFIRM_RESET;
            } else if (s_settings_selected == SETTINGS_RESET_MERIT) {
                s_settings_confirm_row = SETTINGS_RESET_MERIT;
                s_settings_page = SETTINGS_CONFIRM_RESET;
            } else if (s_settings_selected == SETTINGS_FACTORY_RESET) {
                s_settings_confirm_row = SETTINGS_FACTORY_RESET;
                s_settings_page = SETTINGS_CONFIRM_RESET;
            } else if (s_settings_selected == SETTINGS_ABOUT) {
                set_current_mode(APP_MODE_SAFE_STATUS);
            } else if (s_settings_selected == SETTINGS_LOCAL_CONTROL) {
                enter_wireless_row(WIRELESS_LOCAL_API, false);
            }
        } else {
            break;
        }
        ui_request_redraw();
        return true;

    case APP_MODE_WIRELESS:
        if (short_up) {
            s_wireless_selected = (s_wireless_selected + WIRELESS_COUNT - 1) % WIRELESS_COUNT;
        } else if (short_down) {
            s_wireless_selected = (s_wireless_selected + 1) % WIRELESS_COUNT;
        } else if (ok) {
            if (s_wireless_selected == WIRELESS_BLE) {
                ble_usage_init();
            } else {
                s_settings_page = SETTINGS_WIRELESS_DETAIL;
            }
        } else {
            break;
        }
        ui_request_redraw();
        return true;

    case APP_MODE_CLAUDE_USAGE:
        if (ok) {
            ui_request_redraw();
            return true;
        }
        break;

    default:
        break;
    }
    return false;
}

void ui_draw_clock_screen(bool english)
{
    (void)english;
    display_begin_frame();
    draw_header("CLOCK");
    draw_centered(68, "2026-05-20", TEXT_STYLE_NORMAL);
    draw_centered(98, "12:34", TEXT_STYLE_TITLE);
    draw_centered(144, "ADV 2.4G  |  API ON", TEXT_STYLE_NORMAL);
    draw_footer("Hold OK Cfg");
    ui_flush_display();
}

static void draw_app_menu(void)
{
    display_begin_frame();
    draw_list_title("Applications");
    int start = window_start_for(s_app_selected, APP_ROW_COUNT, 5);
    for (int slot = 0; slot < 5; slot++) {
        int idx = start + slot;
        const char *value = "";
        if (idx == APP_ROW_USAGE) value = "LIVE";
        else if (idx == APP_ROW_MERIT) value = "108";
        else if (idx == APP_ROW_BT_PAGER) value = "OFF";
        draw_menu_row(37 + slot * 27, APP_LABELS[idx], value, idx == s_app_selected, idx, false);
    }
    draw_footer("Press=Switch / Hold=OK");
    ui_flush_display();
}

static void draw_settings_confirm(void)
{
    display_begin_frame();
    draw_header("CONFIRM");
    draw_centered(55, settings_label(s_settings_confirm_row), TEXT_STYLE_NORMAL);
    if (s_settings_confirm_row == SETTINGS_FACTORY_RESET) {
        draw_centered(84, "Reset local config", TEXT_STYLE_NORMAL);
        draw_centered(106, "Wi-Fi stays usable", TEXT_STYLE_NORMAL);
    } else {
        draw_centered(88, "Confirm Reset", TEXT_STYLE_NORMAL);
    }
    display_fill_rounded_rect(42, 132, 116, 22, 4);
    draw_centered(137, "HOLD OK", TEXT_STYLE_INVERTED);
    draw_footer("Hold BACK Cancel");
    ui_flush_display();
}

void ui_draw_setup_menu(bool english)
{
    (void)english;
    if (s_settings_page == SETTINGS_CONFIRM_RESET) {
        draw_settings_confirm();
        return;
    }

    wifi_runtime_status_t wifi;
    wifi_get_runtime_status(&wifi);

    display_begin_frame();
    draw_list_title("Settings");
    int start = window_start_for(s_settings_selected, SETTINGS_COUNT, 5);
    for (int slot = 0; slot < 5; slot++) {
        int idx = start + slot;
        settings_row_t row = (settings_row_t)idx;
        draw_menu_row(37 + slot * 27, settings_label(row),
                      settings_value(row, &wifi),
                      idx == s_settings_selected, -1,
                      settings_is_local_extension(row));
    }
    draw_footer("Press=Switch / Hold=OK");
    ui_flush_display();
}

static void draw_wireless_detail(void)
{
    wifi_runtime_status_t wifi;
    wifi_get_runtime_status(&wifi);
    ble_usage_status_t ble;
    ble_usage_get_status(&ble);

    display_begin_frame();
    if (s_wireless_selected == WIRELESS_WIFI) {
        draw_header("WI-FI");
        draw_centered(55, "SSID", TEXT_STYLE_NORMAL);
        draw_centered(74, wifi.sta_connected ? "ADV 2.4G" : "Band-0 Setup", TEXT_STYLE_NORMAL);
        draw_centered(104, "IP", TEXT_STYLE_NORMAL);
        draw_centered(123, wifi.ip[0] ? wifi.ip : "192.168.50.1", TEXT_STYLE_NORMAL);
    } else if (s_wireless_selected == WIRELESS_LOCAL_API) {
        draw_header("LOCAL API");
        draw_centered(58, "Status", TEXT_STYLE_NORMAL);
        draw_centered(77, "ON", TEXT_STYLE_TITLE);
        char heap[24];
        snprintf(heap, sizeof(heap), "Heap %luK", (unsigned long)(esp_get_free_heap_size() / 1024));
        draw_centered(119, heap, TEXT_STYLE_NORMAL);
    } else if (s_wireless_selected == WIRELESS_OTA) {
        draw_header("UPDATE");
        draw_centered(56, "Source", TEXT_STYLE_NORMAL);
        draw_centered(75, "Local ADV", TEXT_STYLE_NORMAL);
        draw_centered(108, "Last", TEXT_STYLE_NORMAL);
        draw_centered(127, "See /api/status", TEXT_STYLE_NORMAL);
    } else if (s_wireless_selected == WIRELESS_LOGS) {
        draw_header("LOGS");
        draw_centered(64, "Recent", TEXT_STYLE_NORMAL);
        draw_centered(84, "GET /api/logs", TEXT_STYLE_NORMAL);
        draw_centered(124, "OK", TEXT_STYLE_TITLE);
    } else {
        draw_header("BLE");
        draw_centered(56, "Status", TEXT_STYLE_NORMAL);
        draw_centered(75, ble.ready ? "ON" : "OFF", TEXT_STYLE_TITLE);
        draw_centered(116, ble.ready ? "Heap LOW" : "Hold OK Start", TEXT_STYLE_NORMAL);
    }
    draw_footer("Hold BACK to Wireless");
    ui_flush_display();
}

static void draw_wireless_menu(void)
{
    if (s_settings_page == SETTINGS_WIRELESS_DETAIL) {
        draw_wireless_detail();
        return;
    }

    wifi_runtime_status_t wifi;
    wifi_get_runtime_status(&wifi);
    ble_usage_status_t ble;
    ble_usage_get_status(&ble);

    display_begin_frame();
    draw_list_title("Wireless");
    int start = window_start_for(s_wireless_selected, WIRELESS_COUNT, 5);
    for (int slot = 0; slot < 5; slot++) {
        int idx = start + slot;
        const char *value = "";
        if (idx == WIRELESS_WIFI) value = wifi.sta_connected ? "ADV" : "SETUP";
        else if (idx == WIRELESS_LOCAL_API) value = "ON";
        else if (idx == WIRELESS_OTA) value = "READY";
        else if (idx == WIRELESS_LOGS) value = "OK";
        else if (idx == WIRELESS_BLE) value = ble.ready ? "ON" : "OFF";
        draw_menu_row(37 + slot * 27, WIRELESS_LABELS[idx], value,
                      idx == s_wireless_selected, -1, idx == WIRELESS_WIFI);
    }
    draw_footer("Hold BACK to Settings");
    ui_flush_display();
}

void ui_draw_answer_or_fortune(bool english)
{
    (void)english;
    display_begin_frame();
    draw_header("ANSWERS");
    if (!s_answers_visible) {
        draw_centered(66, "Ask a question", TEXT_STYLE_NORMAL);
        draw_centered(90, "then press DOWN", TEXT_STYLE_NORMAL);
        display_fill_rounded_rect(42, 116, 116, 22, 4);
        draw_centered(121, "PRESS DOWN", TEXT_STYLE_INVERTED);
    } else {
        display_outline_rect(14, 58, 172, 78);
        draw_centered(68, "ANSWER", TEXT_STYLE_NORMAL);
        draw_centered(96, ANSWERS[s_answers_index], TEXT_STYLE_NORMAL);
        draw_centered(145, "Press UP reset", TEXT_STYLE_NORMAL);
    }
    draw_footer("Long BACK to exit");
    ui_flush_display();
}

void ui_draw_fortune(bool english)
{
    (void)english;
    display_begin_frame();
    draw_header("FORTUNE");
    if (!s_fortune_visible) {
        draw_centered(76, "Draw daily advice", TEXT_STYLE_NORMAL);
        display_fill_rounded_rect(42, 112, 116, 22, 4);
        draw_centered(117, "PRESS DOWN", TEXT_STYLE_INVERTED);
    } else {
        display_outline_rect(14, 58, 172, 90);
        draw_centered(68, "TODAY", TEXT_STYLE_NORMAL);
        draw_centered(96, FORTUNES[s_fortune_index], TEXT_STYLE_NORMAL);
    }
    draw_footer("Long BACK to exit");
    ui_flush_display();
}

void ui_draw_merit_counter(bool english)
{
    (void)english;
    display_begin_frame();
    draw_header("MERIT");
    draw_centered(62, "COUNT", TEXT_STYLE_NORMAL);
    display_outline_rect(42, 84, 116, 36);
    char count[16];
    snprintf(count, sizeof(count), "%d", g_config.merit_count);
    draw_centered(96, count, TEXT_STYLE_TITLE);
    draw_centered(140, "Press DOWN +1", TEXT_STYLE_NORMAL);
    draw_footer("Long BACK to exit");
    ui_flush_display();
}

void ui_draw_mbti_guide(bool english)
{
    (void)english;
    display_begin_frame();
    draw_header("MBTI GUIDE");
    if (!s_mbti_detail) {
        draw_centered(54, "Select Type", TEXT_STYLE_NORMAL);
        display_fill_rounded_rect(48, 78, 104, 36, 6);
        draw_centered(88, MBTI_TYPES[s_mbti_index], TEXT_STYLE_INVERTED);
        draw_centered(134, "UP/DN Switch", TEXT_STYLE_NORMAL);
    } else {
        char title[24];
        snprintf(title, sizeof(title), "TYPE %s", MBTI_TYPES[s_mbti_index]);
        draw_centered(58, title, TEXT_STYLE_NORMAL);
        draw_centered(88, "Guide one choice.", TEXT_STYLE_NORMAL);
        draw_centered(111, "Avoid overwork.", TEXT_STYLE_NORMAL);
        draw_centered(145, "OK Back", TEXT_STYLE_NORMAL);
    }
    draw_footer("Long BACK to exit");
    ui_flush_display();
}

void ui_draw_bt_pager(bool english)
{
    (void)english;
    display_begin_frame();
    draw_header("BT PAGER");
    draw_centered(56, "Rand/0 Pager", TEXT_STYLE_NORMAL);
    display_fill_rounded_rect(38, 82, 124, 22, 4);
    draw_centered(87, bt_template_value(), TEXT_STYLE_INVERTED);
    draw_centered(124, "Press=Switch", TEXT_STYLE_NORMAL);
    draw_footer("Long BACK to exit");
    ui_flush_display();
}

void ui_draw_claude_usage(bool english)
{
    (void)english;
    claude_usage_state_t usage;
    claude_usage_get_state(&usage);

    display_begin_frame();
    draw_clawd_icon(8, 7, 2, false);
    draw_centered(11, "Usage", TEXT_STYLE_NORMAL);
    draw_mini_battery_unknown(166, 8);

    if (!usage.has_data && usage.error[0]) {
        draw_centered(58, "Usage Error", TEXT_STYLE_NORMAL);
        draw_text_clipped(18, 88, usage.error, 18);
        draw_text_clipped(18, 116, "Check bridge", 18);
    } else if (!usage.has_data) {
        draw_centered(56, "Ready to sync", TEXT_STYLE_NORMAL);
        draw_centered(82, "ADV Wi-Fi bridge", TEXT_STYLE_NORMAL);
        draw_centered(108, "Open localhost:8788", TEXT_STYLE_NORMAL);
        display_fill_rounded_rect(44, 134, 112, 22, 4);
        draw_centered(139, "SYNC NOW", TEXT_STYLE_INVERTED);
    } else {
        draw_usage_section(46, "Current", usage.current_used, usage.current_remaining,
                           usage.current_resets_in);
        draw_usage_section(104, "Weekly", usage.weekly_used, usage.weekly_remaining,
                           usage.weekly_resets_in);
    }

    draw_usage_footer_text(&usage);
    ui_flush_display();
}

void ui_draw_safe_status(bool english)
{
    (void)english;
    claude_usage_state_t usage;
    claude_usage_get_state(&usage);

    display_begin_frame();
    draw_header("SAFE");
    draw_text_clipped(12, 50, BAND0_FIRMWARE_VERSION, 19);
    char line[32];
    snprintf(line, sizeof(line), "mode %d heap %luK", current_mode(),
             (unsigned long)(esp_get_free_heap_size() / 1024));
    draw_text_clipped(12, 72, line, 20);
    snprintf(line, sizeof(line), "usage %s", usage.has_data ? usage.status : "waiting");
    draw_text_clipped(12, 94, line, 20);
    snprintf(line, sizeof(line), "invert %s", display_get_inverted() ? "ON" : "off");
    draw_text_clipped(12, 116, line, 20);
    draw_text_clipped(12, 138, "Both 10s: reboot", 20);
    draw_footer("Long BACK Clock");
    ui_flush_display();
}

void ui_draw_pending_request(const pending_request_t *req)
{
    if (!req) return;
    display_begin_frame();
    draw_header("OTA");
    draw_centered(70, "Request", TEXT_STYLE_NORMAL);
    draw_text_clipped(18, 98, req->message, 18);
    draw_footer("Hold OK confirm");
    ui_flush_display();
}

void ui_render_current_screen(void)
{
    if (!display_is_ready()) return;
    if (!s_redraw_requested) return;

    bool eng = language_is_english();
    (void)wallpaper_draw_if_present();

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
    case APP_MODE_APP_MENU:
        draw_app_menu();
        break;
    case APP_MODE_CLAUDE_USAGE:
        ui_draw_claude_usage(eng);
        break;
    case APP_MODE_SETUP:
        ui_draw_setup_menu(eng);
        break;
    case APP_MODE_WIRELESS:
        draw_wireless_menu();
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
