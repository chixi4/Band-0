/**
 * Band-0 Updater / Recovery Application
 *
 * Reads OTA URL from NVS, connects to Wi-Fi, downloads firmware,
 * writes to the main partition, and reboots.
 *
 * Based on decompiled updater.bin (true address 0x420062da).
 */

#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <strings.h>
#include <sys/time.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_log.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_partition.h"
#include "esp_ota_ops.h"
#include "nvs_flash.h"
#include "esp_timer.h"
#include "driver/gpio.h"
#include "lwip/sockets.h"
#include "lwip/netdb.h"
#include "epd_screen.h"

static const char *TAG = "updater";

/* ── NVS Keys ────────────────────────────────────────────────── */
#define NVS_OTA_NS   "ota"
#define KEY_URL      "url"
#define KEY_PASSWORD "password"
#define KEY_SSID_1   "ssid_1"
#define KEY_PWD_1    "pwd_1"
#define KEY_SSID_2   "ssid_2"
#define KEY_PWD_2    "pwd_2"
#define KEY_STA_SSID "sta.ssid"
#define KEY_STA_PWD  "sta.pswd"
#define KEY_ATTEMPT  "attempt_id"
#define KEY_RESULT   "result"

static int s_current_attempt_id = 0;

/* ── Updater Request ─────────────────────────────────────────── */
typedef struct {
    char url[256];
    char password[32];
    int  attempt_id;
    bool has_url;
    int  wifi_count;
    struct {
        char ssid[33];
        char pwd[65];
        bool has_ssid;
        bool has_pwd;
    } wifi[3];
} updater_request_t;

/* ── Forward Declarations ────────────────────────────────────── */
static int  load_updater_request(updater_request_t *req);
static int  wifi_connect_for_ota(const char *ssid, const char *pwd, int timeout_ms);
static void wifi_disconnect_for_ota(void);
static int  ota_download_to_main(const char *url);
static int  parse_http_url(const char *url, char *host, size_t host_len,
                           char *port, size_t port_len,
                           char *path, size_t path_len);
static int  connect_http_socket(const char *host, const char *port);
static int  send_all(int fd, const char *data, size_t len);
static int  read_http_header(int fd, char *header, size_t header_len);
static int  parse_http_header(const char *header, int *status, int *content_len);
static void record_update_result(int attempt_id, int result, const char *reason);
static void set_boot_partition_main(void);
static void fail_and_reboot(const char *reason);

/* ── Load Request from NVS ───────────────────────────────────── */
static int load_updater_request(updater_request_t *req)
{
    if (!req) return -1;
    memset(req, 0, sizeof(*req));

    nvs_handle_t nvs;
    esp_err_t err = nvs_open(NVS_OTA_NS, NVS_READONLY, &nvs);
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "no ota namespace: %s", esp_err_to_name(err));
        return 0x1102;
    }

    size_t len = sizeof(req->url);
    err = nvs_get_str(nvs, KEY_URL, req->url, &len);
    req->has_url = (err == ESP_OK && req->url[0]);

    len = sizeof(req->password);
    if (nvs_get_str(nvs, KEY_PASSWORD, req->password, &len) != ESP_OK) {
        req->password[0] = '\0';
    }

    int32_t aid = 0;
    nvs_get_i32(nvs, KEY_ATTEMPT, &aid);
    req->attempt_id = (int)aid;

    /* Load up to 3 Wi-Fi profiles */
    const char *ssid_keys[] = {KEY_SSID_1, KEY_SSID_2, KEY_STA_SSID};
    const char *pwd_keys[]  = {KEY_PWD_1,  KEY_PWD_2,  KEY_STA_PWD};
    for (int i = 0; i < 3; i++) {
        len = sizeof(req->wifi[i].ssid);
        if (nvs_get_str(nvs, ssid_keys[i], req->wifi[i].ssid, &len) == ESP_OK) {
            req->wifi[i].has_ssid = true;
            len = sizeof(req->wifi[i].pwd);
            if (nvs_get_str(nvs, pwd_keys[i], req->wifi[i].pwd, &len) == ESP_OK) {
                req->wifi[i].has_pwd = true;
            }
            req->wifi_count = i + 1;
        }
    }

    nvs_close(nvs);
    ESP_LOGI(TAG, "request loaded: url=%s, wifi=%d, attempt=%d",
             req->url, req->wifi_count, req->attempt_id);
    return 0;
}

