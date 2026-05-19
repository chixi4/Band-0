# Band-0 极简底座操作流程

## 2026-05-20 当前结论

当前稳定底座是 `1.2.5-rebuilt-baseline10`，不是早期文档里的 `baseline1/usage3`。

已实机验证：

- UART 完整线刷成功：bootloader、partition table、otadata、main、updater 均写入并校验。
- 修复 updater 栈溢出后，ADV 网络 OTA 已连续成功，当前为 `attempt_id=12`、`result=0`、`success=true`。
- 默认状态为 Wi-Fi/HTTP/OTA 优先：BLE 不自启，蜂鸣器静音，`/api/status` 为 `health=ok`。
- `/api/logs` 已改成小响应并提高 HTTPD 栈，能通过 ADV 正常返回最近 8 条诊断日志。
- BLE GATT 可以用 `/api/ble/start` 手动启动，但启动后堆内存降到约 9-12 KB，因此 BLE 作为短时备用通道，不作为默认常驻服务。

当前核心产物：

| Offset | Artifact | Size | SHA256 |
|---:|---|---:|---|
| `0x010000` | `sdk/build/Quote_0_ESP8684_IDF.bin` | `889952` | `1f1d9e5c5614aa6e277f724c4d2c783ac9a4dafd461f0a312b6a3509bfc01ca2` |
| `0x150000` | `sdk/updater/build/Quote_0_Updater.bin` | `624480` | `0d3842b1b87699cf6be938a86459a2ea37554f99d6ae8527071955dda5be3888` |

详细事故记录和验收日志见 `docs/BASELINE10_VALIDATION_2026-05-20.md`。

## 目标

把 Band-0 固定到一个极简但可恢复的本地控制底座：

```text
Usage + local control + safe OTA + diagnostics + key recovery + optional BLE
```

目标不是一次塞满所有功能，而是先得到一个之后可以安全迭代的底座。

## 角色分工

### 用户需要做

- 插回 ADV USB。
- 如果最终必须线刷：按提示接 BOOT 到 GND、上电、刷完后移除 BOOT。
- 看屏幕是否显示底座状态或 Usage 页面。
- 验收通过后拔掉 UART 杜邦线。

### 我负责做

- 写代码。
- 编译固件。
- 校验大小和 SHA。
- 上传 ADV。
- 触发网络 OTA。
- 必要时执行 UART 线刷命令。
- 抓日志和 HTTP 状态。
- 判断是否通过验收。

## 阶段 0：当前状态确认

先确认当前环境，不做写入操作。

```bash
find /dev -maxdepth 1 -name 'cu.usbmodem*' 2>/dev/null | sort
python3 tools/adv_bridge.py ports
```

期望：

```text
CH343 UART 可见：/dev/cu.usbmodem5B7B0549671
ADV 串口可见：/dev/cu.usbmodemXXXX
```

如果 ADV 不可见：

- 用户重新插 ADV USB。
- 不碰 Band-0 BOOT。
- 不触发 OTA。

## 阶段 1：实现 baseline1

> 说明：下面阶段保留的是首次底座 bring-up 的执行记录，里面的 `baseline1` 指最早的固定偏移线刷底座。当前日常开发和 OTA 以本文开头的 `baseline10` 状态、产物和 SHA 为准。

在不碰设备的情况下完成。

baseline1 必须包含：

- 默认 Claude Usage App。
- usage payload NVS 缓存。
- `/api/status`
- `/api/health`
- `/api/logs`
- `/api/usage`
- `/api/push`
- `/api/mode`
- `/api/reboot`
- `/api/redraw`
- `/api/ota/url`
- `/api/ota/status`
- `/api/debug/heap`
- OTA cleanup：`armed_attempt`、URL 清理、result 标记。
- BLE GATT 最小服务：写 usage JSON，读/notify status。
- 按键恢复逻辑。

按键逻辑先定为：

