/*
 * Recovery/updater app control flow recovered from updater.bin.
 *
 * Main OTA/recovery loop true address: 0x420062da.
 * Raw Ghidra file:
 *   reverse/decompiled/updater/functions/ram:420162da_FUN_ram_420162da.c
 */

#include <stdbool.h>

typedef struct {
    char url[256];
    char password[32];
    int attempt_id;
    bool has_url;
    int wifi_count;
    struct {
        char ssid[33];
        char pwd[65];
        bool has_ssid;
        bool has_pwd;
    } wifi[3];
} updater_request_t;

void updater_main_recovered(void)
{
    updater_request_t req;

    updater_screen_init_or_continue_without_screen();
    updater_log("OTA Update");

    for (;;) {
        if (wifi_stack_init() != 0) {
            fail_and_reboot_to_main("wifi init");
        }

        int err = load_updater_request_recovered(&req);
        if (err == 0x1102 || err != 0 || !req.has_url) {
            fail_and_reboot_to_main("OTA URL");
        }

        for (int attempt = 1; attempt <= 3; attempt++) {
            updater_draw_attempt(attempt, 3);

            for (int i = 0; i < 3; i++) {
                if (!req.wifi[i].has_ssid) {
                    continue;
                }

                updater_log("try Wi-Fi profile");
                err = wifi_connect_for_ota(req.wifi[i].ssid,
                                           req.wifi[i].has_pwd ? req.wifi[i].pwd : NULL,
                                           12000);
                if (err != 0) {
                    wifi_disconnect_for_ota();
                    continue;
                }

                clear_download_progress();
                err = ota_download_to_main_recovered(req.url,
                                                     updater_progress_callback,
                                                     NULL);
                wifi_disconnect_for_ota();

                if (err == 0) {
                    record_update_result(req.attempt_id, 0, NULL);
                    set_boot_partition_main_recovered();
                    delay_ms(1500);
                    esp_restart();
                }
            }

            if (attempt < 3) {
                updater_draw_retry(attempt + 1, 3);
                delay_ms(3000);
            }
        }

        fail_and_reboot_to_main("main_corrupt; reflash via USB");
    }
}

