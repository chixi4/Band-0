# Band-0 Baseline7 Validation Log

Date: 2026-05-20

## Current Stable State

Band-0 is now running the local control baseline:

```text
firmware = 1.2.5-rebuilt-baseline7
mode = 6 / Claude Usage
Wi-Fi = ADV 2.4G
Band-0 IP = 192.168.4.2
health = ok
display_ready = true
BLE auto_start = false
heap free = about 40 KB
OTA attempt = 9 success
```

ADV has served the baseline7 OTA image once:

```text
fw_download_count = 1
fw_last_served_size = 889680
firmware_sha256_expected = 9462eceed817aca5e82f78fa4ee4ff19a32ca15553d761fb00204b4098286498
```

## Final Artifacts

| Offset | Artifact | Size | SHA256 |
|---:|---|---:|---|
| `0x000000` | `sdk/build/bootloader/bootloader.bin` | `19552` | `a17b89d94301d193fb3a9761a17e3b04492314d3dab0eaf668a650628e4f4575` |
| `0x008000` | `sdk/build/partition_table/partition-table.bin` | `3072` | `b4c0fe99247d6327905ca404c2dafb5b09712ca68714d8dc0faf8e80049923f1` |
| `0x00d000` | `sdk/build/ota_data_initial.bin` | `8192` | `7d2c7ac4888bfd75cd5f56e8d61f69595121183afc81556c876732fd3782c62f` |
| `0x010000` | `sdk/build/Quote_0_ESP8684_IDF.bin` | `889680` | `9462eceed817aca5e82f78fa4ee4ff19a32ca15553d761fb00204b4098286498` |
| `0x150000` | `sdk/updater/build/Quote_0_Updater.bin` | `624480` | `0d3842b1b87699cf6be938a86459a2ea37554f99d6ae8527071955dda5be3888` |

## What Changed Since Baseline5

- `baseline6` disabled boot/key buzzer output by default and holds GPIO10 low.
- `baseline6` disabled automatic BLE startup. BLE remains available through `POST /api/ble/start`.
- `baseline7` reports BLE policy as `ble.auto_start=false`.
- `baseline7` treats manual BLE-off as healthy, so `/api/status` returns `health=ok`.
- The updater main task stack was increased from `3072` to `8192` bytes.

## Incident: Updater Stack Crash

The first baseline6 network OTA did not return to main. UART showed the device was repeatedly booting the updater partition and crashing:

```text
Project name: Quote_0_Updater
Band-0 Updater v1.2.5
jd79650: JD79650 init OK
Guru Meditation Error: Core 0 panic'ed (Stack protection fault)
Detected in task "main"
```

Address decoding:

```text
0x42007b50 updater_screen_init at sdk/updater/main/epd_screen.c:74
0x4200823a jd79650_display_frame at sdk/components/jd79650/jd79650.c:339
0x42006d12 app_main at sdk/updater/main/updater_main.c:520
```

Root cause: the updater initialized and refreshed the EPD from the ESP-IDF main task with only a 3072-byte stack. EPD refresh plus logging overflowed the stack before Wi-Fi started, so ADV saw `fw_download_count=0` during the failed attempt.

Fix:

```text
CONFIG_ESP_MAIN_TASK_STACK_SIZE=8192
CONFIG_MAIN_TASK_STACK_SIZE=8192
```

After this fix, network OTA to baseline7 succeeded and returned to main.

## Validation Commands

Build main:

```bash
. /Users/yuookie/esp/esp-idf-v5.5.4/export.sh >/tmp/band0_idf_export.log
idf.py -C sdk build
```

Build updater:

```bash
. /Users/yuookie/esp/esp-idf-v5.5.4/export.sh >/tmp/band0_idf_export.log
idf.py -C sdk/updater build
```

Full UART recovery flash:

```bash
python3 tools/flash_baseline1.py --port /dev/cu.usbmodem5B7B0549671 --no-stub
```

Network OTA flow:

```bash
python3 -u tools/adv_bridge.py --port /dev/cu.usbmodem12201 upload sdk/build/Quote_0_ESP8684_IDF.bin --chunk-size 128
python3 tools/adv_bridge.py --port /dev/cu.usbmodem12201 ota-start
python3 tools/adv_bridge.py --port /dev/cu.usbmodem12201 band-status
```

BLE manual test:

```bash
python3 tools/adv_bridge.py --port /dev/cu.usbmodem12201 band-post /api/ble/start --body '{}'
```

Result:

```text
BLE ready = true
advertising = true
heap after BLE = about 11 KB
health = degraded, reason = low_heap
```

Conclusion: BLE GATT works, but it should remain opt-in. For normal development and OTA, keep BLE off and use Wi-Fi/ADV.

## Operational Rule

The current daily workflow is:

```text
Mac -> ADV USB bridge -> ADV 2.4G -> Band-0 HTTP API -> updater OTA
```

UART can be disconnected after validation. Reconnect UART only if both Wi-Fi/HTTP and BLE are unavailable, or if bootloader/partition/updater itself must be changed.
