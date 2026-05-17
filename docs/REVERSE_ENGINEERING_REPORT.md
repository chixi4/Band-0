# Dot. / Quote-0 / Rand-0 固件逆向工程报告

> 目标：对老师给出的三份固件做可复现的功能分类、硬件还原、云端协议分析，并给出可以展示的 Hello World 与本地化方案。

## 0. 结论摘要

本次样本不是早期 README 中推断的 ESP32-C3 固件，而是 **ESP8684 / ESP32-C2 系列**固件。证据来自 ESP 镜像头、`flash_addresses.json` 的 `chip: esp32c2`、以及主应用工程名 `Quote_0_ESP8684_IDF`。

固件整体由一个工厂合并镜像、一个 OTA 应用镜像、一个分区包组成。分区包中又包含 bootloader、partition-table、main、updater、otadata。核心功能可以分为：

- 启动、分区选择和恢复升级：bootloader + `updater` 分区。
- 主业务 UI：`main` 分区，包含答案/签语、功德计数、MBTI 指南、蓝牙翻页器、时钟、设置。
- 网络能力：Wi-Fi STA、SoftAP 配网、NTP、HTTP/HTTPS OTA 查询。
- 本地端点：`/wallpaper/info`、`/wallpaper`、`/connect`、`/status`。
- 显示：JD79650 兼容 200x200 黑白电子纸，SPI 驱动，带 BUSY 等待逻辑。
- 蓝牙：BLE HID 翻页器/媒体键/拍照键/演示控制。
- 本地化突破：官方图片渲染 API 的 `COMPRESS_ARRAY_V2` 已还原为 **LZ4 block + 200x200 2bpp packed bitmap**，可以本地生成 Hello World 壁纸，不依赖官方云。

## 0.1 评分点覆盖

| 评分点 | 本报告覆盖内容 | 可展示产物 |
|---|---|---|
| 功能完整性 | bootloader、main、updater、NVS、OTA、BLE、Wi-Fi、壁纸、显示、内容模式均分类 | `docs/REVERSE_ENGINEERING_REPORT.md` |
| 还原性 | SHA256、分区表、镜像 metadata、关键字符串 offset、payload 格式都有证据 | `analysis/firmware_summary.json`、`analysis/*_strings_offsets.txt` |
| 硬件信息详细程度 | MCU、Flash、EPD 控制器、SPI/BUSY、BLE/Wi-Fi、电池、按键逻辑、VCOM 校准分级说明 | 第 4 节硬件还原表 |
| 讲解清晰度 | 按三份固件、分区、功能、协议、演示路线组织 | `docs/DEMO_CHECKLIST.md` |
| 加分项 | Hello World 壁纸、本地渲染、本地云原型、Hello World OTA demo | `tools/local_render.py`、`tools/local_cloud.py`、`tools/patch_hello_world_ota.py` |

## 1. 样本与校验

| 文件 | 大小 | SHA256 | 作用 |
|---|---:|---|---|
| `firmware/firmware_1.2.5_factory.bin` | 1,932,672 B | `99c3f5c449216185041b51c6023f86c4a5e17ef3e41f23913aae66002173af3d` | 合并工厂镜像，可按固定地址整体烧录 |
| `firmware/firmware_1.2.5_ota.bin` | 1,124,256 B | `4aee9cff308a7496ac1f11d0be37376949b22ddcecdea333ceda120e672c872b` | OTA 应用镜像，内容等同 `extracted/main.bin` |
| `firmware/firmware_1.2.5_separate.tgz` | 1,079,961 B | `0554687ef72e4532a937eed85426ffe57ff1489ebe035eb810adc5bd30c6f50e` | 分区包，包含 bootloader、分区表、main、updater 等 |

分区包展开后：

| 文件 | 地址 | 作用 |
|---|---:|---|
| `extracted/bootloader.bin` | `0x0000` | 二级启动器 |
| `extracted/partition-table.bin` | `0x8000` | 分区表 |
| `extracted/ota_data_initial.bin` | `0xd000` | OTA 启动状态 |
| `extracted/main.bin` | `0x10000` | 主应用，等同 OTA 包 |
| `extracted/updater.bin` | `0x150000` | 恢复/升级应用 |

