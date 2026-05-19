# Band-0 不确定项与专项探测计划

> 目标：把后续“刷了再看”的风险前移。每个不确定项都要有当前证据、风险等级、探测方法、通过标准和回退方案。日常迭代前先看这张表，尽量把固件成功率提上去。

## 0. 总原则

- 先探测，不急着改大功能。
- 每次只验证一个变量，避免多个未知项叠加。
- 能走 HTTP/ADV 的，不先走 UART。
- 能用只读状态验证的，不先写 Flash。
- 每次 OTA 前确认 ADV 暂存固件大小和 SHA。
- 每次刷后必须验收：版本、模式、显示、Wi-Fi、HTTP、用量状态、OTA 状态。
- UART 保留为救援路径，不作为日常迭代路径。

## 1. 当前已知稳定基线

| 项 | 当前结论 |
|---|---|
| MCU | ESP8684 / ESP32-C2，ROM 日志确认 `Features: WiFi, BLE` |
| 当前实机固件 | `1.2.5-rebuilt-baseline10` |
| 当前本地最新构建 | `1.2.5-rebuilt-baseline10`，含 Usage、HTTP diagnostics、手动 BLE GATT、修复后的 updater/recovery |
| CH343 UART | `/dev/cu.usbmodem5B7B0549671` 当前可见 |
| ADV USB | `/dev/cu.usbmodem12201` 已验证可上传固件和触发 OTA |
| EPD | JD79650 兼容 200x200 BW，baseline10 已实机显示 |
| Wi-Fi | Band-0 可连 `ADV 2.4G`，常见 IP `192.168.4.2` |
| Claude Usage | 可通过 ADV/Wi-Fi 推送，断电后可从 NVS 恢复缓存 |
| 网络 OTA | baseline10 已通过 ADV 真实 OTA，`attempt_id=12` 成功回 main |

## 2. 不确定项总表

| 优先级 | 不确定项 | 风险 | 当前证据 | 下一步探测 |
|---:|---|---|---|---|
| P0 | `baseline10` OTA 状态清理和 updater/recovery 是否实机有效 | 已关闭 | 真实网络 OTA 成功，`ota.success=true`、`health=ok` | 回归项：每次版本升级后查 `/api/status` |
| P0 | ADV USB 上传大固件稳定性 | 已缓解 | 128 字节块已完整上传 baseline10；256/1024 会卡在 `fw_chunk` | 继续固定 chunk=128 |
| P0 | 网络 OTA 后是否能稳定回 main | 已关闭 | baseline10 网络 OTA 成功并连续轮询 6 次 HTTP 正常 | 作为每次发布门禁保留 |
| P0 | UART 救援脚本化是否足够可靠 | 中 | 手工 115200 成功，460800 掉线过 | 封装脚本，重复 probe chip + dry-run + flash |
| P1 | BLE GATT 电脑直连 | 中 | `/api/ble/start` 可启动 BLE advertising，但 heap 降到约 11 KB | 后续只验证短会话写 payload，不让 BLE 常驻 |
| P1 | BLE HID 翻页器 | 中 | 原固件和代码有框架，当前发送 report 是 stub | 先实现一键 PageDown，Mac 配对验证 |
| P1 | 电池/充电状态 | 中 | 反编译有 `BAT:%d%%`、`BAT:CHG`，硬件路径未完全确认 | 查芯片丝印/ADC/充电 IC，做只读状态页 |
| P1 | 电源/复位/EN 点 | 高 | BOOT 可用，EN/RESET 未确认 | 拆机图/万用表/示波器确认，不在未知点强拉 |
| P1 | EPD 局刷/全刷边界 | 中 | 全刷可用，首帧残影靠延迟重绘缓解 | 做显示诊断页，测试冷启动、热重启、连续刷新 |
| P1 | NVS schema 与 updater 结果语义 | 中 | main 能读写 URL，updater 清理行为不完全受控 | 枚举 OTA NVS key，记录每次升级前后差异 |
| P2 | 壁纸/图像渲染极限 | 低中 | Hello World/本地渲染已有基础 | 测试最大 payload、LZ4、2bpp 边界 |
| P2 | Wi-Fi 弱信号/重连边界 | 中 | 首次连接有时先失败再成功 | 做 10 次重启统计，记录拿 IP 耗时和失败率 |
| P2 | 内存/heap 长时间稳定性 | 中 | 基本运行 OK，BLE + Wi-Fi + EPD 叠加未测 | 增加 `/api/status` heap 字段，跑 1 小时 |
| P2 | 官方云完全脱离程度 | 中 | 本地桥已可用，但原端点映射仍可补证据 | 抓 DNS/HTTP，确认无官方域名请求 |

## 3. P0 探测：`baseline1` OTA 状态清理

### 不确定点

`baseline1` 增加了：

