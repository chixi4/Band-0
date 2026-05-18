#pragma once

#ifdef __cplusplus
extern "C" {
#endif

void display_init(void);
void display_update_status(void);

void display_set_ap_ssid(const char *ssid);
void display_set_sta_count(int count);
void display_set_mac_ip(const char *ip);
void display_set_band0_status(const char *status);
void display_set_mac_status(const char *status);
void display_set_info_line(const char *line);

#ifdef __cplusplus
}
#endif