| 场景 | 操作 | 行为 |
|---|---|---|
| 开机 5 秒内长按上键 | 上键保持 5 秒 | 进入 Safe Status 页面，不触发 OTA |
| 开机 5 秒内长按下键 | 下键保持 5 秒 | 进入 Usage waiting / Setup hint 页面 |
| 开机 5 秒内上下同时长按 | 同时保持 8 秒 | 清 OTA pending 状态并软重启 |
| 运行中上下同时长按 | 同时保持 10 秒 | 软重启 |
| 运行中上键长按 | 上键长按 | 回 Claude Usage 主界面 |
| 运行中下键长按 | 下键长按 | 强制 redraw |

禁止按键做这些危险动作：

- 不擦全 NVS。
- 不直接触发 OTA。
- 不改 boot partition。
- 不写 Flash。

## 阶段 2：本地构建和静态门禁

构建主固件：

```bash
cd /Users/yuookie/Documents/dev/Band-0/sdk
source /Users/yuookie/esp/esp-idf-v5.5.4/export.sh >/tmp/idf_export.log 2>&1
idf.py build
```

构建 updater：

```bash
cd /Users/yuookie/Documents/dev/Band-0
source /Users/yuookie/esp/esp-idf-v5.5.4/export.sh >/tmp/idf_export.log 2>&1
idf.py -C sdk/updater build
```

记录：

```bash
cd /Users/yuookie/Documents/dev/Band-0
python3 tools/flash_baseline1.py --dry-run
```

通过门槛：

```text
[ ] main 构建成功，小于 main 分区 0x140000
[ ] updater 构建成功，小于 updater 分区 0xa0000
[ ] bootloader/partition/otadata/main/updater SHA256 已记录
[ ] 版本名是 1.2.5-rebuilt-baseline1
```

当前 baseline1 产物：

| Offset | Artifact | Size | SHA256 |
|---:|---|---:|---|
| `0x000000` | `sdk/build/bootloader/bootloader.bin` | `0x04c60` | `a17b89d94301d193fb3a9761a17e3b04492314d3dab0eaf668a650628e4f4575` |
| `0x008000` | `sdk/build/partition_table/partition-table.bin` | `0x00c00` | `b4c0fe99247d6327905ca404c2dafb5b09712ca68714d8dc0faf8e80049923f1` |
| `0x00d000` | `sdk/build/ota_data_initial.bin` | `0x02000` | `7d2c7ac4888bfd75cd5f56e8d61f69595121183afc81556c876732fd3782c62f` |
| `0x010000` | `sdk/build/Quote_0_ESP8684_IDF.bin` | `0x100650` | `af10121f6fc55e2f22ef2fd45370c7ac167140d795a287ce2cc9ed00b63cbafc` |
| `0x150000` | `sdk/updater/build/Quote_0_Updater.bin` | `0x98770` | `e865ae5cb3b8f022f9715e4a7b5e4b1984b154bcf9c59ced3693aa88e42a8c7e` |

## 阶段 3：ADV 链路预检

不碰 Band-0，不触发 OTA，只验证 ADV。

```bash
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX status
```

连续查 3 次：

```bash
for i in 1 2 3; do
  python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX status
  sleep 1
done
```

通过门槛：

```text
[ ] device = adv-bridge
[ ] ssid = ADV 2.4G
[ ] ap_ip = 192.168.4.1
[ ] 没有 serial timeout
[ ] 端口没有消失
```

如果失败：

- 不触发 OTA。
- 先修 ADV USB/上传稳定性。

## 阶段 4：上传 baseline1 到 ADV

上传：

```bash
python3 tools/adv_bridge.py \
  --port /dev/cu.usbmodemXXXX \
  upload sdk/build/Quote_0_ESP8684_IDF.bin \
  --chunk-size 128
```

当前 ADV bridge 的稳定上传块上限按 `128` 字节处理。不要手动调到 `256/1024`，这会卡在 `fw_chunk`。

如果再次出现 `Device not configured` 或 serial timeout：

