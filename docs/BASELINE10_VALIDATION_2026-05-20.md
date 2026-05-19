# Band-0 Baseline10 Validation Log

Date: 2026-05-20

## Current Stable State

Band-0 is running the local control baseline:

```text
firmware = 1.2.5-rebuilt-baseline10
mode = 6 / Claude Usage
Wi-Fi = ADV 2.4G
Band-0 IP = 192.168.4.2
health = ok
display_ready = true
BLE auto_start = false
heap free = about 38 KB
OTA attempt = 12 success
```

Last validated usage state:

```text
current = 87% used / 13% remaining / reset 59m
weekly = 73% used / 27% remaining / reset 2d 3h
model = claude-opus-4
status = live
transport = wifi
stale = false
```

## Final Artifacts

| Offset | Artifact | Size | SHA256 |
|---:|---|---:|---|
| `0x000000` | `sdk/build/bootloader/bootloader.bin` | `19552` | `a17b89d94301d193fb3a9761a17e3b04492314d3dab0eaf668a650628e4f4575` |
| `0x008000` | `sdk/build/partition_table/partition-table.bin` | `3072` | `b4c0fe99247d6327905ca404c2dafb5b09712ca68714d8dc0faf8e80049923f1` |
| `0x00d000` | `sdk/build/ota_data_initial.bin` | `8192` | `7d2c7ac4888bfd75cd5f56e8d61f69595121183afc81556c876732fd3782c62f` |
| `0x010000` | `sdk/build/Quote_0_ESP8684_IDF.bin` | `889952` | `1f1d9e5c5614aa6e277f724c4d2c783ac9a4dafd461f0a312b6a3509bfc01ca2` |
| `0x150000` | `sdk/updater/build/Quote_0_Updater.bin` | `624480` | `0d3842b1b87699cf6be938a86459a2ea37554f99d6ae8527071955dda5be3888` |

## Changes Since Baseline7

- `baseline8`: Claude Usage screen moved toward the Cardputer UI while staying white-background and square-screen friendly.
- `baseline9`: Usage percentages were promoted to large segmented numerals; Safe Status now shows the real firmware version and heap.
- `baseline10`: `/api/logs` was made safe for the HTTP server task stack.

## Incident: `/api/logs` HTTP Timeout

Symptom:

```text
python3 tools/adv_bridge.py --port /dev/cu.usbmodem12201 band-get /api/logs
error: Band-0 GET failed
```

ADV verbose response:

```text
{"http_status":-11,"body":"read Timeout","error":"Band-0 GET failed"}
```

Root cause: `logs_get_handler()` kept an array of 40 `diag_log_entry_t` structures on the ESP-IDF HTTP server task stack. That consumed about 4.5 KB before cJSON serialization, while the default HTTPD stack is 4 KB.

Fix:

```text
/api/logs returns the latest 8 events by default
HTTPD stack_size = 6144
```

Validated response after the fix:

```text
count = 8
events include:
- boot version 1.2.5-rebuilt-baseline10
- ota finalized attempt=12
- wifi got ip 192.168.4.2
- usage push via wifi
- api redraw requested
```

## Validation Commands

Build main:

```bash
. /Users/yuookie/esp/esp-idf-v5.5.4/export.sh >/tmp/band0_idf_export.log
idf.py -C sdk build
```

Network OTA through ADV:

```bash
python3 -u tools/adv_bridge.py --port /dev/cu.usbmodem12201 install sdk/build/Quote_0_ESP8684_IDF.bin --direct --chunk-size 128
```

Core health checks:

```bash
python3 tools/adv_bridge.py --port /dev/cu.usbmodem12201 band-status
python3 tools/adv_bridge.py --port /dev/cu.usbmodem12201 band-get /api/health
python3 tools/adv_bridge.py --port /dev/cu.usbmodem12201 band-get /api/debug/heap
python3 tools/adv_bridge.py --port /dev/cu.usbmodem12201 band-get /api/logs
```

Usage push:

```bash
python3 tools/adv_bridge.py --port /dev/cu.usbmodem12201 band-post /api/push --body '{"cu":87,"cr":13,"ri":"59m","wu":73,"wr":27,"wi":"2d 3h","m":"claude-opus-4","s":"live","src":"wifi","stale":false,"d":false,"fs":12345}'
```

## BLE Result

Manual BLE start still works:

```text
POST /api/ble/start -> ok=true
BLE ready = true
advertising = true
```

But heap drops sharply:

```text
heap_free after start = about 12 KB
/api/status heap.free = about 9 KB
health = degraded
reason = low_heap
```

Operational rule: keep BLE disabled by default. Use Wi-Fi/ADV for normal control, OTA, and Claude Usage. Use BLE only as a short-lived fallback, then reboot to recover heap.

## Final Operational State

The daily control path is:

```text
Mac -> ADV USB bridge -> ADV 2.4G -> Band-0 HTTP API -> updater OTA
```

UART is no longer required for normal development. Reconnect UART only if Wi-Fi/HTTP fails, the updater fails before Wi-Fi, or fixed-offset recovery flashing is needed.
