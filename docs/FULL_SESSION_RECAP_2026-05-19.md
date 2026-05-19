# Band-0 全程会话复盘（2026-05-19）

> 这份文档从本次会话最开始记录，不只记录最后一次 OTA 和 Claude Usage 调试。它的用途是给后续继续开发、课堂汇报、答辩复盘、故障恢复提供一条完整时间线。

## 0. 当前状态快照

### 2026-05-20 更新

- Band-0 当前实机稳定运行 `1.2.5-rebuilt-baseline10`，不是早期的 `usage3/usage4`。
- 当前默认链路：Mac -> ADV USB bridge -> `ADV 2.4G` -> Band-0 HTTP API。
- 已完成多次网络 OTA 验证，当前 `baseline10`：ADV 服务 `889952` 字节固件，Band-0 回到 main，`/api/status` 显示 `health=ok`、`ota.success=true`、`attempt_id=12`。
- 蜂鸣器已默认静音，BLE 默认不自启，空闲 heap 约 40 KB。
- BLE GATT 手动启动验证成功，但启动后 heap 降到约 11 KB，因此 BLE 暂定为备用通道。
- updater 崩溃根因已定位并修复：`CONFIG_ESP_MAIN_TASK_STACK_SIZE` 从 3072 增加到 8192，避免 `updater_screen_init()` 刷电子纸时主任务栈溢出。
- 当前详细验收记录见 `docs/BASELINE7_VALIDATION_2026-05-20.md`。

### 已经达成

- Band-0 已经从原先卡在 `rebooting` / 黑屏 / 只剩 `MBTI` 空框的状态恢复。
- 设备当前实机已刷入并运行 `1.2.5-rebuilt-usage3`。
- `usage3` 已验证：
  - 能正常启动主程序。
  - 默认进入 Claude Usage App。
  - 能通过 ADV 2.4G 连上本地网络。
  - 能从 macOS Keychain 读取 Claude 用量并显示到 Band-0。
  - 断电重启后能从 NVS 恢复上次用量缓存，不再退回 MBTI 空框。
  - 已完成一次同版本网络 OTA 演练，证明之前 `no URL` 的阻断已经跨过去。
- 本地源码已经编译出 `usage4`，但尚未部署到 Band-0。

### 还没完成

- `usage4` 还没有刷到设备。
- `usage4` 已经编译完成，但上传到 ADV 80% 时 ADV USB CDC 掉线。
- 当前 macOS 只重新看到了 CH343 UART：`/dev/cu.usbmodem5B7B0549671`。
- ADV 的 USB 串口暂时没出现，所以 `tools/claude_usage_wifi_bridge.py` 已经停止，等待 ADV 重新插回后继续。

### 当前关键版本

| 版本 | 状态 | 大小 | SHA256 | 说明 |
|---|---|---:|---|---|
| `1.2.5-rebuilt-usage2` | 历史中间版 | `824528` | `2af85f4774332b9bade2ff68f9b7e5426b7d7e2271847a59382a483cbcf169d2` | 修了 Wi-Fi race，但有 OTA URL 被清掉、重启后 UI 状态不稳的问题 |
| `1.2.5-rebuilt-usage3` | 当前设备运行版 | `825696` | `1ae1573b766edf9872a3b529482f1b7fff2a12f3394807f21d4c94e16caa412e` | 已部署，已实机验证，当前最安全基线 |
| `1.2.5-rebuilt-usage4` | 本地已编译，未部署 | `826736` | `4cd654b748ca3f1b3c628e3a9f6f83c0f8a2258e1f725adf028050c4e7e61352` | 增加 OTA 状态清理，等待 ADV USB 恢复后上传和 OTA |

## 1. 最初目标和评分目标

本次会话一开始，目标不是单纯“救活设备”，而是围绕老师布置的反编译作业做一个尽量满分的作品。

老师的评分点包括：

- 对三个固件做完整反编译。
- 按功能分类还原业务逻辑。
- 尽可能详细地反推出对应硬件信息。
- 代码可读性、还原性、讲解清晰度。
- 额外加分：能做出自己的扩展项目。

我们共同追加的目标：

- 在屏幕上跑通 Hello World，作为课堂惊喜。
- 把官方云依赖本地化，尽量脱离官方云。
- 尝试把 `cardputer-claude-usage` 项目迁移到 Band-0。
- 最终在保留原本功能的基础上新增一个 Usage App，用于查看 Claude 用量余额。
- 希望后续能通过 ADV 2.4G 和网络 OTA 做无线调试，不再每次拆机接 UART。