/* ── Wi-Fi Connect (blocking, for OTA) ───────────────────────── */
static EventGroupHandle_t s_wifi_event_group = NULL;
#define WIFI_CONNECTED_BIT  BIT0
#define WIFI_FAIL_BIT       BIT1

static void wifi_event_handler(void *arg, esp_event_base_t base,
                                int32_t id, void *data)
{
    if (base == WIFI_EVENT && id == WIFI_EVENT_STA_START) {
        esp_wifi_connect();
    } else if (base == WIFI_EVENT && id == WIFI_EVENT_STA_DISCONNECTED) {
        ESP_LOGW(TAG, "Wi-Fi disconnected");
        xEventGroupSetBits(s_wifi_event_group, WIFI_FAIL_BIT);
    } else if (base == IP_EVENT && id == IP_EVENT_STA_GOT_IP) {
        ip_event_got_ip_t *event = (ip_event_got_ip_t *)data;
        ESP_LOGI(TAG, "Got IP: " IPSTR, IP2STR(&event->ip_info.ip));
        xEventGroupSetBits(s_wifi_event_group, WIFI_CONNECTED_BIT);
    }
}

static void wifi_init_for_ota(void)
{
    esp_netif_init();
    esp_event_loop_create_default();
    esp_netif_create_default_wifi_sta();

    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    esp_wifi_init(&cfg);

    esp_event_handler_instance_register(WIFI_EVENT, ESP_EVENT_ANY_ID,
                                         wifi_event_handler, NULL, NULL);
    esp_event_handler_instance_register(IP_EVENT, IP_EVENT_STA_GOT_IP,
                                         wifi_event_handler, NULL, NULL);

    esp_wifi_set_mode(WIFI_MODE_STA);
    esp_wifi_start();

    s_wifi_event_group = xEventGroupCreate();
}

static int wifi_connect_for_ota(const char *ssid, const char *pwd, int timeout_ms)
{
    if (!ssid || !*ssid) return -1;

    ESP_LOGI(TAG, "connecting to Wi-Fi: %s", ssid);

    wifi_config_t cfg = {
        .sta = {
            .threshold.authmode = WIFI_AUTH_WPA2_PSK,
        },
    };
    strlcpy((char *)cfg.sta.ssid, ssid, sizeof(cfg.sta.ssid));
    if (pwd && *pwd) {
        strlcpy((char *)cfg.sta.password, pwd, sizeof(cfg.sta.password));
    }
    esp_wifi_set_config(WIFI_IF_STA, &cfg);
    esp_wifi_connect();

    EventBits_t bits = xEventGroupWaitBits(
        s_wifi_event_group,
        WIFI_CONNECTED_BIT | WIFI_FAIL_BIT,
        pdTRUE, pdFALSE,
        pdMS_TO_TICKS(timeout_ms));

    if (bits & WIFI_CONNECTED_BIT) {
        ESP_LOGI(TAG, "Wi-Fi connected");
        return 0;
    }
    ESP_LOGW(TAG, "Wi-Fi connect failed (timeout=%dms)", timeout_ms);
    return -1;
}

static void wifi_disconnect_for_ota(void)
{
    esp_wifi_disconnect();
    vTaskDelay(pdMS_TO_TICKS(500));
}

