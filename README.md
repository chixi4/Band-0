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
| [`docs/LOCALIZATION_PLAYBOOK.md`](docs/LOCALIZATION_PLAYBOOK.md) | 脱云手册：本地图片转换、本地 OTA 服务、后续 URL patch 方向 |
| [`docs/DEMO_CHECKLIST.md`](docs/DEMO_CHECKLIST.md) | 课堂演示清单：按顺序跑命令和讲解重点 |
| [`analysis/firmware_summary.json`](analysis/firmware_summary.json) | 机器可读固件解析结果 |

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
python3 tools/local_cloud.py --host 127.0.0.1 --port 8088
```

## 已完成的关键逆向结论

| 模块 | 结论 |
|---|---|
| MCU | ESP8684 / ESP32-C2 系列 |
| Flash | 2 MB，DIO，60 MHz |
| 屏幕 | JD79650 兼容 200x200 黑白电子纸，SPI，BUSY 等待 |
| 主应用 | `Quote_0_ESP8684_IDF`，版本 `1.2.5`，编译于 2026-05-10 17:54:43 |
| 恢复应用 | `Quote_0_Updater`，负责 OTA 下载和失败恢复 |
| 本地端点 | `/connect`、`/join`、`/status`、`/wallpaper/info`、`/wallpaper` |
| 云端点 | `firmware/query` 和 `render/convert` |
| 壁纸格式 | `COMPRESS_ARRAY_V2` = LZ4 block + 200x200 2bpp packed bitmap |
| Hello World | 已生成本地壁纸和校验有效的 OTA demo |

## 项目结构

```text
.
├── docs/
│   ├── REVERSE_ENGINEERING_REPORT.md
│   ├── LOCALIZATION_PLAYBOOK.md
│   └── DEMO_CHECKLIST.md
├── tools/
│   ├── firmware_report.py
│   ├── esp32_image.py
│   ├── local_render.py
│   ├── local_cloud.py
│   └── patch_hello_world_ota.py
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

- 对 `main.bin` 做 Ghidra 交叉引用，确认 GPIO、SPI、按键、电池 ADC 细节。
- Patch 固件中的官方 URL，让设备永久访问本地服务。
- 在实物上验证 Hello World 壁纸上传和 Hello World OTA。
- 后续再评估把另一个项目的屏幕 UI 和功能迁移到这个设备上。