1. 等待 ADV 重新枚举。
2. 重新查询端口。
3. 用 esptool `--no-stub chip_id --after hard_reset` 复位 ADV。
4. 继续用 `--chunk-size 128` 重新上传。
5. 上传未完整成功前，不允许 OTA。

确认：

```bash
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX status
```

通过门槛：

```text
[ ] firmware_size = baseline1 文件大小
[ ] firmware_sha256_expected = baseline1 SHA
[ ] upload_active = false
[ ] upload_received = upload_expected
```

当前 ADV 已通过验证：

```text
port = /dev/cu.usbmodem12201
firmware_size = 1050192
firmware_sha256_expected = af10121f6fc55e2f22ef2fd45370c7ac167140d795a287ce2cc9ed00b63cbafc
upload_active = false
upload_received = 1050192
upload_expected = 1050192
```

## 阶段 5：优先尝试网络 OTA

只有这些条件满足才做：

```text
[ ] Band-0 当前 HTTP 可达
[ ] Band-0 当前运行 usage3 或更高
[ ] ADV 固件 SHA 正确
[ ] CH343 UART 仍可见，作为兜底
```

先查 Band-0：

```bash
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX band-status
```

触发 OTA：

```bash
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX ota-start
```

等待 60-120 秒，再查：

```bash
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX band-status
```

通过门槛：

```text
[ ] firmware = 1.2.5-rebuilt-baseline1
[ ] mode = 6
[ ] ota.url = null
[ ] ota.success = true 或 health 不报 OTA pending
[ ] usage cache 仍存在或显示 waiting
```

如果通过，跳到阶段 8。

如果失败但 Band-0 HTTP 还活：

- 不线刷。
- 先看 `/api/ota/status`、`/api/logs`。
- 清 OTA pending 或重新上传后再试。

如果 HTTP 不活但 UART ROM 可进，进入阶段 6。

## 阶段 6：最后一次 UART 线刷

只有网络 OTA 不满足条件时才执行。

用户动作：

1. 保持 CH343 GND/RX/TX。
2. BOOT/GPIO9 通过 10K 接 GND。
3. 按提示给 Band-0 上电。
4. 写入期间不动任何线。
5. 看到 `Hash of data verified` 后移除 BOOT 到 GND。
6. 正常断电上电。

我执行：

```bash
cd /Users/yuookie/Documents/dev/Band-0
python3 tools/flash_baseline1.py --port /dev/cu.usbmodem5B7B0549671
```

这个脚本写入固定偏移：

```text
0x000000 bootloader
0x008000 partition table
0x00d000 otadata initial
0x010000 main baseline1
0x150000 updater/recovery app
```

它不擦全片，不写 `nvs`、`phy_init`、`wp`、`nvs_keys`。不要使用 `sdk/updater` 工程提示的 `idf.py flash`，那个命令会把 updater 错写到 `0x10000`。

通过门槛：

```text
[ ] Chip is ESP32-C2
[ ] Writing 100%
[ ] Hash of data verified
```

## 阶段 7：启动日志验收

刷完后，移除 BOOT，正常上电。

抓日志：

```bash
python3 /Users/yuookie/.codex/skills/serial-monitor/scripts/serial_monitor.py \
  --port /dev/cu.usbmodem5B7B0549671 \
  --baud 115200 \
  --wait-reset \
  --duration 45 \
  --timestamp \
  --save logs/band0_baseline1_boot.log
```

通过门槛：

```text
[ ] Version: 1.2.5-rebuilt-baseline1
[ ] boot mode = Claude Usage 或 Safe Status
[ ] HTTP debug API started
[ ] display ready
[ ] no panic
[ ] no abort
[ ] no watchdog loop
```

## 阶段 8：功能验收

### HTTP 状态

```bash
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX band-status
```

通过门槛：

```text
[ ] http_status = 200
[ ] firmware = 1.2.5-rebuilt-baseline1
[ ] mode = 6
[ ] health = ok 或 degraded 但原因明确
```

