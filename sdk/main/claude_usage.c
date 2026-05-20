/**
 * Claude Usage app state.
 *
 * Compatible with cardputer-claude-usage compact payload lines:
 *   cu/cr/ri/wu/wr/wi/m/d/s/age/stale/src/err/ts/fs
 */

#include <string.h>
#include <stdlib.h>
#include "esp_log.h"
#include "esp_timer.h"
#include "nvs_flash.h"
#include "cJSON.h"
#include "claude_usage.h"

static const char *TAG = "claude_usage";

static claude_usage_state_t s_usage;
static char s_hint[48] = "Open bridge :8788";
static bool s_loading_cached_payload = false;
static bool s_visual_changed = false;

#define NVS_USAGE_NS "usage"
#define KEY_LAST_PAYLOAD "last"

static int clamp_pct(int value)
{
    if (value < 0) return -1;
    if (value > 100) return 100;
    return value;
}

static int json_pct(cJSON *root, const char *key)
{
    cJSON *item = cJSON_GetObjectItem(root, key);
    if (!item) return -1;
    if (cJSON_IsNumber(item)) return clamp_pct(item->valueint);
    if (cJSON_IsString(item) && item->valuestring && item->valuestring[0]) {
        char *end = NULL;
        long value = strtol(item->valuestring, &end, 10);
        if (end && end != item->valuestring) return clamp_pct((int)value);
    }
    return -1;
}

static int json_int(cJSON *root, const char *key, int fallback)
{
    cJSON *item = cJSON_GetObjectItem(root, key);
    if (!item) return fallback;
    if (cJSON_IsNumber(item)) return item->valueint;
    if (cJSON_IsString(item) && item->valuestring && item->valuestring[0]) {
        char *end = NULL;
        long value = strtol(item->valuestring, &end, 10);
        if (end && end != item->valuestring) return (int)value;
    }
    return fallback;
}

static bool json_bool(cJSON *root, const char *key, bool fallback)
{
    cJSON *item = cJSON_GetObjectItem(root, key);
    if (!item) return fallback;
    if (cJSON_IsBool(item)) return cJSON_IsTrue(item);
    if (cJSON_IsNumber(item)) return item->valueint != 0;
    if (cJSON_IsString(item) && item->valuestring) {
        return !strcmp(item->valuestring, "true") || !strcmp(item->valuestring, "1");
    }
    return fallback;
}

static void json_str(cJSON *root, const char *key, char *out, size_t out_len, const char *fallback)
{
    cJSON *item = cJSON_GetObjectItem(root, key);
    const char *value = (item && cJSON_IsString(item)) ? item->valuestring : fallback;
    strlcpy(out, value ? value : "", out_len);
}

static void usage_store_clear(void)
{
    nvs_handle_t nvs;
    if (nvs_open(NVS_USAGE_NS, NVS_READWRITE, &nvs) != ESP_OK) return;
    nvs_erase_key(nvs, KEY_LAST_PAYLOAD);
    nvs_commit(nvs);
    nvs_close(nvs);
}

static void usage_store_payload(cJSON *payload)
{
    if (s_loading_cached_payload || !payload) return;

    char *raw = cJSON_PrintUnformatted(payload);
    if (!raw) return;

    nvs_handle_t nvs;
    if (nvs_open(NVS_USAGE_NS, NVS_READWRITE, &nvs) == ESP_OK) {
        nvs_set_str(nvs, KEY_LAST_PAYLOAD, raw);
        nvs_commit(nvs);
        nvs_close(nvs);
    }
    cJSON_free(raw);
}

static bool str_changed(const char *a, const char *b)
{
    return strcmp(a ? a : "", b ? b : "") != 0;
}

static bool usage_visual_differs(const claude_usage_state_t *a, const claude_usage_state_t *b)
{
    return a->current_used != b->current_used ||
           a->current_remaining != b->current_remaining ||
           a->weekly_used != b->weekly_used ||
           a->weekly_remaining != b->weekly_remaining ||
           str_changed(a->status, b->status) ||
           str_changed(a->error, b->error) ||
           a->stale != b->stale ||
           a->is_demo != b->is_demo ||
           a->has_data != b->has_data;
}

static bool usage_load_payload(char *out, size_t out_len)
{
    nvs_handle_t nvs;
    if (!out || out_len == 0) return false;
    if (nvs_open(NVS_USAGE_NS, NVS_READONLY, &nvs) != ESP_OK) return false;
    size_t len = out_len;
    esp_err_t err = nvs_get_str(nvs, KEY_LAST_PAYLOAD, out, &len);
    nvs_close(nvs);
    return err == ESP_OK && out[0] != '\0';
}

void claude_usage_reset(const char *hint)
{
    claude_usage_state_t before = s_usage;
    memset(&s_usage, 0, sizeof(s_usage));
    s_usage.current_used = -1;
    s_usage.current_remaining = -1;
    s_usage.weekly_used = -1;
    s_usage.weekly_remaining = -1;
    s_usage.age_seconds = -1;
    strlcpy(s_usage.status, "waiting", sizeof(s_usage.status));
    strlcpy(s_usage.last_transport, "-", sizeof(s_usage.last_transport));
    if (hint && hint[0]) {
        strlcpy(s_hint, hint, sizeof(s_hint));
    }
    s_visual_changed = usage_visual_differs(&before, &s_usage);
}

