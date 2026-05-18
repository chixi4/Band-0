/*
 * Firmware query and cloud OTA recovery from main.bin.
 *
 * True address: 0x4201339a.
 * Ghidra raw file:
 *   reverse/decompiled/main_fresh/functions/ram:4202339a_FUN_ram_4202339a.c
 *
 * Confirmed strings:
 *   https://dot.mindreset.tech/api/authV2/panel/device/firmware/query
 *   Authorization: Bearer 2782772a...
 *   {"status":"%s","series":"%s","model":"%s","edition":%s}
 *   RELEASED, rand, rand_0, needUpdate, os-cdn.mindreset.tech, https://%s%s%s
 */

#include <stdbool.h>

typedef struct {
    bool need_update;
    char version[32];
    char url[192];
    int edition;
} firmware_query_result_t;

int query_firmware_update_recovered(firmware_query_result_t *out)
{
    char response[0x800];
    char body[200];

    if (out == NULL) {
        return 0x102;
    }
    memset(out, 0, sizeof(*out));

    snprintf(body, sizeof(body),
             "{\"status\":\"%s\",\"series\":\"%s\",\"model\":\"%s\",\"edition\":%d}",
             "RELEASED", "rand", "rand_0", 1);

    http_client_t *client = http_client_new(
        "https://dot.mindreset.tech/api/authV2/panel/device/firmware/query",
        10000,
        HTTP_METHOD_POST);
    if (client == NULL) {
        return 0x101;
    }

    http_client_set_header(client, "Content-Type", "application/json");
    http_client_set_header(client, "Authorization",
        "Bearer 2782772a1b8f6fb3065c050631185738de5999729682b44095d38f24d405e0e2");
    http_client_write(client, body, strlen(body));

    int status = http_client_fetch(client);
    if (status < 200 || status >= 300) {
        http_client_free(client);
        return -1;
    }

    int len = http_client_read(client, response, sizeof(response) - 1);
    response[len] = 0;

    json_t *json = json_parse(response);
    if (json == NULL) {
        http_client_free(client);
        return 0x108;
    }

    out->need_update = json_bool(json, "needUpdate");
    json_strcpy(out->version, sizeof(out->version), json, "version");

    /*
     * The original joins the CDN host/path pieces with "https://%s%s%s".
     */
    const char *host = json_string_or(json, "host", "os-cdn.mindreset.tech");
    const char *path = json_string_or(json, "path", "");
    const char *query = json_string_or(json, "query", "");
    snprintf(out->url, sizeof(out->url), "https://%s%s%s", host, path, query);
    out->edition = json_int_or(json, "edition", 0);

    json_free(json);
    http_client_free(client);
    return 0;
}

