# Dot. / Quote-0 / Rand-0 Firmware Reverse Engineering

这个仓库整理老师给出的三份固件，目标是做到：

- 完整按功能分类固件内容。
- 尽可能还原对应硬件信息。
- 还原云端与本地协议。
- 做出可展示的 Hello World。
- 推进官方云依赖的本地化替代。

当前最重要的修正：样本不是 ESP32-C3，而是 **ESP8684 / ESP32-C2 系列**固件。证据来自 ESP 镜像头、`flash_addresses.json` 和工程名 `Quote_0_ESP8684_IDF`。

## 交付文档

| 文档 | 内容 |
|---|---|
| [`docs/REVERSE_ENGINEERING_REPORT.md`](docs/REVERSE_ENGINEERING_REPORT.md) | 主逆向报告：样本校验、分区、功能分类、硬件还原、协议、Hello World |
| [`docs/DECOMPILATION_REPORT.md`](docs/DECOMPILATION_REPORT.md) | 反编译专项报告：Ghidra 全量输出、关键函数、可读恢复代码 |
| [`docs/GPIO_AND_API_MAP.md`](docs/GPIO_AND_API_MAP.md) | GPIO 引脚、API 端点、业务逻辑和本地化 patch 总表 |
| [`docs/ORIGINAL_FIRMWARE_MITM_OTA.md`](docs/ORIGINAL_FIRMWARE_MITM_OTA.md) | 不改原固件，通过 MITM OTA 换包的方案和验证标准 |
| [`docs/CARDPUTER_MITM_AP.md`](docs/CARDPUTER_MITM_AP.md) | Cardputer ADV 开 `ADV 2.4G` 热点、DNS 劫持和本地云中继的实操文档 |
| [`docs/CLAUDE_USAGE_PORTING_PLAN.md`](docs/CLAUDE_USAGE_PORTING_PLAN.md) | `cardputer-claude-usage` 迁移到本设备的可行性和阶段计划 |
| [`docs/LOCALIZATION_PLAYBOOK.md`](docs/LOCALIZATION_PLAYBOOK.md) | 脱云手册：本地图片转换、本地 OTA 服务、后续 URL patch 方向 |
| [`docs/DEMO_CHECKLIST.md`](docs/DEMO_CHECKLIST.md) | 课堂演示清单：按顺序跑命令和讲解重点 |
| [`docs/HARDWARE_BREAKOUT_PLAN.md`](docs/HARDWARE_BREAKOUT_PLAN.md) | 拆机/串口/下载模式验证步骤 |
| [`analysis/firmware_summary.json`](analysis/firmware_summary.json) | 机器可读固件解析结果 |
| [`analysis/gpio_api_inventory.json`](analysis/gpio_api_inventory.json) | 机器可读 GPIO、API、业务逻辑、补丁输出清单 |
| [`decompiled_src/`](decompiled_src/) | 人工命名和整理后的可读恢复代码 |
| [`reverse/`](reverse/) | ELF、objdump、Ghidra 全量反编译和字符串交叉引用 |

## 固件样本

固件文件放在 `firmware/`，因为体积和版权原因不进 git。

| 文件 | SHA256 | 作用 |
|---|---|---|
| `firmware_1.2.5_factory.bin` | `99c3f5c449216185041b51c6023f86c4a5e17ef3e41f23913aae66002173af3d` | 合并工厂镜像 |
| `firmware_1.2.5_ota.bin` | `4aee9cff308a7496ac1f11d0be37376949b22ddcecdea333ceda120e672c872b` | OTA app 镜像，等同 `extracted/main.bin` |
| `firmware_1.2.5_separate.tgz` | `0554687ef72e4532a937eed85426ffe57ff1489ebe035eb810adc5bd30c6f50e` | 分区包 |

分区包展开后的关键文件：

- `extracted/bootloader.bin`
- `extracted/partition-table.bin`
- `extracted/main.bin`
- `extracted/updater.bin`
- `extracted/ota_data_initial.bin`
- `extracted/flash_addresses.json`

## 快速复现

安装依赖：

```bash
python3 -m pip install -r requirements.txt
```

生成固件解析摘要：

```bash
python3 tools/firmware_report.py
```

查看 ESP 镜像信息：

```bash
esptool.py --chip esp32c2 image_info extracted/main.bin
esptool.py --chip esp32c2 image_info extracted/updater.bin
```

生成/查看反编译产物：

```bash
python3 tools/esp_image_to_elf.py extracted/main.bin \
  --out reverse/elf/main.elf \
  --meta-out reverse/elf/main_segments.json \
  --disasm-out reverse/disasm/main_objdump.txt

python3 tools/run_ghidra_decompile.py \
  --name main_fresh \
  --project Rand0Fresh \
  --elf reverse/elf/main.elf \
  --out-dir reverse/decompiled/main_fresh
```

生成 Hello World 壁纸：

