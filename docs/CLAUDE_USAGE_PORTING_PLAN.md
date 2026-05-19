# Claude Usage Monitor 迁移可行性

源项目：<https://github.com/chixi4/cardputer-claude-usage>

## 1. 结论

可行，但不是把 Cardputer ADV 固件直接搬过来。当前最终目标调整为：**尽量保留 Band-0 原有答案之书、签语、功德、BLE 翻页器、时钟、MBTI、设置等功能，在主菜单中新增一个 Claude Usage App**，用于查看当前 Claude 用量和周用量余额。

源项目目标板是 ESP32-S3 + M5Cardputer/Cardputer ADV + 240x135 彩色 LCD + Arduino/M5Cardputer 库；本设备是 ESP8684/ESP32-C2 + 200x200 黑白电子纸 + ESP-IDF 固件。能复用的是协议、数据结构、仪表盘逻辑和 UI 设计语言；不能直接复用的是显示驱动、键盘输入、电源/电池 API、Arduino BLE 封装和 PlatformIO 目标板配置。

## 2. 可复用部分

| 源项目模块 | 可复用程度 | 迁移方式 |
|---|---:|---|
| `bridge/src/payload.js` | 高 | 继续输出紧凑 JSON：`cu/cr/ri/wu/wr/wi/m/s/err/fs` |
| `bridge/src/server.js` | 高 | 保留 `/api/usage`、`/api/device-payload`、认证诊断 |
| `bridge/public/index.html` | 中高 | 保留 Web Bluetooth 推送；新增 Wi-Fi 推送和设备状态页 |
| BLE UUID | 高 | 保持 `cafe1234...` service 和 `cafe5678...` write characteristic |
| UI 信息架构 | 中 | Current/Weekly 两个进度、状态/footer、电池/连接状态 |
| `tools/adv_control.py` | 低 | 串口控制不适用于 USB-C 无数据的这块板，只能作为命令设计参考 |

## 3. 必须重写部分

| 模块 | 原项目 | 本设备实现 |
|---|---|---|
| 显示 | `M5.Display` 彩色 LCD 即时刷新 | JD79650 200x200 BW EPD，低频刷新，黑白布局 |
| 输入 | Cardputer 键盘 | GPIO8 上键、GPIO1 下键，两键短/长按 |
| BLE | Arduino `BLEDevice` | ESP-IDF NimBLE/Bluedroid GATT server |
| Wi-Fi 调试 | 原项目没有设备 Wi-Fi 数据通道 | 新增 SoftAP/STA HTTP API |
| OTA | PlatformIO USB 刷写 | 复用原 updater：写 NVS `ota/url`，切 boot partition 到 `updater` |
| 电池 | `M5.Power.getBatteryLevel()` | 需要继续逆向原固件电池路径；第一版可显示 unknown |

## 4. 自定义固件建议架构

自定义 OTA app 跑在 `main` 分区，保留原 `updater` 分区不动。

```text
Mac bridge / browser dashboard
  ├─ Web Bluetooth -> device BLE GATT write: compact JSON line
  └─ HTTP -> device SoftAP/STA: status/config/OTA/debug

ESP8684 custom main app
  ├─ EPD BSP: GPIO3/4/5/6/7, JD79650 init + full refresh
  ├─ Key BSP: GPIO8 back, GPIO1 OK
  ├─ BLE GATT: Claude-Usage service/char, receive JSON line
  ├─ HTTP server: /api/status /api/push /api/config /api/ota/url /api/logs
  ├─ NVS: last payload, Wi-Fi config, OTA request
  └─ OTA trigger: write NVS request, boot updater, reboot
```

## 5. 最小可交付版本

第一版不再做“纯 Claude 单功能固件”，而是以现有 `sdk/main` 重建工程为基础加一个 App。这样课堂展示时可以同时证明两件事：反编译已经还原出原功能结构，并且我们能在保留原功能的基础上扩展新功能。

| 优先级 | 功能 | 说明 |
|---:|---|---|
| P0 | 显示 Claude usage | 200x200 黑白：Current、Weekly、状态行、更新时间 |
| P0 | 保留原主菜单功能 | 新增 `APP_MODE_CLAUDE_USAGE`，不替换答案/签语/功德/翻页器/时钟/MBTI/设置 |
| P0 | BLE 接收源项目 payload | 保持源项目 UUID，现有浏览器页面可最小改动推送 |
| P0 | SoftAP 调试页 | 浏览器打开 `192.168.50.1` 查看 status/logs；`192.168.4.1` 保留给 ADV MITM AP |
| P0 | OTA by URL | HTTP API 写入 updater 所需 NVS 字段，然后 reboot |
| P1 | Wi-Fi STA 模式 | 让设备进局域网，Mac dashboard 直连设备 IP |
| P1 | BLE notify/debug | 新增 notify characteristic 回传状态 |
| P2 | 电池百分比 | 继续逆向原电池算法后补 |
| P2 | 更细的原功能还原 | 把原答案库、签语库、字体、电池算法逐步替换掉当前重建桩实现 |

