/*
 * NVS Wi-Fi/OTA configuration recovery from main.bin.
 *
 * True addresses:
 *   0x42007792 save/update config
 *   0x42007a70 clear OTA/Wi-Fi request keys
 *
 * Key evidence:
 *   "ota", "attempt_id", "url", "result", "fail_reason", "result_for"
 *   "ssid_1", "pwd_1", "ssid_2", "pwd_2"
 *   ESP-IDF Wi-Fi storage keys "sta.ssid", "sta.pswd", "sta.authmode"
 */

#include <stdbool.h>
#include <stddef.h>

typedef struct {
    const char *url;
    const char *password;
    const char *ssid[3];
    const char *pwd[3];
} ota_wifi_request_t;

static bool valid_len(const char *s, size_t max_len);

int save_ota_wifi_request_recovered(const ota_wifi_request_t *req)
{
    if (req == NULL || req->url == NULL || req->url[0] == '\0') {
        return 0x102;
    }
    if (!valid_len(req->url, 255)) {
        return 0x104;
    }
    if (req->password != NULL && !valid_len(req->password, 31)) {
        return 0x104;
    }
    for (int i = 0; i < 3; i++) {
        if (req->ssid[i] != NULL && !valid_len(req->ssid[i], 32)) {
            return 0x104;
        }
        if (req->pwd[i] != NULL && !valid_len(req->pwd[i], 64)) {
            return 0x104;
        }
    }

    nvs_handle_t nvs;
    int err = nvs_open("ota", NVS_READWRITE, &nvs);
    if (err != 0) {
        return err;
    }

    int attempt_id = 0;
    nvs_get_i32(nvs, "attempt_id", &attempt_id);
    attempt_id++;

    err = nvs_set_str(nvs, "url", req->url);
    if (err == 0 && req->password != NULL) {
        err = nvs_set_str(nvs, "password", req->password);
    } else if (err == 0) {
        nvs_erase_key(nvs, "password");
    }

    const char *ssid_keys[3] = {"ssid_1", "ssid_2", "sta.ssid"};
    const char *pwd_keys[3] = {"pwd_1", "pwd_2", "sta.pswd"};
    for (int i = 0; err == 0 && i < 3; i++) {
        if (req->ssid[i] == NULL || req->ssid[i][0] == '\0') {
            nvs_erase_key(nvs, ssid_keys[i]);
            nvs_erase_key(nvs, pwd_keys[i]);
            continue;
        }
        err = nvs_set_str(nvs, ssid_keys[i], req->ssid[i]);
        if (err == 0 && req->pwd[i] != NULL) {
            err = nvs_set_str(nvs, pwd_keys[i], req->pwd[i]);
        } else if (err == 0) {
            nvs_erase_key(nvs, pwd_keys[i]);
        }
    }

    if (err == 0) {
        err = nvs_set_i32(nvs, "attempt_id", attempt_id);
    }
    if (err == 0) {
        nvs_erase_key(nvs, "result");
        nvs_erase_key(nvs, "fail_reason");
        err = nvs_commit(nvs);
    }
    nvs_close(nvs);
    return err;
}

int clear_ota_wifi_request_recovered(void)
{
    nvs_handle_t nvs;
    int err = nvs_open("ota", NVS_READWRITE, &nvs);
    if (err != 0) {
        return err;
    }

    const char *keys[] = {
        "result", "result_for", "fail_reason", "url", "password",
        "sta.ssid", "sta.pswd", "ssid_1", "pwd_1", "ssid_2", "pwd_2",
    };
    for (size_t i = 0; i < sizeof(keys) / sizeof(keys[0]); i++) {
        nvs_erase_key(nvs, keys[i]);
    }
    err = nvs_commit(nvs);
    nvs_close(nvs);
    return err;
}