```bash
python3 tools/local_render.py --text 'HELLO\nWORLD'
```

生成 Hello World OTA/工厂 demo：

```bash
python3 tools/patch_hello_world_ota.py
esptool.py --chip esp32c2 image_info build/firmware_1.2.5_hello_ota.bin
```

启动本地云原型：

```bash
python3 tools/local_cloud.py --host 127.0.0.1 --port 8088 \
  --public-host 192.168.4.2:8088 \
  --firmware build/firmware_1.2.5_hello_local_only_ota.bin
```

启动本地 NTP，给完全离线校时用：

```bash
sudo python3 tools/local_ntp.py --host 0.0.0.0 --port 123
```

生成脱云固件 patch：

```bash
python3 tools/patch_local_only_firmware.py
python3 tools/patch_local_only_firmware.py \
  --main build/firmware_1.2.5_hello_ota.bin \
  --main-out build/firmware_1.2.5_hello_local_only_ota.bin \
  --factory-out build/firmware_1.2.5_hello_local_only_factory.bin \
  --manifest-out build/hello_local_only_manifest.json
```

## 已完成的关键逆向结论

| 模块 | 结论 |
|---|---|
| MCU | ESP8684 / ESP32-C2 系列 |
| Flash | 2 MB，DIO，60 MHz |
| 屏幕 | JD79650 兼容 200x200 黑白电子纸，SPI，BUSY 等待 |
| 屏幕 GPIO | BUSY=3、RST=4、CS=5、SCLK=6、MOSI=7；无独立 DC，updater 使用 SPI 1-bit command phase |
| 按键 GPIO | 上键 GPIO8：长按退出；下键 GPIO1：长按确认；均 active-low |
| 其他 GPIO | buzzer=GPIO10，shake/vibration input=GPIO18 |
| 主应用 | `Quote_0_ESP8684_IDF`，版本 `1.2.5`，编译于 2026-05-10 17:54:43 |
| 恢复应用 | `Quote_0_Updater`，负责 OTA 下载和失败恢复 |
| 本地端点 | `/connect`、`/join`、`/status`、`/wallpaper/info`、`/wallpaper` |
| 云端点 | `firmware/query` 和 `render/convert` |
| 公共网络依赖 | 固件查询、OTA 下载、图片转换、NTP 均已有本地 patch/替代脚本 |
| 壁纸格式 | `COMPRESS_ARRAY_V2` = LZ4 block + 200x200 2bpp packed bitmap |
| Hello World | 已生成本地壁纸、校验有效的 OTA demo、Hello+脱云组合 demo |

## 项目结构

```text
.
├── docs/
│   ├── REVERSE_ENGINEERING_REPORT.md
│   ├── DECOMPILATION_REPORT.md
│   ├── GPIO_AND_API_MAP.md
│   ├── LOCALIZATION_PLAYBOOK.md
│   ├── HARDWARE_BREAKOUT_PLAN.md
│   └── DEMO_CHECKLIST.md
├── decompiled_src/
│   ├── main/
│   └── updater/
├── reverse/
│   ├── elf/
│   ├── disasm/
│   ├── decompiled/
│   └── xrefs/
├── tools/
│   ├── firmware_report.py
│   ├── esp32_image.py
│   ├── esp_image_to_elf.py
│   ├── run_ghidra_decompile.py
│   ├── string_addr_xrefs.py
│   ├── local_render.py
│   ├── local_cloud.py
│   ├── local_ntp.py
│   ├── patch_hello_world_ota.py
│   └── patch_local_only_firmware.py
├── analysis/
│   ├── firmware_summary.json
│   ├── main_strings_offsets.txt
│   ├── updater_strings_offsets.txt
│   └── bootloader_strings_offsets.txt
├── extracted/
│   └── 分区包展开内容
├── firmware/
│   └── 原始固件样本，不进 git
├── build/
│   └── 生成的 Hello World 产物，不进 git
├── analyze.py
├── capture_hotspot.ps1
├── start_capture.bat
├── mitm_fix.bat
└── mitm_cleanup.bat
```

## 抓包与 MITM 脚本

仓库里保留了早期抓包脚本：

- `capture_hotspot.ps1`
- `start_capture.bat`
- `mitm_fix.bat`
- `mitm_cleanup.bat`
- `analyze.py`

这些脚本用于 Windows 热点抓包、DNS/HTTPS 劫持和 OTA 行为观察。当前评分交付以 `docs/`、`tools/`、`analysis/` 的固件逆向成果为主。

## 后续加分方向

- 在实物上通过 UART 日志和逻辑分析仪确认 UART/BOOT/EN、电池 ADC 和电源管理细节。
- 在实物上验证 Hello World 壁纸上传、Hello+脱云 OTA 和本地 NTP 校时。
- 在保留原功能的基础上继续完善 `Claude Usage` App：BLE/Wi-Fi payload 推送、正方形电子纸 UI 打磨、设备状态与 OTA 控制。