源项目：

```text
https://github.com/chixi4/cardputer-claude-usage
```

## 2. 早期方向判断：USB-C 是否能传数据

一开始的问题是：设备 USB-C 插到电脑后没有任何反应，只能充电。

当时的判断：

- 线和电脑都确认没问题。
- 设备插 USB 后 macOS 没有枚举串口、JTAG、MSC 或 HID。
- 结合板子结构和后续拆机图，判断这块板的 USB-C 很大概率只接了供电/充电路径，没有把 USB D+/D- 接到 ESP8684。
- 所以“直接用 Type-C 刷固件”的概率很低。
- 如果要底层突破，应该走 UART 或测试焊盘。

这个判断后续被验证：最终我们确实通过 UART0 和 BOOT 进入 ESP32-C2 ROM 下载器完成恢复。

## 3. 拆机图和硬件信息梳理

用户提供了板子拆机图之后，我们从图片和后续实验得到这些硬件结论。

### 主控和基本信息

- 主控：ESP8684 / ESP32-C2 系列。
- ROM 日志验证：

```text
ESP-ROM:esp32c2-eco4-20240515
Chip is ESP32-C2 (revision v2.0)
Features: WiFi, BLE
Crystal is 40MHz
MAC: 8c:8c:29:57:3e:6c
```

### 屏幕

- 屏幕：200x200 黑白电子纸。
- 驱动路径：JD79650 兼容。
- 后续自定义固件日志验证：

```text
jd79650: init JD79650 (200x200 BW, SPI)
display: display ready: 200x200 2bpp
jd79650: display frame done
```

### 已确认 GPIO

| 功能 | GPIO |
|---|---:|
| 下键 / confirm / long confirm | GPIO1 |
| 上键 / back / long exit | GPIO8 |
| EPD BUSY | GPIO3 |
| EPD RST | GPIO4 |
| EPD CS | GPIO5 |
| EPD SCLK | GPIO6 |
| EPD MOSI | GPIO7 |
| 蜂鸣器 | GPIO10 |
| 震动 / shake | GPIO18 |
| UART0 RXD | GPIO19 |
| UART0 TXD | GPIO20 |
| BOOT | GPIO9 |

### UART 焊盘结论

板子上有一排 7 个空焊盘，旁边有类似 `8n` 的丝印，最边上还有一个方形焊盘。最开始没有万用表，只能用低风险穷举和串口监听确认。

最终实测结论：

- 靠近屏幕排线为参考，远离排线一侧数第二个焊盘是 Band-0 TX，也就是 ESP GPIO20。
- 最远离屏幕排线的焊盘是 Band-0 RX，也就是 ESP GPIO19。
- BOOT/GPIO9 是单独找出来用于进 ROM 下载模式的点，需要通过 10K 拉到 GND 后再上电。

## 4. CH343 USB-UART 接线策略

用户手头有 CH343 USB-UART、小电阻、ADV、DAPLink、Xilinx 接口板等硬件。

最终选用 CH343，因为 ESP8684/ESP32-C2 原生 ROM 下载器可以用 UART0。

CH343 板子丝印显示：

```text
5V 3V3 GND RX TX
3V3 TTL / 5V TTL 选择
CH343
```

安全接线原则：

- 只接 GND、RX、TX。
- 不接 CH343 的 5V 或 3V3 到 Band-0。
- CH343 必须工作在 3V3 TTL。
- CH343 RX 接 Band-0 TX。
- CH343 TX 接 Band-0 RX，建议串 1K 电阻。
- BOOT/GPIO9 通过 10K 接 GND，只在需要进下载模式时接。

最终使用端口：

```text
CH343 UART: /dev/cu.usbmodem5B7B0549671
```

## 5. UART 探测过程

因为没有万用表，最初计划是：

- 先只用 CH343 RX 去扫 7 个焊盘。
- 不接 CH343 TX，避免误向未知焊盘输出。
- 设备上电或重启时，如果某个焊盘是 Band TX，会在 115200 看到 ESP ROM 或 app 日志。
- 只有确认 TX 后，再找 RX 和 BOOT。

中间用户多次尝试：

- 先试前 4 个焊盘。
- 又试后 3 个。
- 最后发现靠近屏幕排线那侧第二个、第三个曾有输出。
- 再进一步确认后，把“远离排线一侧第二个”判定为更可靠的 TX。

这个阶段做过一些辅助工具：

- 串口监听脚本。
- UART probe dashboard。
- 接对后给屏幕/网页提示的想法。