## 6. UI 迁移建议

原项目是 240x135 横屏彩色 LCD，不能照搬色彩、动画和横向密度。Band-0 是 200x200 正方形黑白电子纸，Claude Usage App 采用上下堆叠的信息架构：

```text
┌────────────────────┐
│ CLAUDE       Usage │
│────────────────────│
│ Current        42% │
│ ███████░░░░░░░░░░ │
│ reset 2h 10m       │
│                    │
│ Weekly         68% │
│ ██████████░░░░░░░ │
│ reset 3d 4h        │
│────────────────────│
│ live  bridge       │
└────────────────────┘
```

刷新策略：

- 收到新 payload 才全刷。
- 状态变更、错误、OTA 进度可全刷。
- 不做 5-15 秒 footer 动画，因为电子纸频繁刷新不合适。
- 状态和错误行必须裁剪到 200px 内，宁可短一点也不能溢出屏幕。

当前代码落点：

- `sdk/main/include/claude_usage.h`
- `sdk/main/claude_usage.c`
- `sdk/main/debug_server.c`
- `sdk/main/ui_render.c` 中的 `ui_draw_claude_usage()`
- `sdk/main/include/app_config.h` 中的 `APP_MODE_CLAUDE_USAGE`
- `tools/claude_usage_wifi_bridge.py`：复用原项目 `/api/device-payload`，经 ADV USB/Wi-Fi 推送到 Band-0。

当前构建状态：

- ESP-IDF v5.5.4 已可完整编译 `sdk/` 工程。
- 主产物：`sdk/build/Quote_0_ESP8684_IDF.bin`，版本 `1.2.5-rebuilt-usage4`，大小 `826736` 字节，SHA256 `4cd654b748ca3f1b3c628e3a9f6f83c0f8a2258e1f725adf028050c4e7e61352`。
- 2026-05-19 实机 UART 验证：当前主固件可启动到 `All subsystems initialized`，HTTP server、按键任务、EPD 初始化和 `Band-0 Setup` fallback AP 均正常，无 `Guru Meditation`。
- 当前 fallback AP：SSID `Band-0 Setup`，设备 IP `192.168.50.1`。这个网段刻意避开 Cardputer ADV MITM AP 的 `192.168.4.1/24`。
- `main` 分区大小 0x140000，当前产物可放入；`updater` 分区只有 0xA0000，当前产物放不下。
- 因此课堂演示中的 MITM OTA 必须确认原 updater 下载后写入的是 `main` 槽，而不是把完整 app 当成 updater 自身更新。
- 自定义主固件已禁用自动云端固件查询，避免误把完整 main app 直接 OTA 到小的 `updater` app 槽。
- 电子纸 Claude Usage UI 已从简单占位升级为方屏版：顶部 Claude/Usage header、WAIT/LIVE/STALE/DEMO/ERROR badge、Current/Weekly 双额度块、used/remaining/reset 文本、底部状态行。
- payload 解析已兼容原项目紧凑对象、`{"payload":{...}}` 包装对象、`{"line":"...json\n"}` 包装字符串、数字字符串、布尔数字/字符串，以及 `cmd=wait/clear`。
- `usage2` 已修复 Wi-Fi STA 初始化 race：`WIFI_EVENT_STA_START` 不再提前 `esp_wifi_connect()`，改为 `esp_wifi_set_config()` 成功后显式连接。
- `usage3` 已修复 OTA URL 被主循环提前清掉的问题：`POST /api/ota/url` 写入的 URL 会保留到 updater 读取，避免 `no URL returning to main`。
- `usage3` 已修复重启后 UI 退回 MBTI/空框的问题：启动时固定进入 Claude Usage App，禁用演示期自动清屏，最近一次 payload 写入 NVS，重启后先以 `cache/stale` 状态显示，再等待桥接器同步成 `wifi/live`。
- `usage3` 增加显示初始化后 8 秒延迟重绘，降低电子纸首帧残影或只刷出边框的概率。
- 当前 UART 已刷入 `usage3`，ADV 也已暂存同一 `usage3` 固件到 `/band0.bin`，`firmware_size=825696`，SHA256 `1ae1573b766edf9872a3b529482f1b7fff2a12f3394807f21d4c94e16caa412e`。
- 2026-05-19 已完成一次 `usage3` 同版本网络 OTA 演练：ADV 服务了完整 825696 字节固件，Band-0 回到 main 并继续显示缓存用量，证明 `no URL` 不再阻断 OTA。
- `usage4` 本地已编译，新增 OTA 状态清理：触发 OTA 前记录 `armed_attempt`，回到 main 后清掉 URL/旧失败原因并写入 result。`usage4` 尚未部署；上传到 ADV 80% 时 USB CDC 掉线，需重新插好 ADV 后继续。
- 每次重编后需要重新把 `sdk/build/Quote_0_ESP8684_IDF.bin` 上传到 ADV `/fw.bin`，再做网络 OTA；ADV 暂存固件要以 `tools/adv_bridge.py status` 或 `/api/firmware/status` 为准。
- ADV 串口访问已增加跨进程锁，网页桥和 CLI 同开时不会再抢响应。