三份下载固件的功能定位：

| 样本 | 功能分类 | 适合做什么 |
|---|---|---|
| factory | 完整 Flash 合并镜像 | 量产/救砖/USB 整体烧录 |
| ota | 单 app 镜像 | OTA 升级、主应用反编译、字符串 patch |
| separate | 分区级样本集合 | 分析分区布局、bootloader、updater、otadata |

可复现命令：

```bash
python3 tools/firmware_report.py
esptool.py --chip esp32c2 image_info extracted/main.bin
esptool.py --chip esp32c2 image_info extracted/updater.bin
```

机器可读结果已生成到 `analysis/firmware_summary.json`。

## 2. Flash 与分区结构

镜像配置：

| 项目 | 值 |
|---|---|
| 芯片 | `esp32c2` |
| Flash | 2 MB |
| Flash mode | DIO |
| Flash frequency | 60 MHz |
| bootloader | `0x0000` |
| partition-table | `0x8000` |
| otadata | `0xd000` |
| main app | `0x10000` |
| updater app | `0x150000` |

分区表：

| 分区 | 类型 | 偏移 | 大小 | 功能判断 |
|---|---|---:|---:|---|
| `nvs` | data/nvs | `0x09000` | 16 KB | 保存 Wi-Fi、模式、偏好、状态 |
| `otadata` | data/ota | `0x0d000` | 8 KB | OTA 启动槽状态 |
| `phy_init` | data/phy | `0x0f000` | 4 KB | RF/PHY 初始化数据 |
| `main` | app/ota_0 | `0x10000` | 1.25 MB | 主业务应用 |
| `updater` | app/ota_1 | `0x150000` | 640 KB | 恢复升级应用 |
| `wp` | data/custom | `0x1f0000` | 16 KB | 自定义壁纸数据 |
| `nvs_keys` | data/nvs_keys | `0x1f4000` | 4 KB | NVS 加密密钥区 |

这个布局说明设备使用双 app 槽，但不是传统两个业务版本轮换；`main` 是正常程序，`updater` 更像恢复/下载器。

## 3. 应用镜像元数据

| 镜像 | 工程名 | 版本 | 编译时间 | ESP-IDF |
|---|---|---|---|---|
| bootloader | ESP-IDF bootloader | - | 2026-05-10 17:54:38 | `v5.5.4-dirty` |
| main | `Quote_0_ESP8684_IDF` | `1.2.5` | 2026-05-10 17:54:43 | `v5.5.4-dirty` |
| updater | `Quote_0_Updater` | `7206492-dirty` | 2026-05-10 17:42:30 | `v5.5.4-dirty` |

`main` 的入口地址为 `0x403802f4`，镜像校验和与 appended SHA-256 均有效。`updater` 镜像同样是 ESP32-C2 应用镜像。

## 4. 硬件还原

| 硬件/能力 | 结论 | 置信度 | 证据 |
|---|---|---:|---|
| MCU | ESP8684 / ESP32-C2 系列 RISC-V SoC | 高 | `chip: esp32c2`、镜像 Chip ID 12、工程名 `Quote_0_ESP8684_IDF` |
| Flash | 2 MB SPI Flash，DIO，60 MHz | 高 | `flash_addresses.json` 和镜像头 |
| 屏幕 | JD79650 兼容 200x200 黑白电子纸 | 高 | `updater` 字符串 `init JD79650 (200x200 BW, GC LUT)` |
| 屏幕接口 | SPI + BUSY 等待 | 高 | `spi_bus_initialize`、`spi_bus_add_device`、`wait BUSY timeout` |
| 无线 | Wi-Fi 2.4 GHz STA + SoftAP | 高 | 配网 AP、`192.168.4.1`、NTP、HTTPS OTA 字符串 |
| 蓝牙 | BLE HID 遥控器/翻页器 | 高 | `Starting BLE`、`BT_PAGER`、媒体键和键盘 HID 功能字符串 |
| 存储 | NVS 保存配置，独立壁纸分区 | 高 | `nvs`、`wp` 分区，`app_config`、`ssid_1` 等键 |
| 电池 | 有电量和充电状态显示 | 中高 | `BAT: %d%%`、`BAT: CHG`、`Battery too low` |
| 按键 | 至少有 OK/BACK/UP/DOWN 逻辑动作 | 中 | UI 字符串出现 `Hold OK`、`BACK`、`UP`、`DOWN`；物理按键数量需拆机或 GPIO 追踪确认 |
| 蜂鸣/震动/摇动检测 | 存在相关功能路径 | 中 | `buzzer`、`buzzer_seq`、`buzzer_soft`、`shake_chk` |
| 屏幕 VCOM | 存在 OTP VCOM 校准读取 | 中高 | `otp_vcom`、`OTP Read OK`、`OTP Fallback` |

