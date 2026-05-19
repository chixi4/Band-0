# GPIO、API 与业务逻辑总表

> 地址规则：本文统一写真实固件地址。Ghidra 导入本项目重建 ELF 后整体多 `0x10000`，例如真实 `0x42004a6c` 在 Ghidra 里是 `ram:42014a6c_FUN_ram_42014a6c.c`。

## 1. GPIO 引脚表

| GPIO | 功能 | 方向/电平 | 证据 | 置信度 |
|---:|---|---|---|---:|
| 1 | 下方物理键，长按确认/OK | 输入，active-low | key table `0x3fcb6f18` 第 2 项：`gpio=1, short=3, long=1`；`key_task` true `0x42004a6c` | 高 |
| 3 | EPD BUSY | 输入 | updater `0x420079b0` 配置 `pin_bit_mask=0x08`；main `0x42010b2e` 配置同一输入；`0x42010cac` 轮询 `gpio_get_level(3)` | 高 |
| 4 | EPD RESET | 输出 | updater `gpio_set_level(4,1/0/1)` reset sequence；main `0x42010b92` 同样复位 | 高 |
| 5 | EPD CS | 输出/SPI CS | updater `spi_device_interface_config.spics_io_num=5`；main 读 OTP 时 `gpio_set_level(5,0/1)` | 高 |
| 6 | EPD SCLK | 输出 | updater SPI bus `sclk_io_num=6`；main bitbang `0x42010cda` toggles GPIO6 | 高 |
| 7 | EPD MOSI/SDA | 输出，读 OTP 时也采样 | updater SPI bus `mosi_io_num=7`；main bitbang 在 GPIO7 写数据并在 `0x42010c1e` 采样 | 高 |
| 8 | 上方物理键，长按退出/Back | 输入，active-low | key table 第 1 项：`gpio=8, short=4, long=2`；用户实物确认“上长按退出” | 高 |
| 10 | buzzer / tone 输出 | 输出/外设通道 | `buzzer_init` true `0x42004f3a` 配置 pin `10`，并调用 drive capability `gpio=10, cap=3` | 高 |
| 18 | shake / 振动或摇动检测输入 | 输入，上拉，中断 | `shake_chk` true `0x42005976` 配置 `pin_bit_mask=1<<18`、pull-up、interrupt type `2`，并安装 ISR `0x40381a6a` | 高 |
| 19 | UART0 RXD | 输入 | 2026-05-19 实物确认：7 触点排中“最远离屏幕排线的触点”经 `CH343 TX -> 1K -> 触点` 可被 esptool 连接，读到 ESP32-C2 MAC `8c:8c:29:57:3e:6c`；启动日志也打印 `GPIO 19 and 20 are used as console UART I/O pins` | 高 |
| 20 | UART0 TXD | 输出 | 2026-05-19 实物确认：7 触点排中“远离屏幕排线侧数第 2 个触点”接 USB-UART RX 后读到 `ESP-ROM:esp32c2-eco4-20240515` 和 ESP-IDF 日志 | 高 |

下载/启动相关：

| GPIO | 功能 | 实物状态 | 证据 |
|---:|---|---|---|
| 9 | BOOT strapping | 已确认测试点 | `10K -> GND` 并重新上电后输出 `boot:0x4 (DOWNLOAD(UART0))`、`waiting for download`，随后 esptool 可读到 ESP32-C2 和 MAC `8c:8c:29:57:3e:6c` |
| EN / CHIP_PU | 复位 | 未确认独立测试点 | 当前通过断开/恢复整机供电完成复位 |

GPIO9/EN 不是 app 业务 GPIO，但它们是恢复、刷写和防砖流程的关键。

## 2. 两个物理按键

原始按键表在 `main.bin` file offset `0x53f70`，运行地址 `0x3fcb6f18`：

```text
entry0: gpio=8, short_event=4, long_event=2
entry1: gpio=1, short_event=3, long_event=1
```

`key_task` true `0x42004a6c` 的扫描逻辑：

| 行为 | 条件 |
|---|---|
| 按下 | `gpio_get_level(pin) == 0` |
| 短按 | 松开前按下时间 `> 50,000 us`，且没有触发长按 |
| 长按 | 按住时间 `> 800,000 us` |
| 派发 | 事件结构 `{type=1, event=<short/long code>, is_long=<0/1>}` |

事件处理函数 true `0x4200ad14` 显示：

