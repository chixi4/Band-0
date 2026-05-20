/**
 * NVS and data partition utilities for Band-0.
 *
 * Handles:
 *   - NVS init and config storage ("config" namespace)
 *   - Raw data partition "wp" for wallpaper storage
 *   - BLE state persistence
 */

#include <string.h>
#include "esp_system.h"
#include "nvs_flash.h"
#include "esp_partition.h"
#include "esp_log.h"
#include "app_config.h"
#include "nvs_utils.h"

static const char *TAG = "nvs_utils";

/* ── NVS Namespace Keys ──────────────────────────────────────── */
#define NVS_CFG_NS   "config"
#define KEY_LANG      "language"
#define KEY_MBTI      "mbti_type"
#define KEY_SLEEP     "sleep_sec"
#define KEY_MERIT     "merit_cnt"
#define KEY_BT_DOWN   "bt_key_dn"
#define KEY_BT_UP     "bt_key_up"
#define KEY_BT_TPL    "bt_tmpl"
#define KEY_BOOT_MODE "boot_mode"
#define KEY_CLOCK_WARN "clock_warn"
#define KEY_MBTI_HIDE "mbti_hide"
#define KEY_KEY_SOUND "key_sound"

#define NVS_BT_NS     "bt_pager"
#define KEY_BT_MODE   "bt_mode"
#define KEY_BT_TMPL   "bt_tmpl"

/* "ot a" namespace is handled in wifi_config.c */

/* ── Default Config ──────────────────────────────────────────── */
static const app_config_t DEFAULT_CONFIG = {
    .boot_mode          = APP_MODE_CLOCK,
    .language           = 0,
    .mbti_type          = 0,
    .sleep_time_seconds = 0,
    .merit_count        = 0,
    .bt_key_down        = 0,
    .bt_key_up          = 0,
    .bt_template        = 0,
    .clock_warning      = false,
    .mbti_knowledge_hidden = false,
    .key_sound          = true,
};

static void nvs_get_i32_int(nvs_handle_t h, const char *key, int *out)
{
    int32_t value = 0;
    if (out && nvs_get_i32(h, key, &value) == ESP_OK) {
        *out = (int)value;
    }
}

static void nvs_get_i32_bool(nvs_handle_t h, const char *key, bool *out)
{
    int32_t value = 0;
    if (out && nvs_get_i32(h, key, &value) == ESP_OK) {
        *out = (value != 0);
    }
}

/* ── NVS Init ────────────────────────────────────────────────── */
void nvs_utils_init(void)
{
    esp_err_t err = nvs_flash_init();
    if (err == ESP_ERR_NVS_NO_FREE_PAGES ||
        err == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        ESP_LOGW(TAG, "NVS partition needs erase, erasing...");
        ESP_ERROR_CHECK(nvs_flash_erase());
        err = nvs_flash_init();
    }
    ESP_ERROR_CHECK(err);
    ESP_LOGI(TAG, "NVS initialized");
}

/* ── Config Load/Save ────────────────────────────────────────── */
app_config_t nvs_load_config(void)
{
    app_config_t cfg = DEFAULT_CONFIG;
    nvs_handle_t h;
    esp_err_t err = nvs_open(NVS_CFG_NS, NVS_READONLY, &h);
    if (err != ESP_OK) {
        ESP_LOGW(TAG, "no config namespace, using defaults");
        return cfg;
    }

    nvs_get_i32_int(h, KEY_LANG,      &cfg.language);
    nvs_get_i32_int(h, KEY_MBTI,      &cfg.mbti_type);
    nvs_get_i32_int(h, KEY_SLEEP,     &cfg.sleep_time_seconds);
    nvs_get_i32_int(h, KEY_MERIT,     &cfg.merit_count);
    nvs_get_i32_int(h, KEY_BT_DOWN,   &cfg.bt_key_down);
    nvs_get_i32_int(h, KEY_BT_UP,     &cfg.bt_key_up);
    nvs_get_i32_int(h, KEY_BT_TPL,    &cfg.bt_template);
    nvs_get_i32_int(h, KEY_BOOT_MODE, &cfg.boot_mode);
    nvs_get_i32_bool(h, KEY_CLOCK_WARN, &cfg.clock_warning);
    nvs_get_i32_bool(h, KEY_MBTI_HIDE, &cfg.mbti_knowledge_hidden);
    nvs_get_i32_bool(h, KEY_KEY_SOUND, &cfg.key_sound);

    nvs_close(h);
    ESP_LOGI(TAG, "config loaded (lang=%d, sleep=%ds, merit=%d)",
             cfg.language, cfg.sleep_time_seconds, cfg.merit_count);
    return cfg;
}