/* ── Minimal HTTP Client ─────────────────────────────────────── */
static int parse_http_url(const char *url, char *host, size_t host_len,
                          char *port, size_t port_len,
                          char *path, size_t path_len)
{
    const char *prefix = "http://";
    size_t prefix_len = strlen(prefix);
    if (!url || strncmp(url, prefix, prefix_len) != 0) return -1;

    const char *p = url + prefix_len;
    const char *slash = strchr(p, '/');
    const char *host_end = slash ? slash : url + strlen(url);
    const char *colon = memchr(p, ':', host_end - p);

    size_t h_len = (size_t)((colon ? colon : host_end) - p);
    if (h_len == 0 || h_len >= host_len) return -1;
    memcpy(host, p, h_len);
    host[h_len] = '\0';

    if (colon) {
        size_t po_len = (size_t)(host_end - colon - 1);
        if (po_len == 0 || po_len >= port_len) return -1;
        memcpy(port, colon + 1, po_len);
        port[po_len] = '\0';
    } else {
        strlcpy(port, "80", port_len);
    }

    const char *path_src = slash ? slash : "/";
    if (strlen(path_src) >= path_len) return -1;
    strlcpy(path, path_src, path_len);
    return 0;
}

static int connect_http_socket(const char *host, const char *port)
{
    struct addrinfo hints = {
        .ai_family = AF_UNSPEC,
        .ai_socktype = SOCK_STREAM,
    };
    struct addrinfo *res = NULL;
    int err = getaddrinfo(host, port, &hints, &res);
    if (err != 0 || !res) {
        ESP_LOGE(TAG, "DNS failed for %s:%s", host, port);
        return -1;
    }

    int fd = -1;
    for (struct addrinfo *ai = res; ai; ai = ai->ai_next) {
        fd = socket(ai->ai_family, ai->ai_socktype, ai->ai_protocol);
        if (fd < 0) continue;

        struct timeval tv = {.tv_sec = 15, .tv_usec = 0};
        setsockopt(fd, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof(tv));
        setsockopt(fd, SOL_SOCKET, SO_SNDTIMEO, &tv, sizeof(tv));

        if (connect(fd, ai->ai_addr, ai->ai_addrlen) == 0) {
            break;
        }
        close(fd);
        fd = -1;
    }
    freeaddrinfo(res);
    return fd;
}

static int send_all(int fd, const char *data, size_t len)
{
    size_t sent = 0;
    while (sent < len) {
        int n = send(fd, data + sent, len - sent, 0);
        if (n <= 0) return -1;
        sent += (size_t)n;
    }
    return 0;
}

static int read_http_header(int fd, char *header, size_t header_len)
{
    if (!header || header_len < 8) return -1;

    size_t n = 0;
    while (n + 1 < header_len) {
        char ch = 0;
        int got = recv(fd, &ch, 1, 0);
        if (got <= 0) return -1;
        header[n++] = ch;
        header[n] = '\0';
        if (n >= 4 && memcmp(header + n - 4, "\r\n\r\n", 4) == 0) {
            return (int)n;
        }
    }
    return -1;
}

static int parse_http_header(const char *header, int *status, int *content_len)
{
    if (!header || !status || !content_len) return -1;
    *status = 0;
    *content_len = 0;

    if (sscanf(header, "HTTP/%*s %d", status) != 1) return -1;

    const char *line = strstr(header, "\r\n");
    while (line) {
        line += 2;
        if (line[0] == '\r' && line[1] == '\n') break;
        if (strncasecmp(line, "Content-Length:", 15) == 0) {
            *content_len = atoi(line + 15);
            break;
        }
        line = strstr(line, "\r\n");
    }
    return 0;
}