| event | long? | 语义 |
|---:|---:|---|
| 1 | 1 | confirm / OK / enter |
| 2 | 1 | back / exit / cancel |
| 3 | 0 | next / down |
| 4 | 0 | previous / up |

结合实物“上长按退出、下长按确认”：

| 物理键 | GPIO | 短按 | 长按 |
|---|---:|---|---|
| 上键 | 8 | event 4，上一项/上翻 | event 2，退出/返回 |
| 下键 | 1 | event 3，下一项/下翻 | event 1，确认/进入 |

## 3. EPD 屏幕总线

屏幕是 JD79650 兼容 200x200 黑白电子纸。主应用和 updater 都有屏幕代码，互相印证。

| 证据点 | 真实地址 | 结论 |
|---|---:|---|
| updater EPD init | `0x420079b0` | 初始化 JD79650，配置 GPIO4/5 输出、GPIO3 输入、SPI MOSI7/SCLK6/CS5 |
| updater send byte | `0x420078b0` | `spi_transaction_t.cmd = 0/1`，`length=8`，tx byte；D/C 不走独立 GPIO |
| main EPD pin init | `0x42010b2e` | `pin_bit_mask=0xf0` 输出 GPIO4/5/6/7，`pin_bit_mask=0x08` 输入 GPIO3 |
| main bitbang write | `0x42010cda` | GPIO7 写 bit，GPIO6 翻转 clock |
| main BUSY wait | `0x42010cac` | 等待 GPIO3 |

关键点：板上不需要再找独立 DC 焊盘。updater 通过 SPI 1-bit command phase 区分 command/data，main 的 OTP/VCOM 读取路径则直接 bitbang 4/5/6/7/3。

## 4. API 端点与云依赖

| 类型 | 地址/路径 | 固件位置 | 真实 xref | 用途 | 本地化状态 |
|---|---|---:|---:|---|---|
| 官方固件查询 | `https://dot.mindreset.tech/api/authV2/panel/device/firmware/query` | `main.bin` offset `0x1a32c`，runtime `0x3c0c232c` | `0x42013426` in `0x4201339a` | POST 查询版本 | 已 patch 为 `/fwq` |
| Authorization token | `Bearer 2782772a...405e0e2` | offset `0x1a394` | `0x4201348a` 附近 | 固件查询固定 token | 本地服务兼容并回显 `token_seen` |
| OTA CDN host | `os-cdn.mindreset.tech` | offset `0x1a400`，runtime `0x3c0c2400` | `0x420136dc` in `0x42013682` | 下载 host | 已 patch 为 `192.168.4.2:8088` |
| OTA URL format | `https://%s%s%s` | offset `0x1a418`，runtime `0x3c0c2418` | `0x420136e0` in `0x42013682` | 组装 OTA URL | 已 patch 为 `http://%s%s%s` |
| 官方图片转换 | `https://dot.mindreset.tech/api/authV2/device/render/convert` | embedded JS offset `0x4ae57` | 网页脚本 | 浏览器上传图片生成壁纸 payload | 已 patch 为 `http://127.0.0.1:8088/render` |
| 公共 NTP | `ntp.aliyun.com`、`time.apple.com`、`pool.ntp.org` | offsets `0xf5c`、`0xf6c`、`0xf7c` | SNTP 初始化路径 | Wi-Fi 校时 | 已 patch 为 `192.168.4.2`，配合 `tools/local_ntp.py` |
| 本地首页 | `/`、`http://192.168.4.1/` | main web server strings | `0x42012e42` 附近 | SoftAP 配网首页/网络列表 | 原生本地 |
| 本地状态 | `/status` | main web server strings | `0x42012e42` 附近 | 查询联网/配网状态 | 原生本地 |
| Wi-Fi 配网 | `/connect`、`/join`、`/connect?b=%s&pwd=` | main web server strings | `0x42012e42` 附近 | 保存 SSID/password | 原生本地 |
| 壁纸 | `/wallpaper/info`、`/wallpaper` | main web server strings | wallpaper handler | 查询/上传/删除壁纸 | 原生本地 |
| updater OTA | NVS key `url` | updater true `0x420068aa`、`0x4200706c` | updater 读取 URL 后下载到 main | 恢复升级 | 可由本地 main 写入本地 URL |

固件查询 JSON 关键字段：

```json
{
  "needUpdate": true,
  "host": "192.168.4.2:8088",
  "path": "/dot/firmware/rand_0/1/firmware_1.2.5_hello_local_only_ota.bin",
  "query": "",
  "size": 1124256
}
```

## 5. 业务逻辑分类