但核心突破还是靠 ESP ROM 日志和 esptool 握手确认。

## 6. ADV 2.4G 路线的建立

用户手上有 Cardputer ADV。我们把 ADV 从“备用硬件”变成了主调试节点。

目标：

- Mac 不连 `ADV 2.4G`，继续保持自己的外网。
- ADV 通过 USB CDC 连接 Mac。
- ADV 开 2.4GHz SoftAP：`ADV 2.4G`，密码 `mitm1234`。
- Band-0 连接 ADV AP。
- Mac 通过 ADV USB 串口发命令，ADV 再通过 Wi-Fi HTTP 访问 Band-0。
- ADV 同时托管 OTA 固件 `/fw.bin`。

最终架构：

```text
Mac
  normal Wi-Fi / Ethernet -> Internet
  USB CDC -> Cardputer ADV

Cardputer ADV
  AP: ADV 2.4G / 192.168.4.1
  HTTP: /fw.bin
  proxy: /api/band/status /api/band/ota
  JSON serial protocol

Band-0
  STA: 192.168.4.2
  HTTP debug API
  OTA updater downloads http://192.168.4.1/fw.bin
```

相关文件：

```text
cardputer-ap-arduino/src/main.cpp
tools/adv_bridge.py
tools/claude_usage_wifi_bridge.py
docs/CARDPUTER_MITM_AP.md
```

## 7. 原始 MITM / OTA 方向和第一次风险暴露

最初我们尝试走“设备检查更新时劫持响应，把固件下载地址指向魔改版”的路线。

用户在 ADV Web 控制台看到：

```text
ADV 2.4G MITM Console
connected devices: 1
DNS redirect hits: 1
Last DNS: dot.mindreset.tech
Mac IP: 192.168.4.2
```

早期问题：

- 点 OTA 后提示位置错误。
- Wi-Fi 校时显示 Wi-Fi 连接成功，但校时失败。
- 后来屏幕显示 `update success` 和 `rebooting`。
- 之后设备长时间卡在 `rebooting` 界面。
- 拔电池没有明显变化，因为电子纸保持最后一帧，且电源/电池状态不容易判断。

当时判断：

- 电子纸显示 `rebooting` 不等于主控还在那个界面。
- 也可能是写入成功后主程序没起来，或者只是屏幕没刷新。
- 没有 UART 就无法区分“真死机”“进入 bootloader”“主程序 crash”“电子纸残影”。

这就是最终转向 UART 救援的原因。

## 8. 为什么不能靠预留按键恢复

用户问过是否预留了恢复方式，例如：

```text
长按上键 10 秒
长按下键 10 秒
上下键一起按住 15 秒
```

当时的现实情况：

- 那些恢复手势如果没有提前写进当前运行固件，就不会存在。
- 原固件是否有类似逻辑并不确定。
- 当设备已经卡在未知状态时，按键手势不能替代 ROM 下载模式。
- 所以真正可靠的恢复入口仍然是 BOOT + UART ROM loader。

## 9. UART 恢复和刷写 usage2

接对 UART 和 BOOT 后，esptool 最终成功识别：

```text
Chip is ESP32-C2 (revision v2.0)
Features: WiFi, BLE
Crystal is 40MHz
MAC: 8c:8c:29:57:3e:6c
Uploading stub...
Running stub...
Stub running...
```

第一次高速刷写遇到问题：

```text
Writing at 0x00010000... (3 %)
A fatal error occurred: The chip stopped responding.
```

判断：

- ROM 下载器已经进入，说明芯片和 BOOT 路径没坏。
- 写到 3% 掉线更像是杜邦线接触、GND、TX/RX 或供电瞬间抖动。
- 当时 app 分区可能处于半写状态，必须继续刷完，不能直接开机验证。

解决：

- 降低 baud 到 115200。
- 保持触点稳定。
- 重新进入 ROM 下载模式。
- 成功写入主 app 分区 `0x10000`。

关键命令模板：

```bash
cd /Users/yuookie/Documents/dev/Band-0/sdk
source /Users/yuookie/esp/esp-idf-v5.5.4/export.sh >/tmp/idf_export.log 2>&1
python -m esptool \
  --chip esp32c2 \
  --port /dev/cu.usbmodem5B7B0549671 \
  --baud 115200 \
  --before no_reset \
  --after no_reset \
  --connect-attempts 0 \
  write_flash -z \
  --flash_mode dio \
  --flash_freq 60m \
  --flash_size 2MB \
  0x10000 build/Quote_0_ESP8684_IDF.bin
```

