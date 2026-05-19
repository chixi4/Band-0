/**
 * Web configuration interface for Cardputer MITM AP.
 *
 * Runs on port 80, allows viewing and changing:
 *   - Mac MITM IP address
 *   - AP SSID/password (future)
 *   - Status overview
 */

#include <string.h>
#include "esp_log.h"
#include "esp_http_server.h"
#include "cJSON.h"
#include "config.h"
#include "wifi_ap.h"
#include "display_lcd.h"

static const char *TAG = "web";
static httpd_handle_t s_server = NULL;

/* ── GET /api/status ───────────────────────────────────────── */
static esp_err_t status_get_handler(httpd_req_t *req)
{
    cJSON *root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "ssid", wifi_ap_get_ssid());
    cJSON_AddStringToObject(root, "mac_ip", wifi_ap_get_mac_ip());
    cJSON_AddNumberToObject(root, "stations", wifi_ap_get_sta_count());

    char *json = cJSON_PrintUnformatted(root);
    cJSON_Delete(root);

    httpd_resp_set_type(req, "application/json");
    httpd_resp_sendstr(req, json);
    free(json);
    return ESP_OK;
}

/* ── POST /api/config ──────────────────────────────────────── */
static esp_err_t config_post_handler(httpd_req_t *req)
{
    char buf[128];
    int len = httpd_req_recv(req, buf, sizeof(buf) - 1);
    if (len <= 0) {
        httpd_resp_send_err(req, HTTPD_400_BAD_REQUEST, "no body");
        return ESP_FAIL;
    }
    buf[len] = '\0';

    cJSON *json = cJSON_Parse(buf);
    if (!json) {
        httpd_resp_send_err(req, HTTPD_400_BAD_REQUEST, "invalid JSON");
        return ESP_FAIL;
    }

    cJSON *ip = cJSON_GetObjectItem(json, "mac_ip");
    if (ip && cJSON_IsString(ip)) {
        wifi_ap_set_mac_ip(ip->valuestring);
        display_set_mac_ip(ip->valuestring);
        display_set_info_line("mac_ip updated!");
        ESP_LOGI(TAG, "mac_ip set to %s", ip->valuestring);
    }

    cJSON_Delete(json);

    httpd_resp_set_type(req, "application/json");
    httpd_resp_sendstr(req, "{\"status\":\"ok\"}");
    return ESP_OK;
}

/* ── GET / (HTML Dashboard) ────────────────────────────────── */
static esp_err_t index_get_handler(httpd_req_t *req)
{
    const char *html =
        "<!DOCTYPE html><html><head>"
        "<meta charset='utf-8'>"
        "<meta name='viewport' content='width=device-width,initial-scale=1'>"
        "<title>ADV 2.4G MITM Console</title>"
        "<style>"
        "body{font-family:sans-serif;margin:20px;background:#f5f5f5}"
        ".card{background:#fff;border-radius:8px;padding:16px;margin:10px 0;box-shadow:0 1px 3px rgba(0,0,0,.1)}"
        "h1{color:#333;font-size:20px}"
        "label{display:block;margin:10px 0 4px;color:#666;font-size:13px}"
        "input{width:100%;padding:8px;border:1px solid #ddd;border-radius:4px;box-sizing:border-box}"
        "button{background:#007aff;color:#fff;border:none;padding:10px 20px;border-radius:6px;font-size:14px;margin-top:10px}"
        "#status{margin:10px 0}"
        ".badge{display:inline-block;padding:2px 8px;border-radius:10px;font-size:12px;margin:2px}"
        ".badge-green{background:#34c759;color:#fff}"
        ".badge-gray{background:#8e8e93;color:#fff}"
        "</style></head><body>"
        "<h1>ADV 2.4G MITM Console</h1>"
        "<div class='card'>"
        "<div id='status'>Loading...</div>"
        "</div>"
        "<div class='card'>"
        "<h2>Mac MITM IP</h2>"
        "<label>IP Address (where local_cloud.py runs)</label>"
        "<input id='mac_ip' value='192.168.4.2' />"
        "<button onclick='saveConfig()'>Save</button>"
        "</div>"
        "<div class='card'>"
        "<p style='font-size:12px;color:#999'>"
        "1. Connect your Mac to <b>ADV 2.4G</b><br>"
        "2. Set Mac's IP above<br>"
        "3. On Mac: <code>python3 tools/local_cloud.py --host 0.0.0.0 --port 8088</code><br>"
        "4. Connect Band-0 device to this AP<br>"
        "5. DNS will redirect <code>dot.mindreset.tech</code> → your Mac"
        "</p></div>"
        "<script>"
        "async function load(){const r=await fetch('/api/status');const d=await r.json();"
        "document.getElementById('status').innerHTML="
        "'SSID: <b>'+d.ssid+'</b><br>Mac IP: <b>'+d.mac_ip+'</b><br>Connected: <b>'+d.stations+'</b>';"
        "document.getElementById('mac_ip').value=d.mac_ip;}"
        "async function saveConfig(){const ip=document.getElementById('mac_ip').value;"
        "await fetch('/api/config',{method:'POST',body:JSON.stringify({mac_ip:ip})});"
        "alert('Saved!');load();}"
        "load();"
        "</script></body></html>";

    httpd_resp_set_type(req, "text/html");
    httpd_resp_sendstr(req, html);
    return ESP_OK;
}

/* ── Start HTTP Server ─────────────────────────────────────── */
static const httpd_uri_t uris[] = {
    { .uri = "/", .method = HTTP_GET,  .handler = index_get_handler },
    { .uri = "/api/status", .method = HTTP_GET,  .handler = status_get_handler },
    { .uri = "/api/config", .method = HTTP_POST, .handler = config_post_handler },
};

void web_config_start(void)
{
    httpd_config_t cfg = HTTPD_DEFAULT_CONFIG();
    cfg.server_port = 80;
    cfg.max_uri_handlers = 8;

    if (httpd_start(&s_server, &cfg) == ESP_OK) {
        for (int i = 0; i < sizeof(uris) / sizeof(uris[0]); i++) {
            httpd_register_uri_handler(s_server, &uris[i]);
        }
        ESP_LOGI(TAG, "web config: http://192.168.4.1");
    } else {
        ESP_LOGE(TAG, "failed to start web server");
    }
}

void web_config_stop(void)
{
    if (s_server) {
        httpd_stop(s_server);
        s_server = NULL;
    }
}
