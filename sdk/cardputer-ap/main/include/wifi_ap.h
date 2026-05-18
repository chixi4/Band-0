#pragma once

#ifdef __cplusplus
extern "C" {
#endif

void wifi_ap_init(void);
void wifi_ap_load_config(void);
void wifi_ap_save_config(void);

const char *wifi_ap_get_ssid(void);
const char *wifi_ap_get_pwd(void);
int         wifi_ap_get_sta_count(void);
const char *wifi_ap_get_mac_ip(void);
void        wifi_ap_set_mac_ip(const char *ip);

#ifdef __cplusplus
}
#endif