注意：

- 只写 `0x10000` 主 app。
- 不擦全片。
- 不写 bootloader / partition table，除非明确需要。

## 10. `usage2` 修复了什么，又留下什么问题

`usage2` 是第一个比较完整跑起来的 Claude Usage 版本。

它修复了一个关键 Wi-Fi race：

旧逻辑里 `WIFI_EVENT_STA_START` 会自动调用 `esp_wifi_connect()`，但这时 `esp_wifi_set_config()` 可能还没完成，导致：

```text
ESP_ERR_WIFI_STATE
```

修复策略：

- `WIFI_EVENT_STA_START` 不再自动 connect。
- 在 STA config 写完后显式 `esp_wifi_connect()`。

`usage2` 实机确认：

- 能启动。
- 能连 `ADV 2.4G`。
- 能启动 HTTP debug API。
- 能接收 Claude usage payload。
- 能通过 ADV / bridge 推送用量。

但 `usage2` 仍有两个严重问题：

1. OTA URL 会被主循环提前清掉，进入 updater 后提示 `no URL`。
2. 重启后屏幕可能黑屏、残字、只剩 `MBTI` 框，因为旧 NVS 里的 boot mode、payload 缓存和休眠策略没有处理好。

## 11. `no URL` OTA 问题定位

用户后来报告：

```text
OTA update fail reason no URL returning to main
```

根因：

- `POST /api/ota/url` 成功写入 NVS URL。
- 主循环 `poll_network_and_time()` 读取到 pending request。
- 旧逻辑马上调用 `wifi_clear_ota_request()`。
- 设备还没真正重启进 updater，URL 已经被清掉。
- updater 启动后当然读不到 URL，只能报 `no URL`。

修复策略：

- main app 只记录“OTA request staged”。
- 不在主循环提前清 NVS URL。
- 真正下载成功后由 updater 或后续 main cleanup 处理。

这个修复进入了 `usage3`。

## 12. Claude Usage 迁移思路

源项目 `cardputer-claude-usage` 的原目标板是 Cardputer / Cardputer ADV：

- ESP32-S3。
- M5Cardputer / Arduino。
- 240x135 彩色横屏 LCD。
- 键盘输入。
- Web/BLE 推送。

Band-0 是：

- ESP8684 / ESP32-C2。
- ESP-IDF。
- 200x200 黑白电子纸。
- 只有两个物理按键。
- USB-C 基本不能传数据。

所以迁移策略不是直接搬固件，而是：

- 保留源项目 bridge 的数据结构和 `/api/device-payload`。
- 在 Band-0 固件里新增 `APP_MODE_CLAUDE_USAGE`。
- 做一个正方形黑白电子纸 UI。
- 用 ADV USB/Wi-Fi 桥接代替 Web Bluetooth 作为主要传输路径。
- 后续再补 BLE GATT。

核心数据字段：

```text
cu  current used percent
cr  current remaining percent
ri  current resets in
wu  weekly used percent
wr  weekly remaining percent
wi  weekly resets in
m   model/tier
d   demo
s   status
age age seconds
stale stale flag
src source
err error
ts  timestamp
fs  footer seed
```

相关文件：

```text
sdk/main/claude_usage.c
sdk/main/include/claude_usage.h
sdk/main/debug_server.c
sdk/main/ui_render.c
tools/claude_usage_wifi_bridge.py
docs/CLAUDE_USAGE_PORTING_PLAN.md
```

## 13. Usage 网页桥和真实数据链路

最终实际跑通的数据链路：

```text
Claude Code OAuth / macOS Keychain
  -> 原 cardputer-claude-usage bridge: http://127.0.0.1:8787/api/device-payload
  -> 本项目 tools/claude_usage_wifi_bridge.py: http://127.0.0.1:8788
  -> ADV USB CDC JSON
  -> ADV 2.4G Wi-Fi
  -> Band-0 /api/push
  -> 200x200 EPD Claude Usage App
```

实测 payload 示例：

```json
{
  "cu": 4,
  "cr": 96,
  "ri": "3h 41m",
  "wu": 14,
  "wr": 86,
  "wi": "1d 5h",
  "m": "default_claude_.",
  "s": "live",
  "src": "macOS Keychain"
}
```

Band-0 返回状态：

```json
{
  "has_data": true,
  "current_used": 4,
  "current_remaining": 96,
  "weekly_used": 14,
  "weekly_remaining": 86,
  "transport": "wifi",
  "stale": false
}
```