/* ── OTA Download ────────────────────────────────────────────── */
static int ota_download_to_main(const char *url)
{
    char host[96] = {0};
    char port[8] = {0};
    char path[192] = {0};
    if (parse_http_url(url, host, sizeof(host), port, sizeof(port), path, sizeof(path)) != 0) {
        ESP_LOGE(TAG, "only local http://host[:port]/path OTA URLs are supported");
        return 0x106;
    }

    ESP_LOGI(TAG, "OTA from: %s", url);

    const esp_partition_t *main = esp_partition_find_first(
        ESP_PARTITION_TYPE_APP, ESP_PARTITION_SUBTYPE_APP_OTA_0, "main");
    if (!main) {
        ESP_LOGE(TAG, "main partition not found");
        return 0x105;
    }

    int fd = connect_http_socket(host, port);
    if (fd < 0) {
        ESP_LOGE(TAG, "connect failed: %s:%s", host, port);
        return 0x101;
    }

    char request[384];
    int req_len = snprintf(request, sizeof(request),
                           "GET %s HTTP/1.1\r\n"
                           "Host: %s:%s\r\n"
                           "User-Agent: Band-0-Updater/1.0\r\n"
                           "Connection: close\r\n\r\n",
                           path, host, port);
    if (req_len <= 0 || req_len >= (int)sizeof(request) ||
        send_all(fd, request, (size_t)req_len) != 0) {
        ESP_LOGE(TAG, "send request failed");
        close(fd);
        return ESP_FAIL;
    }

    char header[768];
    if (read_http_header(fd, header, sizeof(header)) < 0) {
        ESP_LOGE(TAG, "read header failed");
        close(fd);
        return ESP_FAIL;
    }

    int status_code = 0;
    int total = 0;
    if (parse_http_header(header, &status_code, &total) != 0) {
        ESP_LOGE(TAG, "bad HTTP header");
        close(fd);
        return 0x102;
    }
    if (status_code < 200 || status_code >= 300) {
        ESP_LOGE(TAG, "http status: %d", status_code);
        close(fd);
        return 0x102;
    }
    if (total > 0 && (uint32_t)total > main->size) {
        ESP_LOGE(TAG, "image too large: %d > %lu", total, (unsigned long)main->size);
        close(fd);
        return 0x107;
    }

    ESP_LOGI(TAG, "image size: %d bytes", total);
    updater_draw_progress(0, total, "downloading");

    esp_ota_handle_t ota = 0;
    esp_err_t err = esp_ota_begin(main, total > 0 ? (size_t)total : OTA_WITH_SEQUENTIAL_WRITES, &ota);
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "esp_ota_begin: %s", esp_err_to_name(err));
        close(fd);
        return err;
    }

    char *buf = malloc(4096);
    if (!buf) {
        ESP_LOGE(TAG, "no OTA buffer");
        esp_ota_abort(ota);
        close(fd);
        return ESP_ERR_NO_MEM;
    }

    int written = 0;
    int last_pct = -1;
    int last_screen_bucket = -1;
    int empty_reads = 0;
    while (true) {
        int read = recv(fd, buf, 4096, 0);
        if (read < 0) {
            if (++empty_reads > 10) {
                ESP_LOGE(TAG, "http read timeout");
                err = ESP_ERR_TIMEOUT;
                break;
            }
            vTaskDelay(pdMS_TO_TICKS(100));
            continue;
        }
        if (read == 0) {
            err = ESP_OK;
            break;
        }
        empty_reads = 0;

        err = esp_ota_write(ota, buf, read);
        if (err != ESP_OK) {
            ESP_LOGE(TAG, "esp_ota_write: %s", esp_err_to_name(err));
            break;
        }
        written += read;

        if (total > 0) {
            int pct = written * 100 / total;
            if (pct != last_pct && pct % 10 == 0) {
                ESP_LOGI(TAG, "downloaded %d/%d (%d%%)", written, total, pct);
                last_pct = pct;
            }
            int bucket = pct / 25;
            if (bucket != last_screen_bucket) {
                updater_draw_progress(written, total, "downloading");
                last_screen_bucket = bucket;
            }
        }
        vTaskDelay(pdMS_TO_TICKS(50));
    }

    if (err != ESP_OK) {
        ESP_LOGE(TAG, "OTA download failed: %s", esp_err_to_name(err));
        free(buf);
        esp_ota_abort(ota);
        close(fd);
        return err;
    }

    if (total > 0 && written != total) {
        ESP_LOGE(TAG, "incomplete image: %d/%d", written, total);
        free(buf);
        esp_ota_abort(ota);
        close(fd);
        return 0x108;
    }

    err = esp_ota_end(ota);
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "esp_ota_end: %s", esp_err_to_name(err));
        free(buf);
        close(fd);
        return err;
    }

    free(buf);
    close(fd);
    updater_draw_progress(written, written, "verified");
    ESP_LOGI(TAG, "OTA OK: %d bytes written", written);
    return 0;
}