- `armed_attempt`
- main boot 后清理 OTA URL
- 清掉旧 `fail_reason`
- 写入 `result=0`、`result_for=<attempt>`

但它还没有最终部署到实机，必须验证。

### 当前证据

本地构建：

```text
version: 1.2.5-rebuilt-baseline1
main size: 0x100650
main sha256: af10121f6fc55e2f22ef2fd45370c7ac167140d795a287ce2cc9ed00b63cbafc
updater size: 0x98770
updater sha256: e865ae5cb3b8f022f9715e4a7b5e4b1984b154bcf9c59ced3693aa88e42a8c7e
```

### 探测步骤

ADV 重新枚举后：

```bash
python3 tools/adv_bridge.py ports
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX status
```

上传固件：

```bash
python3 tools/adv_bridge.py \
  --port /dev/cu.usbmodemXXXX \
  upload sdk/build/Quote_0_ESP8684_IDF.bin \
  --chunk-size 128
```

确认 ADV 暂存：

```bash
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX status
```

通过标准：

```text
firmware_size = 1050192
firmware_sha256_expected = af10121f6fc55e2f22ef2fd45370c7ac167140d795a287ce2cc9ed00b63cbafc
upload_active = false
```

触发 OTA：

```bash
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX ota-start
```

回 main 后检查：

```bash
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX band-status
```

通过标准：

```text
firmware = 1.2.5-rebuilt-baseline1
mode = 6
ota.url = null
ota.fail_reason = null
ota.success = true
ota.result_for = 当前 attempt
usage.has_data = true
```

### 回退方案

- 如果 OTA 后设备不回 HTTP：保留 UART，进 ROM 下载模式，115200 写回当前 `sdk/build/Quote_0_ESP8684_IDF.bin` 或已知 `usage3` 产物。
- 如果只是 OTA 状态没清干净但设备可用：不用 UART，继续在 main app 修 cleanup。

## 4. P0 探测：ADV USB 上传稳定性

### 不确定点

历史上 `usage4` 上传到 80% 时出现：

```text
serial.serialutil.SerialException: read failed: [Errno 6] Device not configured
```

后续又确认 PlatformIO 默认 stub 上传 ADV 会失败，而 `adv_bridge.py upload` 使用 256/1024 字节块会卡在第一个 `fw_chunk`。当前稳定组合是：ADV 用 esptool `--no-stub` 烧录，Band-0 固件上传固定 128 字节块。

### 探测目标

确认掉线是偶发物理问题，还是 ADV 固件/上传协议在大文件时不稳定。

### 探测步骤

1. 重新插 ADV USB。
2. 记录端口号。
3. 先查询状态 10 次：

```bash
for i in $(seq 1 10); do
  python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX status >/tmp/adv_status_$i.json || break
  sleep 1
done
```

4. 上传同一个固件，固定使用 128 字节块：

```text
128
```

5. 每次失败后记录：

- 失败百分比。
- macOS 是否还能看到端口。
- ADV 是否自动重启。
- `/dev/cu.usbmodem*` 是否变号。

### 通过标准

- 连续两次上传完整 1050192 字节。
- ADV 状态返回 SHA 匹配。
- 上传期间端口不消失。

### 后续修复方向

- `adv_bridge.py upload` 已限制最大安全 chunk=128。
- ADV 端可继续优化半成品清理和更大 chunk 接收。
- Mac 端上传前后都查询 SHA。
- 上传失败时禁止触发 OTA。

## 5. P0 探测：UART 救援脚本化

### 不确定点

手工 UART 救援已经成功，但步骤多，容易接错或输错地址。

### 探测目标

把“能救”变成“稳定可重复救”。

### 探测内容

脚本应检查：

- CH343 端口存在。
- esptool 能识别 ESP32-C2。
- 固件小于 main 分区。
- 写入 offset 固定为完整底座包：`0x0`、`0x8000`、`0xd000`、`0x10000`、`0x150000`。
- 默认 baud 为 115200。
- 写完自动抓启动日志。

建议脚本：

```text
tools/flash_baseline1.py
```

通过标准：

- 不接 BOOT 时脚本只等待，不误写。
- 接 BOOT 后能识别芯片。
- 写入后自动提示移除 BOOT 并抓日志。
- 日志里看到 `Version:`、`display ready`、`HTTP debug API started`。

## 6. P1 探测：BLE GATT 电脑直连

### 不确定点

硬件有 BLE，baseline1 已加入最小 Usage GATT 服务，但还需要实机验证 macOS 扫描、连接、写入和状态读取。

当前代码情况：

- `sdkconfig` 已启用 NimBLE。
- `app_main.c` 默认初始化 `ble_usage`。
- 广播名：`Band-0 Usage`。
- 已注册 `cardputer-claude-usage` 兼容 UUID。
- 已支持 usage JSON 写入、status read/notify。
- 已支持 `cmd=status`、`cmd=usage`、`cmd=safe`、`cmd=redraw`、`cmd=reboot`。