## 14. 屏幕黑屏、残字、MBTI 空框问题

用户在刷完后看到：

- 曾经显示过成功界面。
- 重新拔电开机后黑屏。
- 或只显示几个字符。
- 或只显示 `MBTI` 和框，没有 Claude Usage 界面。

我们当时判断这不是“底层固件坏了”，而是运行状态问题：

1. 旧 NVS 里可能保存了 `MBTI` boot mode。
2. Usage payload 没有持久化，重启后没数据可画。
3. 默认 sleep 可能 300 秒后清屏。
4. 电子纸断电后保留旧画面，容易误判。
5. 首帧刷新可能只刷出边框或残影，需要延迟再刷一帧。

`usage3` 修复：

- 启动时固定进入 Claude Usage App。
- 把 boot mode 写回 NVS，覆盖旧 MBTI 残留。
- 强制 `sleep_time_seconds = 0`，演示调试期间不自动清屏。
- 收到 payload 后保存到 NVS。
- 重启时从 NVS 读取缓存 payload，显示为 `cached/stale`。
- 显示初始化后 8 秒再请求一次重绘。

关键代码位置：

```text
sdk/main/app_main.c
sdk/main/nvs_utils.c
sdk/main/claude_usage.c
```

## 15. `usage3` 构建和 UART 刷写

`usage3` 构建成功：

```text
sdk/build/Quote_0_ESP8684_IDF.bin
size: 825696
sha256: 1ae1573b766edf9872a3b529482f1b7fff2a12f3394807f21d4c94e16caa412e
version: 1.2.5-rebuilt-usage3
```

第一次 460800 写入失败：

```text
Writing at 0x00010000... (3 %)
The chip stopped responding.
```

降速 115200 后成功：

```text
Writing at 0x000d4c84... (100 %)
Wrote 825696 bytes (471070 compressed) at 0x00010000
Hash of data verified.
Leaving...
Staying in bootloader.
```

这一步之后：

- 移除 BOOT 到 GND。
- 保留 UART GND/RX/TX。
- 正常断电上电。
- 用 serial monitor 抓启动日志。

## 16. `usage3` 启动验证

日志文件：

```text
logs/band0_usage3_boot.log
```

关键证据：

```text
Version: 1.2.5-rebuilt-usage3
boot mode pinned to Claude Usage app
display ready: 200x200 2bpp
display frame done: 0, busy before=1 after=0 final=1
```

网络状态：

```json
{
  "firmware": "1.2.5-rebuilt-usage3",
  "mode": 6,
  "usage": {
    "has_data": false,
    "status": "waiting",
    "error": "Open bridge :8788"
  }
}
```

解释：

- `mode=6` 就是 Claude Usage App。
- 刚刷完没有 payload，所以显示 waiting 是正常的。
- 这不是屏幕坏，也不是 app 崩溃。

## 17. 推送真实 Claude 用量

通过本项目桥接器推送：

```bash
curl -sS --max-time 25 \
  -X POST http://127.0.0.1:8788/api/sync \
  -H 'Content-Type: application/json' \
  -d '{"force":true}'
```

桥接器返回：

```json
{
  "ok": true,
  "source_error": null,
  "payload": {
    "cu": 4,
    "cr": 96,
    "ri": "3h 41m",
    "wu": 14,
    "wr": 86,
    "wi": "1d 5h",
    "src": "macOS Keychain"
  },
  "push": {
    "http_status": 200,
    "ok": true
  }
}
```

Band-0 直接状态确认：

```json
{
  "firmware": "1.2.5-rebuilt-usage3",
  "mode": 6,
  "usage": {
    "has_data": true,
    "current_used": 4,
    "current_remaining": 96,
    "weekly_used": 14,
    "weekly_remaining": 86,
    "status": "live",
    "source": "macOS Keychain",
    "transport": "wifi",
    "stale": false
  }
}
```

## 18. 断电重启缓存验证

日志文件：

```text
logs/band0_usage3_reboot_cache.log
```

关键证据：

```text
Version: 1.2.5-rebuilt-usage3
boot mode pinned to Claude Usage app
claude_usage: restored cached usage payload
display ready: 200x200 2bpp
wifi_cfg: Got IP: 192.168.4.2
Connected to Wi-Fi
display frame done
```

重启后状态：

```json
{
  "usage": {
    "has_data": true,
    "status": "cached",
    "transport": "cache",
    "stale": true
  }
}
```

这说明：