/* ── NVS Result Recording ────────────────────────────────────── */
static void record_update_result(int attempt_id, int result, const char *reason)
{
    nvs_handle_t nvs;
    if (nvs_open(NVS_OTA_NS, NVS_READWRITE, &nvs) != ESP_OK) return;
    nvs_set_i32(nvs, "result", result);
    nvs_set_i32(nvs, "result_for", attempt_id);
    if (reason) {
        nvs_set_str(nvs, "fail_reason", reason);
    } else {
        nvs_erase_key(nvs, "fail_reason");
    }
    nvs_commit(nvs);
    nvs_close(nvs);
}

/* ── Set Boot Partition ──────────────────────────────────────── */
static void set_boot_partition_main(void)
{
    const esp_partition_t *main = esp_partition_find_first(
        ESP_PARTITION_TYPE_APP, ESP_PARTITION_SUBTYPE_APP_OTA_0, "main");
    if (main) {
        esp_ota_set_boot_partition(main);
        ESP_LOGI(TAG, "boot partition set to main");
    }
}

/* ── Fail and Reboot ─────────────────────────────────────────── */
static void fail_and_reboot(const char *reason)
{
    ESP_LOGE(TAG, "FAIL: %s; rebooting to main", reason);
    updater_draw_message(reason);
    record_update_result(s_current_attempt_id, -1, reason);
    set_boot_partition_main();
    vTaskDelay(pdMS_TO_TICKS(1500));
    esp_restart();
}

/* ── Entry Point ─────────────────────────────────────────────── */
void app_main(void)
{
    ESP_LOGI(TAG, "Band-0 Updater v1.2.5");
    updater_screen_init();
    updater_draw_message("loading request");

    /* Initialize NVS */
    esp_err_t err = nvs_flash_init();
    if (err == ESP_ERR_NVS_NO_FREE_PAGES || err == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        nvs_flash_erase();
        nvs_flash_init();
    }

    /* Initialize Wi-Fi */
    wifi_init_for_ota();

    /* Load OTA request */
    updater_request_t req;
    int load_err = load_updater_request(&req);
    if (load_err != 0 || !req.has_url) {
        fail_and_reboot("no OTA URL");
    }
    s_current_attempt_id = req.attempt_id;

    /* Try up to 3 attempts */
    for (int attempt = 1; attempt <= 3; attempt++) {
        ESP_LOGI(TAG, "attempt %d/3", attempt);

        for (int i = 0; i < (req.wifi_count > 0 ? req.wifi_count : 1); i++) {
            /* If no Wi-Fi profiles, try with empty (open network) */
            const char *ssid = req.wifi[i].has_ssid ? req.wifi[i].ssid : NULL;
            const char *pwd  = req.wifi[i].has_pwd  ? req.wifi[i].pwd  : NULL;

            if (!ssid) continue;

            updater_draw_message("connecting WiFi");
            int w_err = wifi_connect_for_ota(ssid, pwd, 12000);
            if (w_err != 0) {
                wifi_disconnect_for_ota();
                continue;
            }

            updater_draw_message("downloading");
            int ota_err = ota_download_to_main(req.url);
            wifi_disconnect_for_ota();

            if (ota_err == 0) {
                record_update_result(req.attempt_id, 0, NULL);
                set_boot_partition_main();
                updater_draw_message("success reboot");
                vTaskDelay(pdMS_TO_TICKS(1500));
                ESP_LOGI(TAG, "OTA success, restarting...");
                esp_restart();
            } else {
                ESP_LOGW(TAG, "OTA attempt %d failed: %d", attempt, ota_err);
            }
        }

        if (attempt < 3) {
            vTaskDelay(pdMS_TO_TICKS(3000));
        }
    }

    fail_and_reboot("ota failed");
}