需要强调：按键数量、具体 GPIO 引脚、电池计量芯片型号无法只靠当前固件字符串完全确定；这些需要串口日志、拆机丝印或 Ghidra 中寄存器/GPIO 初始化交叉引用继续确认。

## 5. 功能分类

### 5.1 Bootloader

bootloader 负责常规 ESP-IDF 启动流程：读取分区表、读取 OTA data、加载 app 镜像、校验 checksum/hash。它本身业务逻辑很少，但确认了芯片和 Flash 参数。

### 5.2 Updater 恢复升级应用

`updater.bin` 的功能是恢复与 OTA 下载：

- 显示恢复界面：`Updater (Recovery)`、`Update Success`、`Update Failed`。
- 判断当前运行分区和目标分区。
- 失败时尝试 `set_boot_partition(main)` 回到主应用。
- 读取 NVS 中 Wi-Fi：`ssid_1`、`pwd_1`、`ssid_2`、`pwd_2`。
- 无可用网络时进入 SoftAP fallback。
- 调用 ESP-IDF HTTPS OTA：`esp_https_ota_begin`。
- 下载过程中在电子纸上显示进度：`downloaded %d / %d (%d%%)`。
- 屏幕初始化也在 updater 中出现：`init JD79650 (200x200 BW, GC LUT)`。

这说明设备升级失败后不只是变砖，而是有一个简化 UI 的恢复分区。

### 5.3 Main 主应用

主应用包含完整业务：

| 模块 | 证据字符串 | 功能 |
|---|---|---|
| 答案/签语 | `ANSWERS`、`FORTUNE` | 随机答案、提示语、每日内容 |
| 功德/计数 | `MERIT`、`merit_cnt` | 功德计数和相关 UI |
| 蓝牙翻页器 | `BT_PAGER` | 手机/演示/媒体/阅读控制 |
| 时钟 | `CLOCK`、NTP 字符串 | 时钟显示与时间同步 |
| MBTI 指南 | `MBTI_GUIDE`、`mbti_type` | 按 MBTI 类型展示建议 |
| 设置 | `SETUP`、`language`、`sleep_time` | 语言、休眠、按键音等配置 |
| Wi-Fi 配网 | `/connect`、`Saved Wi-Fi` | 本地 AP 配网页面 |
| 壁纸 | `/wallpaper/info`、`/wallpaper` | 自定义壁纸上传和删除 |
| OTA 查询 | `firmware/query` | 向官方 API 检查版本 |
| 电源 | `BAT: %d%%`、`sleep_time` | 电量、充电、低电保护、休眠 |

### 5.4 蓝牙 HID 细分

固件内置多种遥控配置：

- `PPT Remote`：演示翻页、F5、Esc、空白屏。
- `Phone Pager` / `Reading`：Page Up、Page Down、方向键。
- `Camera`：拍照/音量键。
- `Media`：播放暂停、上一首、下一首、音量。
- `Vibe Coding`：AI Invoke、AI Accept、AI Inline 等快捷键。
- `YXT Protocol`：疑似兼容特定翻页器协议。

可配置项包括 `Set DOWN Key`、`Set UP Key`、`bt_key_dn`、`bt_key_up`、`bt_tpl`。

### 5.5 NVS 配置分类