- 断电重启后没有回到 MBTI。
- 没有变成空页面。
- 用量数据从 NVS 恢复成功。
- 桥接器再推一次后会回到 `wifi/live`。

## 19. ADV 暂存固件更新到 `usage3`

为了之后能走网络 OTA，需要把 ADV 上的 `/band0.bin` 换成最新固件。

上传 `usage3`：

```bash
tools/adv_bridge.py \
  --port /dev/cu.usbmodem12401 \
  upload sdk/build/Quote_0_ESP8684_IDF.bin \
  --chunk-size 64
```

完成后 ADV 返回：

```json
{
  "path": "/band0.bin",
  "size": 825696,
  "received": 825696,
  "expected": 825696,
  "sha256_expected": "1ae1573b766edf9872a3b529482f1b7fff2a12f3394807f21d4c94e16caa412e",
  "size_ok": true
}
```

## 20. 同版本网络 OTA 演练

为了证明之后可以不接 UART，用 `usage3` 到 `usage3` 做了一次同版本 OTA 演练。

触发：

```bash
tools/adv_bridge.py --port /dev/cu.usbmodem12401 ota-start
```

Band-0 接受：

```json
{
  "ok": true,
  "err": 0,
  "reboot_requested": true,
  "boot_set_to_updater": true,
  "url": "http://192.168.4.1/fw.bin"
}
```

ADV 状态确认 updater 下载过完整固件：

```json
{
  "ota_start_count": 1,
  "fw_download_count": 1,
  "fw_last_served_size": 825696,
  "firmware_size": 825696
}
```

Band-0 后续回到 main：

```json
{
  "firmware": "1.2.5-rebuilt-usage3",
  "mode": 6,
  "uptime_ms": 34995
}
```

结论：

- `no URL` 不再阻断 OTA。
- ADV 本地托管固件路径可用。
- Band-0 可以通过网络回到主程序。
- 以后理论上可以纯网络升级。

遗留问题：

- 状态页仍残留历史 `url` 和 `fail_reason=no_url`。
- 原因是 updater 分区不是我们这次改过的 main app，它没有按我们新的语义清理 main 写入的 OTA NVS。
- 所以需要 `usage4` 做 main-boot cleanup。

## 21. `usage4` 的目的和源码变更

`usage4` 不是为了改 UI，而是为了把 OTA 状态闭环做干净。

新增逻辑：

- 保存新 OTA 请求时清掉旧 `result` / `fail_reason` / `armed_attempt`。
- 触发 updater 前写入 `armed_attempt`。
- main app 下次启动时，如果看到 armed 或 legacy URL+fail，就清掉 URL 和旧失败原因。
- 同时写入 `result=0` 和 `result_for=<attempt>`，让状态页能解释“上次 OTA 已回到 main”。

相关文件：

```text
sdk/main/include/app_config.h
sdk/main/include/wifi_config.h
sdk/main/wifi_config.c
sdk/main/debug_server.c
sdk/main/app_main.c
```

`usage4` 构建成功：

```text
version: 1.2.5-rebuilt-usage4
size: 826736
sha256: 4cd654b748ca3f1b3c628e3a9f6f83c0f8a2258e1f725adf028050c4e7e61352
```

构建警告仍然存在：

```text
Part 'updater' size 0xa0000 too small
```

解释：

- 这是预期的。
- 完整 main app 只能写 `main` 分区。
- 不能把完整 Claude Usage 固件写进 `updater` 分区。

## 22. `usage4` 上传 ADV 时中断

我们尝试把 `usage4` 上传到 ADV：

```bash
tools/adv_bridge.py \
  --port /dev/cu.usbmodem12401 \
  upload sdk/build/Quote_0_ESP8684_IDF.bin \
  --chunk-size 64
```

上传到 80% 时失败：

```text
80% (661440/826736)
serial.serialutil.SerialException: read failed: [Errno 6] Device not configured
```

判断：

- 这是 ADV USB CDC 或 USB 线/接口重新枚举失败。
- 不是 Band-0 固件损坏。
- 不是 OTA 写坏设备，因为这一步只是把文件上传到 ADV，还没有触发 Band-0 OTA。

之后检查：

```text
find /dev -maxdepth 1 -name 'cu.usbmodem*'
```

当时看不到任何 `/dev/cu.usbmodem*`，后来只恢复了 CH343：

```text
/dev/cu.usbmodem5B7B0549671
```

所以当前中断点是：

- Band-0 安全运行 `usage3`。
- `usage4` 本地已编译。
- ADV 未重新枚举，尚不能继续上传和网络 OTA。

