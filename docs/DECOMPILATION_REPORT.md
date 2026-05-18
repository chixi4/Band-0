# 反编译与可读代码还原报告

## 1. 目标

老师明确要求“反编译出可视性好的完整代码”。本项目按两层交付：

| 层级 | 位置 | 用途 |
|---|---|---|
| 全量机器反编译 | `reverse/decompiled/main_fresh/all_functions.c`、`reverse/decompiled/updater/all_functions.c` | 证明固件已完整进入 Ghidra 并导出函数级伪代码 |
| 人工可读恢复 | `decompiled_src/` | 给老师讲功能、流程、硬件推断时直接阅读 |

这样既满足“完整”，也避免只把十几万行未命名伪代码扔给老师导致可读性差。

## 2. 工具链

| 工具 | 用途 |
|---|---|
| `tools/esp32_image.py` | 解析 ESP image 段、校验 checksum/hash、支持字符串 patch |
| `tools/esp_image_to_elf.py` | 把 ESP app image 重建成 RISC-V ELF section |
| `riscv64-elf-objdump` | 输出反汇编和 rodata dump |
| Ghidra 12.1 + OpenJDK 21 | RISC-V 反编译 |
| `tools/string_addr_xrefs.py` | 把字符串 offset、运行地址、objdump 注释、Ghidra 函数索引合并 |
| `tools/local_render.py` | 验证壁纸格式并生成 Hello World payload |

## 3. 反编译产物规模

| 镜像 | 全量函数索引 | 全量伪代码 | 单函数文件 |
|---|---:|---:|---:|
| `main.bin` | 4,910 行索引 | 176,542 行 C-like 伪代码 | 约 4,904 个 |
| `main.bin` 增强候选版 | 5,318 行索引 | 188,026 行 C-like 伪代码 | 约 5,312 个 |
| `updater.bin` | 3,406 行索引 | 118,594 行 C-like 伪代码 | 约 3,400 个 |

推荐课堂展示 `main_fresh` 和 `updater` 两套稳定输出；增强候选版保留用于查漏，但因为候选入口较多，会多出误判函数。

仓库同时保留了一份早期 `reverse/decompiled/main/` 导出用于交叉比对；因此当前 `reverse/decompiled/*/functions/` 下共有 18,520 个单函数文件，其中 `main` 与 `main_fresh` 是同一主应用的两次稳定导出，不应重复计入业务功能数量。

## 4. 地址偏移说明

ESP app image 不是普通 ELF。我们用 `objcopy` 把每个段按运行地址放回 ELF section，但生成的是 relocatable ELF。Ghidra 12.1 导入时把段地址整体加了 `0x10000`。

| 真实固件地址 | Ghidra 显示地址 | 说明 |
|---|---|---|
| `0x42004b52` | `ram:42014b52` | 主应用主循环 |
| `0x42004f3a` | `ram:42014f3a` | buzzer 初始化 |
| `0x420079b0` | `ram:420179b0` | updater 电子纸初始化 |
| `0x403802f4` | `ram:403902f4` | main 入口附近 |

`reverse/xrefs/*_true.md` 已经用 `--function-address-delta 0x10000` 修正回真实地址，报告和 `decompiled_src/` 统一使用真实固件地址。

## 5. 主应用关键函数

| 真实地址 | 恢复名称 | 证据 | 功能 |
|---|---|---|---|
| `0x42004b52` | `app_main_recovered` | 创建 `"key_task"`，调用 Wi-Fi/UI/buzzer/睡眠相关函数 | 主应用业务循环 |
| `0x42004a6c` | `key_task` | `xTaskCreate(entry, "key_task", 0x800, ..., 10, ...)`、key table `0x3fcb6f18` | GPIO1/GPIO8 两键扫描任务 |
| `0x42004f3a` | `buzzer_init_recovered` | 字符串 `"buzzer"` | 蜂鸣/提示音驱动初始化 |
| `0x420050aa` | `buzzer_seq_recovered` | 字符串 `"buzzer_seq"` | 异步蜂鸣序列 |
| `0x4200545e` | `buzzer_soft_recovered` | 字符串 `"buzzer_soft"` | 软件蜂鸣模式 |
| `0x42007792` | `save_ota_wifi_request_recovered` | `ssid_1`、`pwd_1`、`pwd_2`、`attempt_id` | 保存 OTA/Wi-Fi 请求 |
| `0x42007a70` | `clear_ota_wifi_request_recovered` | 擦除 `url`、`ssid_1`、`pwd_1` 等键 | 清理 OTA/Wi-Fi 请求 |
| `0x4200a91c` | `bt_key_label_recovered` | `BLE init failed` 附近、按键标签表 | BLE HID 按键标签查询 |
| `0x4200b0a8` | `bt_pager_screen_recovered` | `Starting BLE`、`ble_init`、模板 UI 字符串 | 蓝牙翻页器 UI 和 BLE worker 启动 |
| `0x4200e36e` | `render_current_screen_recovered` | `BAT: %d%%`、`BAT: CHG`、MBTI/设置文本 | 主 UI 渲染和状态栏 |
| `0x42012e42` | `connect_or_join_handler` | `400 Bad Request`、`413 Payload Too Large`、URL decode | 配网页面请求处理 |
| `0x4201339a` | `query_firmware_update_recovered` | `firmware/query`、Bearer token、`needUpdate` | 官方固件查询 |