当前已落地的数据入口：

- `GET /api/status`：返回当前模式、运行时间和 Claude Usage 状态。
- `GET /api/usage`：同样返回 usage 快照，方便桥接器轮询。
- `POST /api/push`：接收 `cardputer-claude-usage` 紧凑 JSON，成功后自动切到 `APP_MODE_CLAUDE_USAGE` 并刷新电子纸。
- `GET /api/ota/status`：查看 updater 请求、结果、SSID 和失败原因。
- `POST /api/mode`：切换 app 模式，支持数字或 `usage/clock/setup/...` 字符串。
- `POST /api/reboot`：HTTP 可达但状态异常时安排重启。
- `POST /api/ota/url`：写入 updater 使用的 OTA URL 和可选 Wi-Fi 信息，`reboot=true` 时切到 `updater` app 并延迟重启。

## 7. 当前推荐演示链路

```text
Claude Code OAuth / cache
  ↓ 原项目 bridge（localhost:8787/api/device-payload）
tools/claude_usage_wifi_bridge.py（localhost:8788）
  ↓ USB CDC JSON
Cardputer ADV（ADV 2.4G / 192.168.4.1）
  ↓ Wi-Fi HTTP
Band-0 /api/push
  ↓
200x200 EPD Claude Usage App
```

运行顺序：

```bash
cd /Users/yuookie/Documents/dev/cardputer/claude-usage-monitor/bridge
npm start

cd /Users/yuookie/Documents/dev/Band-0
python3 tools/claude_usage_wifi_bridge.py \
  --host 127.0.0.1 \
  --port 8788 \
  --adv-port /dev/cu.usbmodem12401
```

网页 `http://127.0.0.1:8788/` 保留原项目的核心连接逻辑：从原 bridge 读取同一份 payload、支持 demo、force sync、stale/error 透传，并新增 ADV/Band-0 状态。相比 Web Bluetooth，这条路线不占用 Mac Wi-Fi，Mac 可以继续访问外网。

## 8. “无线调试和 OTA”边界

可以做到：

- 手机/电脑连设备热点，看设备状态和日志。
- Mac bridge 通过 HTTP 推送 payload 到设备。
- 浏览器通过 Web Bluetooth 推送 payload 到设备。
- 设备从 HTTP API 收到 OTA URL，重启到原 updater 完成升级。

不建议第一版做：

- 在 main app 里直接上传 1.1 MB OTA bin 并写 main 分区。当前分区表没有第二个等价 main app 分区，直接自写会很危险。
- 继续混用官方 app 的复杂 UI 逻辑。我们可以复用硬件信息，但不应该在反编译伪代码上硬 patch 大段新功能。

## 9. 对当前还原 C 代码的锐评

优点：

- 地址偏移规则已经明确，真实地址和 Ghidra 地址不再混用。
- GPIO 证据链很强：按键表、GPIO config 结构体、调用点互相印证。
- updater 的 EPD 和 OTA 流程恢复价值高，足够支撑自定义固件 BSP。
- 可读恢复代码适合课堂讲解，比直接展示十几万行 Ghidra 伪代码强很多。

问题：

- 这些 C 文件不是可编译源码，只是“带命名的伪代码摘要”。老师若问能否重建固件，不能说已经完成源码级还原。
- `cloud_ota_recovered.c` 里对 JSON 字段的命名仍有推断成分，尤其 `host/url` 字段。对原固件 MITM 时应以 `path` 和 CDN 请求替换为主。
- 电池、电源、Wi-Fi 连接状态、BLE 栈初始化还没有达到 GPIO 表那种证据强度。
- 部分函数名偏业务解释，缺少“为什么这样命名”的注释。课堂答辩时应准备原始 xref 和 raw Ghidra 文件作为证据。

下一步最值得做的不是继续美化伪代码，而是做一个能跑的 `esp32c2_custom_app`：复用已还原的 GPIO/EPD/updater 知识，证明“反编译结果能指导新固件开发”。