## 23. 当前所有重要串口和网络端点

### 串口

| 设备 | 当前/历史端口 | 状态 |
|---|---|---|
| CH343 USB-UART | `/dev/cu.usbmodem5B7B0549671` | 当前可见 |
| Cardputer ADV | `/dev/cu.usbmodem12401` | 历史端口，当前未枚举 |

### Wi-Fi

| 名称 | 用途 |
|---|---|
| `ADV 2.4G` | ADV SoftAP，密码 `mitm1234` |
| `192.168.4.1` | ADV AP / OTA 固件服务 |
| `192.168.4.2` | Band-0 在 ADV AP 下的常见 IP |
| `Band-0 Setup` | Band-0 fallback AP |
| `192.168.50.1` | Band-0 Setup AP 下的设备 IP |

### 本机服务

| 地址 | 用途 |
|---|---|
| `http://127.0.0.1:8787/api/device-payload` | 原 `cardputer-claude-usage` bridge |
| `http://127.0.0.1:8788/` | 本项目 Usage Wi-Fi bridge 页面 |
| `http://192.168.4.1/fw.bin` | ADV 托管给 Band-0 updater 下载的固件 |

## 24. 当前不要做什么

- 不要把 CH343 的 5V 或 3V3 接到 Band-0。
- 不要擦全片，除非已经备份并明确要重建分区。
- 不要把完整 main app 写到 `updater` 分区。
- 不要在 `usage4` 尚未完整上传到 ADV 前触发 OTA。
- 不要用屏幕残影判断设备是否死机，优先看 UART 或 HTTP 状态。
- 不要把 ADV 掉线误判成 Band-0 变砖。

## 25. 下一步从哪里继续

等 ADV USB 重新插回后：

1. 确认端口：

```bash
find /dev -maxdepth 1 -name 'cu.usbmodem*' 2>/dev/null | sort
python3 tools/adv_bridge.py ports
```

2. 查 ADV 状态：

```bash
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX status
```

3. 重新上传 `usage4`，建议先用 64 字节块；如果再次掉线，降到 32：

```bash
python3 tools/adv_bridge.py \
  --port /dev/cu.usbmodemXXXX \
  upload sdk/build/Quote_0_ESP8684_IDF.bin \
  --chunk-size 64
```

4. 确认 ADV 暂存固件：

```bash
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX status
```

期望：

```text
firmware_size = 826736
firmware_sha256_expected = 4cd654b748ca3f1b3c628e3a9f6f83c0f8a2258e1f725adf028050c4e7e61352
```

5. 触发网络 OTA：

```bash
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX ota-start
```

6. 等 Band-0 回到 main 后确认：

```bash
python3 tools/adv_bridge.py --port /dev/cu.usbmodemXXXX band-status
```

期望：

```text
firmware = 1.2.5-rebuilt-usage4
mode = 6
ota.url = null
ota.success = true
```

7. 重启 Usage bridge：

```bash
python3 -u tools/claude_usage_wifi_bridge.py \
  --host 127.0.0.1 \
  --port 8788 \
  --adv-port /dev/cu.usbmodemXXXX
```

8. 推送真实用量：

```bash
curl -sS --max-time 25 \
  -X POST http://127.0.0.1:8788/api/sync \
  -H 'Content-Type: application/json' \
  -d '{"force":true}'
```

## 26. 对课堂作品的意义

这条路不是简单“刷了一个 demo”，而是把反编译、硬件逆向、固件重建、网络劫持、本地化、UI 迁移、故障恢复串成了一个闭环。

可以向老师展示：

- 我们从原固件和拆机图还原了硬件 GPIO。
- 我们验证了 USB-C 不是可用数据口，找到了 UART/BOOT 测试点。
- 我们能进入 ESP32-C2 ROM 下载模式，具备救砖能力。
- 我们能解释 `rebooting` 电子纸残影和真实主控状态的区别。
- 我们能在保留原功能结构的基础上新增 Claude Usage App。
- 我们能把 Claude Usage 从横屏彩色 Cardputer 迁移到 200x200 黑白电子纸。
- 我们能用 ADV 做本地 AP、固件服务器和调试桥，Mac 保持外网。
- 我们已经实测网络 OTA 可以下载完整固件并回到 main。
- 我们能把每个失败点变成下一版工程修复，而不是靠运气操作。

## 27. 证据文件索引