### 探测目标

验证最小 BLE GATT，不做 OTA、不做 HID：

- 设备广播 `Band-0 Usage`。
- Mac 能扫描到。
- Mac 能连接。
- Mac 写入一条 usage JSON。
- Band-0 更新屏幕和 `/api/status`。

### 建议 UUID

兼容源项目：

```text
service: cafe1234-0000-1000-8000-00805f9b34fb
write:   cafe5678-0000-1000-8000-00805f9b34fb
notify:  cafe9999-0000-1000-8000-00805f9b34fb
```

### Mac 探测方式

优先 Python `bleak`：

```bash
python3 -m pip install bleak
python3 tools/ble_usage_probe.py scan
python3 tools/ble_usage_probe.py push --demo
```

也可用 Chrome Web Bluetooth 页面测试。

### 通过标准

- Mac 扫描能看到 `Band-0 Usage`。
- 写入 compact JSON 后 Band-0 返回 notify 或 HTTP 状态更新。
- 断开后能重新 advertising。
- Wi-Fi 和 BLE 同时开时不崩溃。

### 风险

- ESP32-C2 RAM 紧，BLE + Wi-Fi + HTTP + EPD 同时运行可能暴露 heap 问题。
- 需要先增加 heap 状态输出。

## 7. P1 探测：BLE HID 翻页器

### 不确定点

原固件有 BLE HID 翻页器，当前重建固件有 UI 和框架，但真正 HID input report 未实现。

### 探测目标

先只实现一个最小键：

- 下键短按发送 PageDown。
- 上键短按发送 PageUp。
- Mac 蓝牙里显示为键盘/遥控器。

### 通过标准

- macOS 蓝牙设置可发现并连接。
- Keynote/浏览器/文本框能收到按键。
- 断开后设备自动重新 advertising。

### 回退

HID 不影响 Usage App 主线。若 HID 占用 BLE GATT 复杂度过高，先保留 GATT，HID 后置。

## 8. P1 探测：电池和电源管理

### 不确定点

反编译看到：

```text
BAT: %d%%
BAT: CHG
Battery too low
```

但当前还没有完全确认：

- 电池计量芯片型号。
- 充电 IC 型号。
- 充电状态 GPIO 或 ADC。
- 电量百分比算法。
- 电池拔掉但屏幕不变时，主控到底有没有断电。

### 探测方法

优先硬件观察：

- 拍清楚电池接口附近芯片丝印。
- 拍清楚 USB-C / 充电灯附近芯片丝印。
- 有万用表后测电池电压、充电状态脚。

固件侧：

- 搜原固件电池相关字符串 xref。
- 在自定义固件中加只读 `/api/power`。
- 不先控制电源，只读 ADC/GPIO。

### 通过标准

- 能区分 USB 供电、充电中、电池供电。
- 能给出稳定百分比或至少电压。
- 低电保护不会误触发。

## 9. P1 探测：复位/EN 点和自动进下载模式

### 不确定点

BOOT/GPIO9 已经可用，但 EN/RESET 点还没确认。

### 为什么重要

如果能找到 EN/RESET，就可以让 CH343 的 DTR/RTS 自动控制：

- 自动拉 BOOT。
- 自动复位。
- esptool 不再需要手动上电。

### 探测方式

需要硬件工具：

- 万用表 continuity。
- 拆机高清图。
- 必要时示波器。

禁止：

- 在未知焊盘上强拉 GND 或 3V3。
- 直接把 DTR/RTS 接未知点。

### 通过标准

- 明确 EN/RESET 测点。
- 低电平复位行为可重复。
- 不影响正常启动。

## 10. P1 探测：EPD 边界行为

### 已知

- 全刷可用。
- 断电保留最后画面。
- 首帧可能只显示残字/边框，`usage3` 用 8 秒延迟重绘缓解。

### 仍不确定

- 局刷是否可用。
- 连续刷新最短安全间隔。
- 深色/大面积刷新是否需要特殊 LUT。
- VCOM OTP 读取是否影响对比度。

### 探测方法

做显示诊断模式：

1. 白屏。
2. 黑屏。
3. 棋盘格。
4. 边框 + 字号测试。
5. Usage UI 多次刷新。
6. 冷启动后 1 秒、8 秒、20 秒对比。

### 通过标准

- 每种图案能完整显示。
- 连续 10 次刷新无 busy 卡死。
- 冷启动不再只剩边框。

## 11. P1 探测：NVS 与 updater 结果语义

### 不确定点

原 updater 读写的 NVS key 和我们 main app 的状态解释还没完全闭环。

已知 key：

