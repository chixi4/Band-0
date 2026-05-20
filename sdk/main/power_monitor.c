/**
 * Battery monitor recovered from the stock 1.2.6 firmware path.
 *
 * The original initializes ADC1 channel 2 (ESP32-C2 GPIO2), samples it 16
 * times, doubles the calibrated millivolts, then maps cell voltage to percent.
 */

#include <stdbool.h>
#include <stddef.h>
#include "esp_adc/adc_cali.h"
#include "esp_adc/adc_cali_scheme.h"
#include "esp_adc/adc_oneshot.h"
#include "esp_err.h"
#include "esp_log.h"
#include "esp_timer.h"
#include "power_monitor.h"

static const char *TAG = "power";

#define BATTERY_ADC_CHANNEL ADC_CHANNEL_2
#define BATTERY_ADC_ATTEN   ADC_ATTEN_DB_12
#define BATTERY_CACHE_MS    5000

typedef struct {
    int mv;
    int pct;
} battery_curve_point_t;

static const battery_curve_point_t k_stock_curve[] = {
    {4200, 100},
    {4100, 90},
    {4000, 80},
    {3900, 70},
    {3800, 60},
    {3700, 50},
    {3600, 37},
    {3500, 25},
    {3400, 15},
    {3300, 8},
    {3200, 3},
    {3000, 0},
};

static adc_oneshot_unit_handle_t s_adc;
static adc_cali_handle_t s_cali;
static bool s_ready;
static bool s_calibrated;
static int64_t s_last_read_ms;
static int s_adc_mv = -1;
static int s_cell_mv = -1;
static battery_state_t s_cached = {
    .percentage = -1,
    .charging = false,
};

static bool init_calibration(void)
{
    esp_err_t ret = ESP_FAIL;

#if ADC_CALI_SCHEME_CURVE_FITTING_SUPPORTED
    adc_cali_curve_fitting_config_t curve = {
        .unit_id = ADC_UNIT_1,
        .chan = BATTERY_ADC_CHANNEL,
        .atten = BATTERY_ADC_ATTEN,
        .bitwidth = ADC_BITWIDTH_DEFAULT,
    };
    ret = adc_cali_create_scheme_curve_fitting(&curve, &s_cali);
    if (ret == ESP_OK) return true;
#endif

#if ADC_CALI_SCHEME_LINE_FITTING_SUPPORTED
    adc_cali_line_fitting_config_t line = {
        .unit_id = ADC_UNIT_1,
        .atten = BATTERY_ADC_ATTEN,
        .bitwidth = ADC_BITWIDTH_DEFAULT,
    };
    ret = adc_cali_create_scheme_line_fitting(&line, &s_cali);
    if (ret == ESP_OK) return true;
#endif

    ESP_LOGW(TAG, "ADC calibration unavailable: %s", esp_err_to_name(ret));
    return false;
}

void power_monitor_init(void)
{
    adc_oneshot_unit_init_cfg_t unit_cfg = {
        .unit_id = ADC_UNIT_1,
        .ulp_mode = ADC_ULP_MODE_DISABLE,
    };
    esp_err_t err = adc_oneshot_new_unit(&unit_cfg, &s_adc);
    if (err != ESP_OK) {
        ESP_LOGW(TAG, "ADC unit init failed: %s", esp_err_to_name(err));
        return;
    }

    adc_oneshot_chan_cfg_t chan_cfg = {
        .atten = BATTERY_ADC_ATTEN,
        .bitwidth = ADC_BITWIDTH_DEFAULT,
    };
    err = adc_oneshot_config_channel(s_adc, BATTERY_ADC_CHANNEL, &chan_cfg);
    if (err != ESP_OK) {
        ESP_LOGW(TAG, "ADC channel init failed: %s", esp_err_to_name(err));
        return;
    }

    s_calibrated = init_calibration();
    s_ready = true;
    ESP_LOGI(TAG, "battery monitor ready on ADC1 channel 2%s",
             s_calibrated ? " calibrated" : "");
}

static int raw_to_mv(int raw)
{
    int mv = 0;
    if (s_calibrated && adc_cali_raw_to_voltage(s_cali, raw, &mv) == ESP_OK) {
        return mv;
    }

    /* Fallback is intentionally conservative; calibrated readings are expected
       on production ESP8684 parts, but this keeps status usable if eFuse
       calibration is unavailable. */
    return raw * 3300 / 4095;
}

static int percent_from_mv(int cell_mv)
{
    if (cell_mv > k_stock_curve[0].mv) return 100;
    if (cell_mv <= k_stock_curve[sizeof(k_stock_curve) / sizeof(k_stock_curve[0]) - 1].mv) {
        return -1;
    }

    for (size_t i = 1; i < sizeof(k_stock_curve) / sizeof(k_stock_curve[0]); i++) {
        const battery_curve_point_t hi = k_stock_curve[i - 1];
        const battery_curve_point_t lo = k_stock_curve[i];
        if (cell_mv >= lo.mv) {
            int span_mv = hi.mv - lo.mv;
            int span_pct = hi.pct - lo.pct;
            return lo.pct + (span_pct * (cell_mv - lo.mv)) / span_mv;
        }
    }
    return -1;
}

static void read_battery_now(void)
{
    int sum_mv = 0;
    int samples = 0;
    for (int i = 0; i < 16; i++) {
        int raw = 0;
        if (adc_oneshot_read(s_adc, BATTERY_ADC_CHANNEL, &raw) == ESP_OK) {
            sum_mv += raw_to_mv(raw);
            samples++;
        }
    }

    if (samples == 0) {
        s_adc_mv = -1;
        s_cell_mv = -1;
        s_cached.percentage = -1;
        s_cached.charging = false;
        return;
    }

    s_adc_mv = sum_mv / samples;
    s_cell_mv = s_adc_mv * 2;
    s_cached.charging = s_adc_mv < 150;
    s_cached.percentage = s_cached.charging ? -1 : percent_from_mv(s_cell_mv);
}

battery_state_t power_monitor_get_battery(void)
{
    if (!s_ready) {
        return s_cached;
    }

    int64_t now_ms = esp_timer_get_time() / 1000;
    if (s_last_read_ms == 0 || now_ms - s_last_read_ms >= BATTERY_CACHE_MS) {
        read_battery_now();
        s_last_read_ms = now_ms;
    }
    return s_cached;
}

int power_monitor_get_adc_mv(void)
{
    (void)power_monitor_get_battery();
    return s_adc_mv;
}

int power_monitor_get_cell_mv(void)
{
    (void)power_monitor_get_battery();
    return s_cell_mv;
}