| 文件 | 内容 |
|---|---|
| `docs/GPIO_AND_API_MAP.md` | GPIO、API、硬件信息总表 |
| `docs/HARDWARE_BREAKOUT_PLAN.md` | 拆机和焊盘突破计划 |
| `docs/CARDPUTER_MITM_AP.md` | ADV AP / USB bridge / OTA 操作文档 |
| `docs/CLAUDE_USAGE_PORTING_PLAN.md` | Claude Usage 迁移计划和状态 |
| `logs/band0_usage3_boot.log` | `usage3` 首次启动验证 |
| `logs/band0_usage3_reboot_cache.log` | 断电重启后缓存恢复验证 |
| `logs/band0_usage3_network_ota.log` | 同版本网络 OTA 监听记录，串口无输出但 ADV/HTTP 验证通过 |
| `sdk/main/claude_usage.c` | 用量 payload 解析、缓存、状态保存 |
| `sdk/main/debug_server.c` | HTTP debug API、push、mode、ota/url |
| `sdk/main/wifi_config.c` | Wi-Fi 连接、OTA NVS、usage4 cleanup |
| `sdk/main/ui_render.c` | 200x200 EPD UI 绘制 |

## 28. 一句话总结

本次会话从“老师要求完整反编译和硬件还原”开始，经过 USB-C 不可用判断、拆机图分析、UART 焊盘定位、CH343 接线、ROM 救援、ADV 本地 AP/OTA 桥建设、Claude Usage App 迁移、`usage2`/`usage3`/`usage4` 多轮固件迭代，最终把 Band-0 从卡屏风险状态恢复到可联网、可显示 Claude 用量、可缓存重启、可经 ADV 网络 OTA 的稳定基线。当前唯一中断点是 ADV USB CDC 掉线导致 `usage4` 尚未部署。

## 29. 后续更新：baseline1 底座收口

在 `usage3/usage4` 之后，目标从“继续小修补”调整为“只刷一次稳定本地控制底座”。

新增底座目标：

- 主固件版本：`1.2.5-rebuilt-baseline1`。
- 主功能：Claude Usage 默认 App、用量缓存、HTTP debug API、Wi-Fi/ADV 本地推送、网络 OTA 状态清理。
- 恢复功能：`/api/health`、`/api/logs`、`/api/debug/heap`、`/api/redraw`、启动/运行中按键恢复。
- BLE 功能：广播 `Band-0 Usage`，支持 usage JSON 写入、status read/notify，以及 `cmd=status`、`cmd=usage`、`cmd=safe`、`cmd=redraw`、`cmd=reboot`。
- updater/recovery：从 `esp_https_ota` 改成极简本地 HTTP socket 下载，写入 main 分区后回 main，避免 HTTPS 体积撑爆 updater 分区。

当前产物：

| Offset | Artifact | Size | SHA256 |
|---:|---|---:|---|
| `0x000000` | `sdk/build/bootloader/bootloader.bin` | `0x04c60` | `a17b89d94301d193fb3a9761a17e3b04492314d3dab0eaf668a650628e4f4575` |
| `0x008000` | `sdk/build/partition_table/partition-table.bin` | `0x00c00` | `b4c0fe99247d6327905ca404c2dafb5b09712ca68714d8dc0faf8e80049923f1` |
| `0x00d000` | `sdk/build/ota_data_initial.bin` | `0x02000` | `7d2c7ac4888bfd75cd5f56e8d61f69595121183afc81556c876732fd3782c62f` |
| `0x010000` | `sdk/build/Quote_0_ESP8684_IDF.bin` | `0x100650` | `af10121f6fc55e2f22ef2fd45370c7ac167140d795a287ce2cc9ed00b63cbafc` |
| `0x150000` | `sdk/updater/build/Quote_0_Updater.bin` | `0x98770` | `e865ae5cb3b8f022f9715e4a7b5e4b1984b154bcf9c59ced3693aa88e42a8c7e` |

新增工具：

- `tools/flash_baseline1.py`：固定正确偏移的一次性完整底座线刷脚本，避免误用 updater 工程的 `idf.py flash`。
- `tools/ble_usage_probe.py`：macOS BLE 探测、读状态、推 demo usage 的测试工具。

重要修正：

- 最终线刷不再只写 `0x10000` main，而是写完整底座包：bootloader、partition、otadata、main、updater。
- 线刷不擦全片，不覆盖 NVS、PHY、用户缓存和 key 分区。
- 如果需要用户手动接 BOOT/上电，会明确等待用户操作，不默认用户马上在屏幕前。
- Claude Usage 最终 UI 在底座稳定后继续迭代，方向改为白色主调，减少大面积黑色。