void claude_usage_init(void)
{
    claude_usage_reset("Open bridge :8788");
    char cached[768] = {0};
    if (usage_load_payload(cached, sizeof(cached))) {
        s_loading_cached_payload = true;
        bool ok = claude_usage_receive_json(cached, "cache");
        s_loading_cached_payload = false;
        if (ok && s_usage.has_data) {
            s_usage.stale = true;
            strlcpy(s_usage.status, "cached", sizeof(s_usage.status));
            strlcpy(s_usage.last_transport, "cache", sizeof(s_usage.last_transport));
            ESP_LOGI(TAG, "restored cached usage payload");
        }
    }
}

bool claude_usage_receive_json(const char *line, const char *transport)
{
    if (!line || !line[0]) return false;

    claude_usage_state_t before = s_usage;
    s_visual_changed = false;

    cJSON *root = cJSON_Parse(line);
    if (!root) {
        strlcpy(s_usage.error, "Bad usage JSON", sizeof(s_usage.error));
        strlcpy(s_usage.status, "error", sizeof(s_usage.status));
        s_visual_changed = usage_visual_differs(&before, &s_usage);
        ESP_LOGW(TAG, "bad JSON from %s", transport ? transport : "?");
        return false;
    }

    cJSON *line_item = cJSON_GetObjectItem(root, "line");
    if (cJSON_IsString(line_item) && line_item->valuestring && line_item->valuestring[0]) {
        bool ok = claude_usage_receive_json(line_item->valuestring, transport);
        cJSON_Delete(root);
        return ok;
    }

    cJSON *payload = cJSON_GetObjectItem(root, "payload");
    cJSON *data = cJSON_IsObject(payload) ? payload : root;

    char command[12] = {0};
    json_str(root, "cmd", command, sizeof(command), "");
    if (!command[0]) {
        json_str(data, "cmd", command, sizeof(command), "");
    }
    if (!strcmp(command, "wait") || !strcmp(command, "clear")) {
        char hint[48] = {0};
        json_str(root, "hint", hint, sizeof(hint), "Open bridge :8788");
        if (!hint[0]) {
            json_str(data, "hint", hint, sizeof(hint), "Open bridge :8788");
        }
        if (!s_loading_cached_payload) {
            usage_store_clear();
        }
        claude_usage_reset(hint);
        cJSON_Delete(root);
        return true;
    }

    s_usage.current_used = json_pct(data, "cu");
    s_usage.current_remaining = json_pct(data, "cr");
    json_str(data, "ri", s_usage.current_resets_in, sizeof(s_usage.current_resets_in), "");

    s_usage.weekly_used = json_pct(data, "wu");
    s_usage.weekly_remaining = json_pct(data, "wr");
    json_str(data, "wi", s_usage.weekly_resets_in, sizeof(s_usage.weekly_resets_in), "");

    json_str(data, "m", s_usage.model, sizeof(s_usage.model), "");
    json_str(data, "s", s_usage.status, sizeof(s_usage.status), "live");
    json_str(data, "src", s_usage.source, sizeof(s_usage.source), "");
    json_str(data, "err", s_usage.error, sizeof(s_usage.error), "");
    s_usage.age_seconds = json_int(data, "age", -1);
    s_usage.stale = json_bool(data, "stale", false);
    s_usage.is_demo = json_bool(data, "d", false);
    s_usage.footer_seed = (uint32_t)json_int(data, "fs", json_int(data, "ts", 1));
    s_usage.has_data = (s_usage.current_used >= 0 || s_usage.weekly_used >= 0);
    s_usage.last_update_ms = esp_timer_get_time() / 1000;
    strlcpy(s_usage.last_transport, transport ? transport : "?", sizeof(s_usage.last_transport));

    if (!s_usage.has_data && !s_usage.error[0]) {
        strlcpy(s_usage.error, "Payload missing usage", sizeof(s_usage.error));
        strlcpy(s_usage.status, "error", sizeof(s_usage.status));
    }

    s_visual_changed = usage_visual_differs(&before, &s_usage);
    ESP_LOGI(TAG, "usage payload: current=%d weekly=%d status=%s via=%s",
             s_usage.current_used, s_usage.weekly_used, s_usage.status, s_usage.last_transport);
    if ((s_usage.has_data || s_usage.error[0]) && s_visual_changed) {
        usage_store_payload(data);
    }
    cJSON_Delete(root);
    return s_usage.has_data || s_usage.error[0];
}

bool claude_usage_visual_changed(void)
{
    return s_visual_changed;
}

void claude_usage_get_state(claude_usage_state_t *out)
{
    if (!out) return;
    *out = s_usage;
    if (!s_usage.has_data && !s_usage.error[0]) {
        strlcpy(out->error, s_hint, sizeof(out->error));
    }
}
