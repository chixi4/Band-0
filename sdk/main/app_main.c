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
#include "esp_timer.h"
#include "nvs_flash.h"
#include "app_config.h"
#include "gpio_key.h"
#include "buzzer.h"
#include "display_epd.h"
#include "ui_render.h"
#include "wallpaper.h"
#include "wifi_config.h"
#include "cloud_ota.h"
#include "ble_pager.h"
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

static uint64_t g_last_activity_time = 0;
static uint64_t g_last_tick_time = 0;

/* ── Helpers ─────────────────────────────────────────────────── */
app_mode_t current_mode(void) { return g_current_mode; }
void set_current_mode(app_mode_t mode) { g_current_mode = mode; }

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



/* ── Network / Time Sync ─────────────────────────────────────── */
static void poll_network_and_time(void)
{
    /* Check for pending OTA/setup requests */
    pending_request_t pending = {0};
    if (cloud_load_pending_request(&pending)) {
        ui_draw_pending_request(&pending);
        wifi_clear_ota_request();
    }

    /* Try connecting to Wi-Fi if not connected */
    static bool wifi_attempted = false;
    if (!wifi_attempted) {
        wifi_connect_or_portal();
        wifi_attempted = true;
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
                /* Long press down = confirm in context */
                if (g_current_mode == APP_MODE_MERIT) {
                    g_config.merit_count++;
                    LOGI("merit count: %d", g_config.merit_count);
                    ui_request_redraw();
                }
            } else if (ev.event == KEY_EVENT_BACK && ev.is_long) {
                /* Long press up = back to clock */
                set_current_mode(APP_MODE_CLOCK);
                ui_request_redraw();
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

/* ── App Main ────────────────────────────────────────────────── */
void app_main(void)
{
    ESP_LOGI(TAG, "========================================");
    ESP_LOGI(TAG, "  Band-0 (Quote_0_ESP8684_IDF)");
    ESP_LOGI(TAG, "  Version: 1.2.5-rebuilt");
    ESP_LOGI(TAG, "========================================");

    /* ── Initialize subsystems ──────────────────────────────── */
    nvs_utils_init();
    g_config = nvs_load_config();

    /* Initialize display early so we can show status */
    display_init();
    display_clear();
    display_text(80, "Band-0", TEXT_STYLE_TITLE);
    display_text(100, "Starting...", TEXT_STYLE_NORMAL);
    display_refresh();

    /* Initialize hardware */
    buzzer_init();
    wallpaper_init();
    wifi_init();

    /* Start key scan task */
    xTaskCreate(key_task, "key_task", 2048, NULL, 10, NULL);

    /* Initialize BLE (deferred — started when user enters BT pager mode) */
    /* ble_pager_init(); — called on first entry to BT pager */

    LOGI("All subsystems initialized");
    buzzer_click();
    g_last_activity_time = esp_timer_get_time();

    /* ── Main Loop ──────────────────────────────────────────── */
    while (1) {
        /* Poll network (non-blocking) */
        poll_network_and_time();

        /* Handle pending OTA firmware query (background) */
        static bool ota_checked = false;
        if (!ota_checked && wifi_connect_or_portal() == 0) {
            /* Connected to Wi-Fi, check for update */
            firmware_query_result_t fw = {0};
            if (cloud_query_firmware_update(&fw) == 0 && fw.need_update) {
                LOGI("Firmware update available: %s", fw.url);
                if (fw.url[0]) {
                    cloud_start_ota(fw.url);
                }
            }
            ota_checked = true;
        }

        /* Process key events */
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