void nvs_save_config(const app_config_t *cfg)
{
    if (!cfg) return;
    nvs_handle_t h;
    esp_err_t err = nvs_open(NVS_CFG_NS, NVS_READWRITE, &h);
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "open config for write: %s", esp_err_to_name(err));
        return;
    }

    nvs_set_i32(h, KEY_LANG,      cfg->language);
    nvs_set_i32(h, KEY_MBTI,      cfg->mbti_type);
    nvs_set_i32(h, KEY_SLEEP,     cfg->sleep_time_seconds);
    nvs_set_i32(h, KEY_MERIT,     cfg->merit_count);
    nvs_set_i32(h, KEY_BT_DOWN,   cfg->bt_key_down);
    nvs_set_i32(h, KEY_BT_UP,     cfg->bt_key_up);
    nvs_set_i32(h, KEY_BT_TPL,    cfg->bt_template);
    nvs_set_i32(h, KEY_BOOT_MODE, cfg->boot_mode);
    nvs_set_i32(h, KEY_CLOCK_WARN, cfg->clock_warning);
    nvs_set_i32(h, KEY_MBTI_HIDE, cfg->mbti_knowledge_hidden);
    nvs_set_i32(h, KEY_KEY_SOUND, cfg->key_sound);

    nvs_commit(h);
    nvs_close(h);
    ESP_LOGI(TAG, "config saved");
}

void nvs_reset_config(void)
{
    app_config_t def = DEFAULT_CONFIG;
    nvs_save_config(&def);
    ESP_LOGI(TAG, "config reset to defaults");
}

/* ── BT Pager State ──────────────────────────────────────────── */
void nvs_load_bt_state(bt_pager_state_t *state)
{
    if (!state) return;
    nvs_handle_t h;
    esp_err_t err = nvs_open(NVS_BT_NS, NVS_READONLY, &h);
    if (err != ESP_OK) return;

    int32_t mode = 0, tmpl = 0;
    nvs_get_i32(h, KEY_BT_MODE, &mode);
    nvs_get_i32(h, KEY_BT_TMPL, &tmpl);
    state->mode = (bt_pager_mode_t)mode;
    state->template_id = (uint8_t)tmpl;
    nvs_close(h);
}

void nvs_save_bt_state(const bt_pager_state_t *state)
{
    if (!state) return;
    nvs_handle_t h;
    esp_err_t err = nvs_open(NVS_BT_NS, NVS_READWRITE, &h);
    if (err != ESP_OK) return;

    nvs_set_i32(h, KEY_BT_MODE, (int32_t)state->mode);
    nvs_set_i32(h, KEY_BT_TMPL, (int32_t)state->template_id);
    nvs_commit(h);
    nvs_close(h);
}

/* ── WP Partition (Wallpaper Storage) ────────────────────────── */
static const esp_partition_t *s_wp_part = NULL;

void nvs_wp_partition_init(void)
{
    s_wp_part = esp_partition_find_first(
        ESP_PARTITION_TYPE_DATA, ESP_PARTITION_SUBTYPE_ANY, "wp");
    if (!s_wp_part) {
        ESP_LOGE(TAG, "wp partition not found!");
        return;
    }
    ESP_LOGI(TAG, "wp partition: offset=0x%x, size=%d",
             s_wp_part->address, s_wp_part->size);
}

bool nvs_wp_has_payload(void)
{
    if (!s_wp_part) return false;
    /* Check the first 4 bytes — if non-zero, there's data */
    uint32_t magic = 0;
    esp_partition_read(s_wp_part, 0, &magic, sizeof(magic));
    return magic != 0xFFFFFFFF && magic != 0;
}

int nvs_wp_payload_length(void)
{
    if (!s_wp_part) return 0;
    uint32_t len = 0;
    esp_partition_read(s_wp_part, 0, &len, sizeof(len));
    if (len == 0xFFFFFFFF || len > s_wp_part->size) return 0;
    return (int)len;
}

int nvs_wp_read(uint8_t *buf, size_t max_len)
{
    if (!s_wp_part || !buf) return -1;
    esp_err_t err = esp_partition_read(s_wp_part, 0, buf, max_len);
    return (err == ESP_OK) ? (int)max_len : -1;
}

int nvs_wp_write(const uint8_t *data, size_t len)
{
    if (!s_wp_part || !data || len > s_wp_part->size) return -1;
    esp_err_t err = esp_partition_erase_range(s_wp_part, 0, s_wp_part->size);
    if (err != ESP_OK) return -1;
    err = esp_partition_write(s_wp_part, 0, data, len);
    return (err == ESP_OK) ? 0 : -1;
}

int nvs_wp_erase(void)
{
    if (!s_wp_part) return -1;
    esp_err_t err = esp_partition_erase_range(s_wp_part, 0, s_wp_part->size);
    return (err == ESP_OK) ? 0 : -1;
}