对应可读代码在 `decompiled_src/main/`。

## 6. Updater 关键函数

| 真实地址 | 恢复名称 | 证据 | 功能 |
|---|---|---|---|
| `0x42006076` | `set_boot_partition_main_recovered` | `set_boot_partition(main)` | 切回 `main` 分区 |
| `0x42006224` | `fail_and_reboot_to_main` | `main_corrupt; reflash via USB` | 失败提示与死循环/重启处理 |
| `0x420062da` | `updater_main_recovered` | `OTA URL`、`=== OTA attempt %d/%d ===` | 恢复升级主流程 |
| `0x420068aa` | `load_updater_request_recovered` | `ssid_1`、`pwd_1`、`ssid_2`、`pwd_2` | 从 NVS 读取 OTA 和 Wi-Fi |
| `0x4200706c` | `ota_download_to_main_recovered` | `OTA OK: %d bytes written to %s` | HTTPS OTA 下载到 `main` |
| `0x42007936` | `epd_wait_busy_recovered` | `wait BUSY timeout` | 电子纸 BUSY 等待 |
| `0x420079b0` | `epd_jd79650_init_recovered` | `init JD79650 (200x200 BW, GC LUT)` | 200x200 黑白电子纸 SPI 初始化 |

对应可读代码在 `decompiled_src/updater/`。

## 7. 功能分类到代码文件

| 功能 | 可读恢复文件 | 原始证据 |
|---|---|---|
| 主循环/模式调度 | `decompiled_src/main/app_main_recovered.c` | `ram:42014b52_FUN_ram_42014b52.c` |
| GPIO 按键 | `decompiled_src/main/gpio_key_map_recovered.c` | `ram:42014a6c_FUN_ram_42014a6c.c`、`ram:4201ad14_FUN_ram_4201ad14.c` |
| 蜂鸣器 | `decompiled_src/main/buzzer_recovered.c` | `buzzer`、`buzzer_seq`、`buzzer_soft` |
| Wi-Fi / NVS / OTA 请求 | `decompiled_src/main/wifi_config_recovered.c` | `ssid_1`、`pwd_1`、`ota` namespace |
| BLE HID 翻页器 | `decompiled_src/main/ble_pager_recovered.c` | `BT_PAGER`、`ble_init`、HID 键名 |
| UI/电池/壁纸 | `decompiled_src/main/ui_render_recovered.c`、`wallpaper_local_recovered.c` | `BAT: %d%%`、`/wallpaper` |
| 云 OTA 查询 | `decompiled_src/main/cloud_ota_recovered.c` | `firmware/query`、Bearer token |
| 恢复升级 | `decompiled_src/updater/updater_recovery_recovered.c` | updater OTA 字符串 |
| HTTPS OTA 下载 | `decompiled_src/updater/ota_download_recovered.c` | ESP HTTPS OTA 事件 |
| 电子纸驱动 | `decompiled_src/updater/epd_jd79650_recovered.c` | JD79650、SPI、BUSY、LUT |

## 8. 对后续拆机的帮助

从固件已经能确认：

- MCU 是 ESP8684 / ESP32-C2，RISC-V 单核，支持 Wi-Fi 和 BLE。
- USB-C 口很可能只是供电或未连接 USB-UART，因为固件/拆机图没有发现 CH340/CP210x 这类桥接芯片证据。
- 后续突破建议优先找 3.3V UART0：ESP32-C2/ESP8684 常见 UART0 为 U0RXD/GPIO19、U0TXD/GPIO20；下载模式通常与 GPIO9 strapping 相关。
- 电子纸是 200x200 黑白 SPI 屏：BUSY=GPIO3、RST=GPIO4、CS=GPIO5、SCLK=GPIO6、MOSI=GPIO7。updater 没有独立 DC GPIO，而是用 SPI 1-bit command phase 区分命令/数据。
- 两个物理键已定位：上键 GPIO8 active-low，长按退出；下键 GPIO1 active-low，长按确认。
- 蜂鸣器为 GPIO10，shake/vibration 检测为 GPIO18 上拉中断。电池检测和具体充电芯片型号仍需实物测量。

## 9. 局限

反编译无法 100% 恢复原始变量名、结构体名和内联函数边界。本项目用三类证据降低误判：

- 字符串交叉引用：`reverse/xrefs/*_true.md`
- 原始 Ghidra 单函数文件：`reverse/decompiled/*/functions/`
- 人工恢复代码：`decompiled_src/`

对充电芯片型号、电池 ADC/电量算法的最终确认仍需要实物测量或 UART 日志。GPIO 表和 API 表见 `docs/GPIO_AND_API_MAP.md`。

## 10. 外部参考

- Espressif ESP32-C2 下载模式说明：<https://docs.espressif.com/projects/esp-hardware-design-guidelines/en/latest/esp32c2/download-guidelines.html>
- esptool ESP32-C2 Boot Mode Selection：<https://docs.espressif.com/projects/esptool/en/latest/esp32c2/advanced-topics/boot-mode-selection.html>
- ESP8684 Datasheet：<https://documentation.espressif.com/esp8684_datasheet_en.html>
- ESP32-C2 GPIO / strapping 文档：<https://docs.espressif.com/projects/esp-idf/en/latest/esp32c2/api-reference/peripherals/gpio.html>