```text
url
password
ssid_1 / pwd_1
ssid_2 / pwd_2
sta.ssid / sta.pswd
attempt_id
result
result_for
fail_reason
armed_attempt
```

### 探测方法

增加只读 dump：

```text
GET /api/ota/status
GET /api/debug/nvs/ota
```

每次 OTA 前后记录：

- 触发前。
- 写入 URL 后。
- updater 下载时。
- 回到 main 后。

### 通过标准

- 成功 OTA 后 URL 清空。
- 成功 OTA 后 result 标记不误报。
- 失败 OTA 后 fail_reason 有明确原因。
- 不再长期残留历史 `no_url`。

## 12. P2 探测：Wi-Fi 重连稳定性

### 现象

`usage3` 启动时有时第一次关联失败，第二次成功：

```text
Wi-Fi disconnect, retry 1/3
Wi-Fi disconnect, retry 2/3
Got IP: 192.168.4.2
Connected to Wi-Fi
```

### 探测方法

做 10 次重启统计：

- 上电到 `Got IP` 时间。
- 失败次数。
- 是否进入 SoftAP fallback。
- RSSI。

### 通过标准

- 10 次均能在 20 秒内拿 IP。
- 不误入 `Band-0 Setup`。
- HTTP 状态可达。

## 13. P2 探测：内存与长时间稳定性

### 不确定点

BLE + Wi-Fi + HTTP + EPD + cJSON 同时运行后，heap 是否够。

### 探测方法

在 `/api/status` 增加：

```text
free_heap
min_free_heap
largest_free_block
task_watermarks
```

跑：

- 1 小时 idle。
- 每分钟 sync 一次 usage。
- 每 10 分钟刷新屏幕。
- 同时 BLE advertising。

### 通过标准

- min heap 不持续下降。
- 无 panic。
- HTTP 不超时。

## 14. 建议探测顺序

### 第一批：必须先做

1. ADV USB 重新枚举和上传稳定性。
2. `baseline1` 网络 OTA 或一次性线刷部署。
3. OTA 状态清理验证。
4. 线刷救援脚本化。

原因：这些决定后续迭代安全性。

### 第二批：功能扩展前做

1. BLE GATT 最小 echo / usage write。
2. BLE status/read 和安全命令验证。
3. Wi-Fi 10 次重启统计。
4. EPD 显示诊断页。

原因：这些决定 Claude Usage 直连和 UI 打磨成功率。

### 第三批：课堂加分和完整性

1. BLE HID 翻页器。
2. 电池/充电状态。
3. 官方云请求完全断言。
4. recovery app / updater 替换可行性评估。

## 15. 每次刷固件前检查清单

```text
[ ] 当前设备 HTTP 可达或 UART 可达
[ ] 已确认当前设备运行版本
[ ] 新固件已 build 成功
[ ] 新固件大小小于 main 分区
[ ] SHA256 已记录
[ ] ADV 已暂存同一 SHA 的固件
[ ] 没有把 main app 指向 updater 分区
[ ] OTA URL 是 http://192.168.4.1/fw.bin
[ ] UART 救援线可用或至少 CH343 可见
[ ] 用户知道本次是否需要断电/不要断电
```

## 16. 每次刷固件后验收清单

```text
[ ] /api/status 返回 HTTP 200
[ ] firmware 是目标版本
[ ] mode = 6 或可切到 usage
[ ] display ready / frame done
[ ] Wi-Fi IP 是 192.168.4.2
[ ] usage.has_data 按预期
[ ] cached/live 状态按预期
[ ] ota.url 不残留，除非正在升级
[ ] ota.fail_reason 不残留历史错误
[ ] ADV firmware_size/SHA 仍可信
```

## 17. 当前马上能做和不能做

### 现在能做

- 用 CH343 UART 抓 Band-0 日志。
- 继续改代码、编译固件。
- 执行 `tools/flash_baseline1.py --dry-run` 检查完整底座包。
- 用 ADV 上传/暂存 baseline1 固件。
- 更新文档和验收脚本。

### 现在不能完整做

- 在 Band-0 没连上 `ADV 2.4G` 且没进入 `Band-0 Setup` 时，不能直接走网络 OTA。
- 在 baseline1 没部署前，不能验证 BLE GATT。

原因：ADV 已恢复并暂存 baseline1，但当前 ADV 状态显示 `stations=0`，还没看到 Band-0 连上 ADV AP。

## 18. 判断标准

后续如果再出现问题，按这个优先级判断：

1. HTTP 还活：优先走 ADV/HTTP 修。
2. HTTP 不活但 UART 有日志：看 panic/reboot 原因。
3. UART 无 app 日志但 ROM 可进：UART 115200 写 main。
4. ROM 都进不去：再考虑接线、电源、BOOT/EN 硬件问题。

不要仅凭电子纸画面判断，因为电子纸会保留旧画面。
