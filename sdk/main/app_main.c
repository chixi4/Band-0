/**
 * Band-0 (Dot. / Rand/0) Main Application
 *
 * Rebuilt from decompiled firmware:
 *   Original: Quote_0_ESP8684_IDF v1.2.5
 *   ESP-IDF v5.5.4, ESP32-C2 / ESP8684
 *
 * This is a from-scratch reimplementation based on the recovered logic,
 * not a decompilation. All original features are preserved and
 * new features can be added freely.
 */

#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_log.h"
#include "esp_heap_caps.h"
#include "esp_timer.h"
#include "nvs_flash.h"
#include "app_config.h"
#include "gpio_key.h"
#include "buzzer.h"
#include "display_epd.h"
#include "jd79650.h"
#include "ui_render.h"
#include "wallpaper.h"
#include "wifi_config.h"
#include "cloud_ota.h"
#include "ble_pager.h"
#include "ble_usage.h"
#include "claude_usage.h"
#include "diag_log.h"
#include "debug_server.h"
#include "nvs_utils.h"

static const char *TAG = "band0";

/* ── Global State ────────────────────────────────────────────── */
app_config_t       g_config;
app_mode_t         g_current_mode = APP_MODE_CLOCK;
volatile bool      g_ui_redraw_requested = true;
volatile bool      g_screen_sleeping = false;

/* ── Forward Declarations ────────────────────────────────────── */
static void poll_network_and_time(void);
static void handle_mode_keys(void);
static void handle_recovery_keys(void);
static void delayed_startup_redraw_task(void *arg);
static void delayed_ble_start_task(void *arg);

static uint64_t g_last_activity_time = 0;
static uint64_t g_last_tick_time = 0;
static uint64_t g_boot_time_us = 0;
static int g_wifi_state = -2;  /* -2=not tried, 0=STA connected, 1=portal */

/* Temporary hardware bring-up pattern. It runs once on boot, then hands back to
   the normal UI so we can prove the e-paper refresh path is physically alive. */
#define BAND0_SCREEN_DIAG_ON_BOOT 0

#if BAND0_SCREEN_DIAG_ON_BOOT
static uint8_t g_screen_diag_1bpp[EPD_WIDTH * EPD_HEIGHT / 8];
#endif

/* ── Helpers ─────────────────────────────────────────────────── */
app_mode_t current_mode(void) { return g_current_mode; }
void set_current_mode(app_mode_t mode)
{
    if (mode >= APP_MODE_ANSWERS && mode <= APP_MODE_SAFE_STATUS) {
        g_current_mode = mode;
    }
}

bool language_is_english(void) { return g_config.language != 0; }

const char *localized(const char *en, const char *zh)
{
    return language_is_english() ? en : zh;
}

void show_short_status(const char *msg)
{
    LOGI("status: %s", msg);
}

void show_status(const char *msg)
{
    LOGI("status: %s", msg);
}

uint64_t idle_time_us(void)
{
    return esp_timer_get_time() - g_last_activity_time;
}

int get_idle_timeout_seconds(void)
{
    return g_config.sleep_time_seconds;
}

void keep_awake_on_key(void)
{
    g_last_activity_time = esp_timer_get_time();
}

int millis(void)
{
    return (int)(esp_timer_get_time() / 1000);
}

void delay_ms(uint32_t ms)
{
    vTaskDelay(pdMS_TO_TICKS(ms));
}

#if BAND0_SCREEN_DIAG_ON_BOOT
static void run_screen_diag_once(void)
{
    LOGI("screen diag: raw 1bpp source 00, original invert");
    memset(g_screen_diag_1bpp, 0x00, sizeof(g_screen_diag_1bpp));
    jd79650_display_raw_1bpp(g_screen_diag_1bpp, true, "src00-inv");
    delay_ms(2500);

    LOGI("screen diag: raw 1bpp source ff, original invert");
    memset(g_screen_diag_1bpp, 0xff, sizeof(g_screen_diag_1bpp));
    jd79650_display_raw_1bpp(g_screen_diag_1bpp, true, "srcff-inv");
    delay_ms(2500);

    LOGI("screen diag: raw 1bpp checker, original invert");
    for (int y = 0; y < EPD_HEIGHT; y++) {
        for (int bx = 0; bx < EPD_WIDTH / 8; bx++) {
            bool block = ((y / 20) + (bx / 3)) % 2 == 0;
            g_screen_diag_1bpp[y * (EPD_WIDTH / 8) + bx] = block ? 0xff : 0x00;
        }
    }
    jd79650_display_raw_1bpp(g_screen_diag_1bpp, true, "checker-inv");
    delay_ms(2500);

    LOGI("screen diag: raw 1bpp checker, no invert");
    jd79650_display_raw_1bpp(g_screen_diag_1bpp, false, "checker-noinv");
    delay_ms(2500);

    LOGI("screen diag: renderer path");
    display_begin_frame();
    display_text_at(28, 46, "BAND-0 LOCAL", TEXT_STYLE_NORMAL);
    display_text_at(28, 66, "EPD DRIVER OK?", TEXT_STYLE_NORMAL);
    display_outline_rect(18, 32, 164, 58);
    display_text_at(20, 122, "UP: GPIO8", TEXT_STYLE_NORMAL);
    display_text_at(20, 142, "DOWN: GPIO1", TEXT_STYLE_NORMAL);
    display_refresh();
    delay_ms(2500);
}
#endif