| 键名/命名空间 | 功能 |
|---|---|
| `app_config` | 主配置命名空间 |
| `init_done`、`fact_done`、`fact_otp` | 首次初始化/工厂校准 |
| `otp_ok`、`otp_vcom` | 屏幕 OTP VCOM 校准结果 |
| `boot_mode` | 启动模式 |
| `language` | 语言设置 |
| `mbti_type`、`mbti_kg_off` | MBTI 模块配置 |
| `sleep_time` | 自动休眠 |
| `merit_cnt` | 功德计数 |
| `bt_key_dn`、`bt_key_up`、`bt_tpl` | 蓝牙按键映射 |
| `clk_warn` | 时钟提醒 |
| `key_sound` | 按键声音 |
| `ssid_1`、`pwd_1`、`ssid_2`、`pwd_2` | Wi-Fi 凭据 |
| `updater` / `attempt_id` / `result` / `fail_reason` | OTA 结果记录 |

## 6. 云端与本地协议

### 6.1 固件查询 API

主应用请求：

```http
POST https://dot.mindreset.tech/api/authV2/panel/device/firmware/query
Authorization: Bearer 2782772a1b8f6fb3065c050631185738de5999729682b44095d38f24d405e0e2
Content-Type: application/json
User-Agent: ESP32 HTTP Client/1.0
```

请求体格式：

```json
{
  "status": "RELEASED",
  "series": "rand",
  "model": "rand_0",
  "edition": 1
}
```

固件下载 URL 由固件中的 `https://%s%s%s` 格式和 API 返回的 host/path 字段拼出，CDN 域名为 `os-cdn.mindreset.tech`。

### 6.2 时间同步

NTP 服务器：

- `ntp.aliyun.com`
- `time.apple.com`
- `pool.ntp.org`

时区字符串为 `CST-8`，对应中国标准时间 UTC+8 的 ESP-IDF 写法。

### 6.3 本地 HTTP 端点

设备自身提供本地端点：

| 端点 | 方法 | 功能 |
|---|---|---|
| `/connect` | GET/POST | Wi-Fi 配网 |
| `/join` | POST | 加入 Wi-Fi |
| `/status` | GET | 连接状态 |
| `/wallpaper/info` | GET | 查询壁纸分区状态 |
| `/wallpaper` | POST | 上传壁纸 payload |
| `/wallpaper` | DELETE | 删除自定义壁纸 |

壁纸信息字段包括 `has_custom`、`length`、`capacity`、`max_upload`。

## 7. 图片渲染协议还原

官方网页中硬编码：

```javascript
var CONVERT_API = 'https://dot.mindreset.tech/api/authV2/device/render/convert';
```

前端把图片发给官方 API，读取返回的 `COMPRESS_ARRAY_V2`，再上传到设备本地 `/wallpaper`。

通过构造 200x200 测试图并对官方响应解码，得到：

| 项目 | 还原结果 |
|---|---|
| 字段 | `COMPRESS_ARRAY_V2` |
| 压缩 | LZ4 block，未存储原始长度 |
| 原始尺寸 | 10,000 B |
| 图像尺寸 | 200 x 200 |
| 像素格式 | 2 bpp，4 pixels/byte |
| 黑白映射 | white = `0b00`，black = `0b11` |
| 一字节顺序 | 从高位到低位依次存 4 个像素 |

测试证据：

| 测试图 | 解压后特征 |
|---|---|
| 全白 | 全部 `0x00` |
| 竖条纹 | 出现 `0xcc` |
| 棋盘格 | 交替 `0xcc` / `0x33` |
| 左半黑右半白 | 每行前 25 字节 `0xff`，后 25 字节 `0x00` |
| 单黑点 | 首字节高两位为 `11`，即 `0xc0...` |

本项目已实现本地渲染器：

```bash
python3 tools/local_render.py --text 'HELLO\nWORLD' --kernel FLOYD_STEINBERG
```

输出：

- `build/hello_world_wallpaper.json`
- `build/hello_world_wallpaper.txt`
- `build/hello_world_preview.png`

这部分是脱离官方云的关键：以后壁纸转换不再需要 `dot.mindreset.tech`。

## 8. Hello World 演示

### 8.1 无需刷固件的壁纸方案

生成本地 Hello World 壁纸：

```bash
python3 tools/local_render.py --text 'HELLO\nWORLD'
```