### Claude Usage 推送

```bash
python3 -u tools/claude_usage_wifi_bridge.py \
  --host 127.0.0.1 \
  --port 8788 \
  --adv-port /dev/cu.usbmodemXXXX
```

另一个命令：

```bash
curl -sS --max-time 25 \
  -X POST http://127.0.0.1:8788/api/sync \
  -H 'Content-Type: application/json' \
  -d '{"force":true}'
```

通过门槛：

```text
[ ] usage.has_data = true
[ ] transport = wifi
[ ] stale = false
[ ] 屏幕显示 Current/Weekly
```

### 断电重启缓存

用户动作：

- 正常断电上电一次。

通过门槛：

```text
[ ] firmware 仍是 baseline1
[ ] mode 仍是 Claude Usage
[ ] usage 从 cache 恢复
[ ] 不回 MBTI 空框
[ ] 不黑屏
```

### BLE GATT

如果 Mac 没装 `bleak`：

```bash
python3 -m pip install bleak
```

扫描：

```bash
python3 tools/ble_usage_probe.py scan
```

推 demo：

```bash
python3 tools/ble_usage_probe.py push --demo
```

通过门槛：

```text
[ ] Mac 能看到 Band-0 Usage
[ ] BLE 能连接
[ ] 写入 demo payload 成功
[ ] /api/status 或屏幕显示 BLE 写入结果
[ ] BLE 写 {"cmd":"status"} 能读/notify 状态
[ ] BLE 写 {"cmd":"usage"} 能回 Usage 页面
[ ] BLE 写 {"cmd":"safe"} 能进入 Safe Status 页面
[ ] BLE 写 {"cmd":"redraw"} 能触发重绘
```

### 按键恢复

只测试安全动作：

```text
[ ] 运行中上键长按：回 Usage
[ ] 运行中下键长按：redraw
[ ] 运行中上下同时长按 10 秒：软重启
```

不在日常验收里测试危险擦除，因为 baseline 不设计危险按键。

## 阶段 9：验收通过后的状态

通过后：

- 用户可以拔掉 UART 线。
- CH343 可以收起来。
- Band-0 保持连 `ADV 2.4G` 或后续用 BLE。
- 日常开发只走网络 OTA。
- Claude Usage 日常数据走 Wi-Fi bridge 或 BLE GATT。

## 日常更新流程

以后每次改 UI 或功能：

```text
build
sha256
ADV upload
ADV status check
ota-start
band-status
usage sync
```

不再拆机接 UART。

## 日常恢复流程

### HTTP 还活

```bash
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX band-status
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX band-post /api/mode --body '{"mode":"usage"}'
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX band-post /api/redraw --body '{}'
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX band-reboot
```

### BLE 还活

- 用 BLE probe 读 status。
- 写 `cmd=status`、`cmd=usage`、`cmd=safe`、`cmd=redraw`。
- 必要时写 `cmd=reboot` 软重启。
- 写 demo usage 确认显示链路。

### HTTP/BLE 都不活

- 再接 UART。
- BOOT 拉低进 ROM。
- 115200 写 baseline1 到 `0x10000`。

## 停止条件

出现以下情况立即停止继续 OTA：

- ADV firmware SHA 不匹配。
- ADV 上传中断。
- Band-0 当前 HTTP 状态不明，且 UART 兜底不可用。
- 固件大小超过 main 分区。
- 构建版本号和预期不一致。
- 用户无法确认设备供电稳定。

## 当前下一步

1. 完成 `baseline1` 重新构建。
2. 检查 ADV USB 当前端口和 bridge 状态。
3. 如果网络 OTA 条件满足，优先网络升级。
4. 如果网络 OTA 条件不满足，再让用户接 BOOT，执行最后一次完整底座线刷。
5. 线刷时我会等待用户完成接线和上电，不默认用户马上在屏幕前。