static void delayed_startup_redraw_task(void *arg)
{
    (void)arg;
    vTaskDelay(pdMS_TO_TICKS(8000));
    ui_request_redraw();
    LOGI("startup delayed redraw requested");
    vTaskDelete(NULL);
}

static void delayed_reboot_task(void *arg)
{
    (void)arg;
    vTaskDelay(pdMS_TO_TICKS(350));
    esp_restart();
}

static void delayed_ble_start_task(void *arg)
{
    (void)arg;
#if !BAND0_AUTO_START_BLE
    LOGI("BLE auto-start disabled; use /api/ble/start when needed");
    diag_log_event("I", "ble", "auto-start disabled");
    vTaskDelete(NULL);
    return;
#endif

    vTaskDelay(pdMS_TO_TICKS(12000));

    uint32_t free_heap = heap_caps_get_free_size(MALLOC_CAP_8BIT);
    uint32_t largest = heap_caps_get_largest_free_block(MALLOC_CAP_8BIT);
    if (free_heap < 36000 || largest < 16000) {
        LOGW("BLE deferred: heap too low free=%lu largest=%lu",
             (unsigned long)free_heap, (unsigned long)largest);
        diag_log_event("W", "ble", "deferred free=%lu largest=%lu",
                       (unsigned long)free_heap, (unsigned long)largest);
        vTaskDelete(NULL);
        return;
    }

    int rc = ble_usage_init();
    if (rc != 0) {
        LOGW("BLE deferred init failed: %d", rc);
    }
    vTaskDelete(NULL);
}



/* ── Network / Time Sync ─────────────────────────────────────── */
static void poll_network_and_time(void)
{
    /* Check for pending OTA/setup requests */
    pending_request_t pending = {0};
    static bool pending_ota_logged = false;
    if (cloud_load_pending_request(&pending)) {
        if (!pending_ota_logged) {
            LOGI("OTA request staged for updater; leaving NVS request intact");
            pending_ota_logged = true;
        }
    } else {
        pending_ota_logged = false;
    }

    /* Try connecting to Wi-Fi if not connected */
    if (g_wifi_state == -2) {
        g_wifi_state = wifi_connect_or_portal();
    }
}

/* ── Key Event Loop ──────────────────────────────────────────── */
static void handle_mode_keys(void)
{
    key_event_t ev = gpio_key_get_event();
    if (ev.type == 1 && ev.event > 0) {
        if (g_current_mode == APP_MODE_SETUP) {
            /* Setup menu has its own key handling */
            ui_handle_key_event(ev);
        } else {
            /* Global key commands */
            if (ev.event == KEY_EVENT_CONFIRM && ev.is_long) {
                /* Baseline long DOWN is a safe redraw/recovery hint. */
                ui_request_redraw();
                diag_log_event("I", "key", "long down redraw");
            } else if (ev.event == KEY_EVENT_BACK && ev.is_long) {
                /* Baseline long UP returns to the primary Usage surface. */
                set_current_mode(APP_MODE_CLAUDE_USAGE);
                ui_request_redraw();
                diag_log_event("I", "key", "long up usage");
            } else if (ev.event == KEY_EVENT_NEXT && !ev.is_long) {
                /* Short press down = next mode */
                if (g_current_mode < APP_MODE_SETUP) {
                    set_current_mode(g_current_mode + 1);
                } else {
                    set_current_mode(APP_MODE_ANSWERS);
                }
                ui_request_redraw();
                LOGI("mode -> %d", g_current_mode);
            } else if (ev.event == KEY_EVENT_PREV && !ev.is_long) {
                /* Short press up = previous mode */
                if (g_current_mode > APP_MODE_ANSWERS) {
                    set_current_mode(g_current_mode - 1);
                } else {
                    set_current_mode(APP_MODE_SETUP);
                }
                ui_request_redraw();
                LOGI("mode -> %d", g_current_mode);
            }
        }
    }
}