如果设备已经连上同一网络，且 IP 为 `DEVICE_IP`：

```bash
curl --data-binary @build/hello_world_wallpaper.txt \
  -H 'Content-Type: application/octet-stream' \
  http://DEVICE_IP/wallpaper
```

这是课堂演示最稳妥的方案，因为不改 bootloader、不改分区表，只利用设备已经存在的本地 `/wallpaper` 能力。

### 8.2 OTA/工厂镜像字符串补丁方案

脚本：

```bash
python3 tools/patch_hello_world_ota.py
```

它对主应用中的可见 UI 文案做保守等长或更短字符串替换，并修复 ESP 镜像 checksum 和 SHA-256 footer。

生成产物：

| 文件 | SHA256 | 用途 |
|---|---|---|
| `build/firmware_1.2.5_hello_ota.bin` | `357c9cf541f929cee81e2a5f31e7b4a95931b9aa2fa4b052cfd0f9fb0bfb8ed1` | OTA app demo |
| `build/firmware_1.2.5_hello_factory.bin` | `725b3752f41ec6f10dce56f26557697f37ec8a3d61c4afa522552eaee93dfa5f` | 合并工厂 demo |

补丁内容：

| 原字符串 | 新字符串 |
|---|---|
| `Rand/0 Pager` | `HELLO WORLD!` |
| `Scan to connect` | `HELLO WORLD` |
| `Get it running first.` | `HELLO WORLD ON DOT!` |
| `Wallpaper Updated` | `HELLO WORLD OK` |

校验结果：

```bash
esptool.py --chip esp32c2 image_info build/firmware_1.2.5_hello_ota.bin
```

结果显示 checksum 有效，validation hash 有效，hash 为：

```text
09b144af21a0232a71620f152ae57d18c3b9703c83f10e0974f3de576bedb18f
```

如需 USB 直刷课堂设备，建议先备份原 flash，再刷合并镜像：

```bash
esptool.py --chip esp32c2 --port /dev/ttyUSB0 read_flash 0x0 0x200000 backup_full_flash.bin
esptool.py --chip esp32c2 --port /dev/ttyUSB0 write_flash 0x0 build/firmware_1.2.5_hello_factory.bin
```

端口名需按实际设备修改；课堂展示前必须确认这是自己的实验设备。

## 9. 本地云模拟

`tools/local_cloud.py` 提供了两个官方云端点的本地替代：

| 端点 | 本地行为 |
|---|---|
| `POST /api/authV2/panel/device/firmware/query` | 返回本地 Hello World OTA 信息 |
| `POST /api/authV2/device/render/convert` | 本地完成图片转换，返回 `COMPRESS_ARRAY_V2` |
| `GET /dot/firmware/rand_0/1/<firmware>` | 提供本地 OTA 下载 |

启动：

```bash
python3 tools/local_cloud.py --host 127.0.0.1 --port 8088
```

因为原固件中的云地址是 HTTPS 硬编码，要让未改固件直接访问这个本地服务，还需要 hosts/DNS 劫持、端口转发或 mitmproxy。若只做课堂证明，壁纸本地转换 + 设备本地 `/wallpaper` 上传已经能证明核心脱云路径。

## 10. 已证实与待继续

已证实：

- 芯片为 ESP32-C2/ESP8684 系列，不是 ESP32-C3。
- 三份固件的 SHA256、分区地址、镜像结构均已解析。
- `main` 与 OTA 包完全一致。
- `updater` 是独立恢复升级应用。
- 屏幕为 JD79650 兼容 200x200 黑白电子纸。
- 官方图片转换 payload 可本地生成。
- Hello World 壁纸和 Hello World OTA demo 已生成。

待继续提高还原度：

- 用 Ghidra 对 GPIO 初始化、SPI pin、按键 pin、电池 ADC pin 做交叉引用。
- 用串口日志确认开机流程和显示刷新路径。
- 如有实物，拆机拍摄 PCB 丝印，确认电池管理、电源芯片、按键数量。
- 将硬编码官方 URL 进一步二进制 patch 成本地域名，或重建等价 ESP-IDF 工程。
