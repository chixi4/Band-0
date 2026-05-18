#pragma once

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Result from the firmware query endpoint.
 */
typedef struct {
    bool   need_update;
    char   version[32];
    char   url[192];
    int    edition;
} firmware_query_result_t;

/**
 * @brief Query the firmware update server.
 *
 * POSTs to the configured endpoint and parses the JSON response.
 *
 * @param out  Pointer to result struct.
 * @return 0 on success (out->need_update tells if update available),
 *         negative on network/parse error.
 */
int cloud_query_firmware_update(firmware_query_result_t *out);

/**
 * @brief Initiate OTA update from a URL.
 *
 * Downloads the firmware image and writes it to the main partition.
 * On success, sets the boot partition and restarts.
 *
 * @param url  Full URL of the firmware binary.
 * @return 0 on success (device will restart), negative on error.
 */
int cloud_start_ota(const char *url);

/**
 * @brief Check if a pending OTA setup request is in NVS.
 *
 * @param out  Populated with request info if found.
 * @return true if a pending request was loaded.
 */
bool cloud_load_pending_request(pending_request_t *out);

#ifdef __cplusplus
}
#endif