static void handle_recovery_keys(void)
{
    static uint64_t up_since = 0;
    static uint64_t down_since = 0;
    static uint64_t both_since = 0;
    static bool startup_action_done = false;
    static bool runtime_reboot_done = false;

    uint64_t now = esp_timer_get_time();
    bool up = gpio_key_up_pressed();
    bool down = gpio_key_down_pressed();
    bool both = up && down;

    if (up && !up_since) up_since = now;
    if (!up) up_since = 0;
    if (down && !down_since) down_since = now;
    if (!down) down_since = 0;
    if (both && !both_since) both_since = now;
    if (!both) {
        both_since = 0;
        runtime_reboot_done = false;
    }

    uint64_t boot_age = now - g_boot_time_us;
    bool startup_window = boot_age < 15000000ULL;

    if (!startup_action_done && startup_window) {
        if (both_since && now - both_since > 8000000ULL) {
            diag_log_event("W", "key", "startup clear OTA+reboot");
            wifi_clear_ota_request();
            startup_action_done = true;
            xTaskCreate(delayed_reboot_task, "key_reboot", 2048, NULL, 6, NULL);
            return;
        }
        if (up_since && !down && now - up_since > 5000000ULL) {
            set_current_mode(APP_MODE_SAFE_STATUS);
            ui_request_redraw();
            diag_log_event("W", "key", "startup safe status");
            startup_action_done = true;
            return;
        }
        if (down_since && !up && now - down_since > 5000000ULL) {
            set_current_mode(APP_MODE_CLAUDE_USAGE);
            ui_request_redraw();
            diag_log_event("I", "key", "startup usage");
            startup_action_done = true;
            return;
        }
    }

    if (!startup_window && both_since && !runtime_reboot_done &&
        now - both_since > 10000000ULL) {
        runtime_reboot_done = true;
        diag_log_event("W", "key", "runtime reboot");
        xTaskCreate(delayed_reboot_task, "key_reboot", 2048, NULL, 6, NULL);
    }
}

/* ── App Main ────────────────────────────────────────────────── */
void app_main(void)
{
    ESP_LOGI(TAG, "========================================");
    ESP_LOGI(TAG, "  Band-0 (Quote_0_ESP8684_IDF)");
    ESP_LOGI(TAG, "  Version: %s", BAND0_FIRMWARE_VERSION);
    ESP_LOGI(TAG, "========================================");

    /* ── Initialize subsystems ──────────────────────────────── */
    g_boot_time_us = esp_timer_get_time();
    diag_log_event("I", "boot", "version %s", BAND0_FIRMWARE_VERSION);
    nvs_utils_init();
    int ota_cleanup = wifi_finalize_ota_request_on_main_boot();
    if (ota_cleanup > 0) {
        LOGI("finalized stale OTA request after main boot");
    } else if (ota_cleanup < 0) {
        LOGW("OTA request finalization failed: %d", ota_cleanup);
    }
    g_config = nvs_load_config();
    bool config_changed = false;
    if (g_config.sleep_time_seconds != 0) {
        g_config.sleep_time_seconds = 0;  /* Keep the e-paper visible during demos/debug. */
        config_changed = true;
    }
    if (g_config.boot_mode != APP_MODE_CLAUDE_USAGE) {
        g_config.boot_mode = APP_MODE_CLAUDE_USAGE;
        config_changed = true;
    }
    if (config_changed) {
        nvs_save_config(&g_config);
    }
    g_current_mode = APP_MODE_CLAUDE_USAGE;
    LOGI("boot mode pinned to Claude Usage app");

    buzzer_init();
    wallpaper_init();
    claude_usage_init();

    int display_ret = display_init();
    if (display_ret == 0) {
#if BAND0_SCREEN_DIAG_ON_BOOT
        ui_clear_redraw_request();
        run_screen_diag_once();
#endif
        ui_request_redraw();
        xTaskCreate(delayed_startup_redraw_task, "startup_redraw", 2048, NULL, 3, NULL);
        LOGI("display init done");
    } else {
        LOGW("display init failed, keeping network/debug alive: %d", display_ret);
    }

    wifi_init();
    debug_server_start();

    /* Start key scan task */
    BaseType_t key_ok = xTaskCreate(key_task, "key_task", 2048, NULL, 5, NULL);
    if (key_ok != pdPASS) {
        LOGE("key_task create failed");
    }

    BaseType_t ble_ok = xTaskCreate(delayed_ble_start_task, "ble_defer", 2048, NULL, 3, NULL);
    if (ble_ok != pdPASS) {
        LOGW("deferred BLE task create failed");
    }

    LOGI("All subsystems initialized");
    diag_log_event("I", "boot", "subsystems initialized");
    buzzer_click();
    g_last_activity_time = esp_timer_get_time();

    /* ── Main Loop ──────────────────────────────────────────── */
    while (1) {
        /* Poll network (non-blocking) */
        poll_network_and_time();

        /* OTA is staged explicitly through /api/ota/url and the updater app. */

        /* Process key events */
        handle_recovery_keys();
        handle_mode_keys();

        /* Periodic 200ms tick */
        uint64_t now = esp_timer_get_time() / 1000;
        if (now - g_last_tick_time > 200) {
            display_tick_200ms();
            g_last_tick_time = now;

            /* Check idle timeout for screen sleep */
            int timeout_s = get_idle_timeout_seconds();
            if (timeout_s > 0) {
                uint64_t idle = (esp_timer_get_time() - g_last_activity_time) / 1000000ULL;
                if (idle >= (uint64_t)timeout_s) {
                    if (!g_screen_sleeping) {
                        g_screen_sleeping = true;
                        LOGI("screen sleep after %ds idle", timeout_s);
                        display_clear();
                        display_refresh();
                    }
                } else {
                    g_screen_sleeping = false;
                }
            }
        }

        /* Redraw UI if requested and display is ready */
        if (ui_redraw_requested() && !g_screen_sleeping) {
            ui_render_current_screen();
        }

        /* Short delay to yield */
        vTaskDelay(pdMS_TO_TICKS(10));
    }
}