| 分类 | 真实地址 | Ghidra 地址 | 可读恢复文件 | 功能 |
|---|---:|---:|---|---|
| 主入口/调度 | `0x42004b52` | `ram:42014b52` | `decompiled_src/main/app_main_recovered.c` | 初始化配置、启动按键任务、UI/电源/蜂鸣循环 |
| 按键扫描 | `0x42004a6c` | `ram:42014a6c` | `decompiled_src/main/gpio_key_map_recovered.c` | 两键 active-low 扫描，短/长按事件 |
| 蜂鸣器 | `0x42004f3a` | `ram:42014f3a` | `decompiled_src/main/buzzer_recovered.c` | GPIO10 buzzer 初始化 |
| 摇动检测 | `0x42005976` | `ram:42015976` | GPIO 表 | GPIO18 上拉中断，任务名 `shake_chk` |
| Wi-Fi/NVS | `0x42007792` | `ram:42017792` | `decompiled_src/main/wifi_config_recovered.c` | 保存 OTA URL、SSID、password 到 NVS |
| BLE 翻页器 | `0x4200b0a8` | `ram:4201b0a8` | `decompiled_src/main/ble_pager_recovered.c` | PPT/phone/media/reading HID 模板 |
| UI 渲染 | `0x4200e36e` | `ram:4201e36e` | `decompiled_src/main/ui_render_recovered.c` | 主屏、状态栏、电池、设置 |
| HTTP 配网 | `0x42012e42` | `ram:42022e42` | `decompiled_src/main/wallpaper_local_recovered.c` | `/connect`、`/join`、`/wallpaper` |
| 固件查询 | `0x4201339a` | `ram:4202339a` | `decompiled_src/main/cloud_ota_recovered.c` | POST 版本查询，解析 `needUpdate/path/query/size` |
| OTA URL 构造 | `0x42013682` | `ram:42023682` | `decompiled_src/main/cloud_ota_recovered.c` | 拼接 host/path/query，写 NVS，切 updater |
| updater 主流程 | `0x420062da` | `ram:420162da` | `decompiled_src/updater/updater_recovery_recovered.c` | 读取 NVS 请求，连 Wi-Fi，OTA，回 main |
| updater OTA | `0x4200706c` | `ram:4201706c` | `decompiled_src/updater/ota_download_recovered.c` | HTTPS/HTTP OTA 写入 main 分区 |
| updater EPD | `0x420079b0` | `ram:420179b0` | `decompiled_src/updater/epd_jd79650_recovered.c` | JD79650 SPI 初始化、LUT、进度显示 |

## 6. 已生成的脱云补丁

脚本：`tools/patch_local_only_firmware.py`

| 输出 | SHA256 | 说明 |
|---|---|---|
| `build/firmware_1.2.5_local_only_ota.bin` | `3cc312ab67673e92c52879f66623640a5bc1809523cdee2636ff10b6fec0bf56` | 官方固件，云/API/NTP 依赖 patch 为本地 |
| `build/firmware_1.2.5_local_only_factory.bin` | `25d4986ad75bdf41b6d4b02d254520adda7b67274f7d551efe66c908195d9635` | 对应工厂镜像 |
| `build/firmware_1.2.5_hello_local_only_ota.bin` | `00284f63951a1422480d9e5e4342748be0066084d02e522459bb7c62ce3bc904` | Hello World + 脱云组合演示 |
| `build/firmware_1.2.5_hello_local_only_factory.bin` | `4fc41aa7507bdf304f53a998305655bd4d2c1aa34e6b2a3bac13edac0af7a1c3` | Hello World + 脱云工厂镜像 |

两份 OTA app 都已用 `esptool.py --chip esp32c2 image_info` 验证 checksum 和 validation hash 有效。

本地服务：`tools/local_cloud.py`

| 路径 | 功能 |
|---|---|
| `POST /fwq` | 短路径固件查询，给 patched firmware 用 |
| `POST /api/authV2/panel/device/firmware/query` | 保留官方路径，给 MITM/hosts 演示用 |
| `POST /render` | 短路径图片转换，给 patched embedded web UI 用 |
| `POST /api/authV2/device/render/convert` | 保留官方路径 |
| `GET /dot/firmware/rand_0/1/<firmware>` | 本地 OTA bin 下载 |

本地 NTP：`tools/local_ntp.py` 监听 UDP/123，给 patched firmware 的 Wi-Fi 校时使用。macOS/Linux 绑定 123 端口通常需要 `sudo`。
