# Band-0 ESP-IDF SDK — Quote_0_ESP8684_IDF Rebuild

从零重建的 **Band-0 (Dot. / Rand/0)** 固件工程。

基于 `decompiled_src/` 的反编译恢复代码，重新实现的 **ESP-IDF v5.5.4** 工程，
支持 **ESP32-C2 / ESP8684** 芯片。

## 项目结构

```
sdk/
├── CMakeLists.txt           # 主项目（main app）
├── sdkconfig.defaults       # ESP32-C2 默认配置
├── partitions.csv           # 分区表（匹配原固件）
├── main/                    # 主应用组件
│   ├── include/             # 头文件
│   │   ├── app_config.h     # 全局类型、模式枚举、配置结构体
│   │   ├── gpio_key.h       # GPIO 按键扫描
│   │   ├── buzzer.h         # 蜂鸣器 PWM 驱动
│   │   ├── display_epd.h    # EPD 显示抽象层
│   │   ├── font_8x12.h      # 8x12 等宽 ASCII 字体
│   │   ├── wifi_config.h    # Wi-Fi 配网 + NVS 存储
│   │   ├── wallpaper.h      # 壁纸上传/管理
│   │   ├── cloud_ota.h      # 固件查询 + OTA 升级
│   │   ├── ui_render.h      # UI 渲染（各模式屏幕）
│   │   ├── ble_pager.h      # BLE HID 翻页器
│   │   └── nvs_utils.h      # NVS 配置 + wp 分区
│   ├── app_main.c           # 主入口 + 循环调度
│   ├── gpio_key.c           # 按键扫描实现
│   ├── buzzer.c             # 蜂鸣器实现
│   ├── display_epd.c        # 显示抽象层实现
│   ├── wifi_config.c        # Wi-Fi 配网实现
│   ├── wallpaper.c          # 壁纸管理实现
│   ├── cloud_ota.c          # OTA 查询 + 升级
│   ├── ui_render.c          # 各模式屏幕绘制
│   ├── ble_pager.c          # BLE HID 实现
│   └── nvs_utils.c          # NVS + wp 分区实现
├── components/
│   └── jd79650/             # JD79650 电子纸驱动
│       ├── CMakeLists.txt
│       ├── jd79650.c        # SPI 初始化、LUT、刷新
│       └── include/jd79650.h
└── updater/                 # 独立升级/恢复 app
    ├── CMakeLists.txt
    ├── sdkconfig.defaults
    ├── main/
    │   ├── CMakeLists.txt
    │   ├── updater_main.c   # 读取 OTA URL → 下载 → 写入 main → 重启
    │   └── epd_screen.c     # 升级进度显示
    └── include/
```

## 硬件配置

| 外设 | GPIO | 说明 |
|------|------|------|
| 上键 | GPIO8 | active-low，长按=退出 |
| 下键 | GPIO1 | active-low，长按=确认 |
| 蜂鸣器 | GPIO10 | PWM 输出 |
| EPD BUSY | GPIO3 | 输入，忙状态检测 |
| EPD RST | GPIO4 | 输出，复位 |
| EPD CS | GPIO5 | SPI CS |
| EPD SCLK | GPIO6 | SPI 时钟 |
| EPD MOSI | GPIO7 | SPI 数据 |

## 功能模式

| 模式 | 说明 |
|------|------|
| 答案之书 | 是非问答 |
| 电子签语 | 随机签语 |
| 功德计数 | 功德 +1 |
| BLE 翻页器 | PPT/媒体/阅读等 HID 模式 |
| 时钟 | 时间显示 + 状态栏 |
| MBTI 指南 | 16 型人格速览 |
| 设置 | 语言、休眠、蓝牙等 |

## 编译方法

### 1. 安装 ESP-IDF v5.5.4

```bash
mkdir -p ~/esp
cd ~/esp
git clone -b v5.5.4 --recursive https://github.com/espressif/esp-idf.git
cd esp-idf
./install.sh esp32c2
source ~/esp/esp-idf/export.sh
```

### 2. 编译主应用

```bash
cd sdk
idf.py set-target esp32c2
idf.py build
```

编译产物：
- `build/Quote_0_ESP8684_IDF.bin` — 主应用 OTA 镜像
- `build/bootloader/bootloader.bin` — 启动器
- `build/partition_table/partition-table.bin` — 分区表

### 3. 编译 Updater

```bash
cd sdk/updater
idf.py set-target esp32c2
idf.py build
```

编译产物：`build/Quote_0_Updater.bin`

### 4. 合并烧录

```bash
# 合并工厂镜像（2MB）
python3 tools/esp32_image.py merge \
  --chip esp32c2 \
  --output build/factory.bin \
  --flash-size 2MB \
  --flash-mode dio \
  --flash-freq 60m \
  build/bootloader/bootloader.bin:0x0 \
  build/partition_table/partition-table.bin:0x8000 \
  build/ota_data_initial.bin:0xd000 \
  build/Quote_0_ESP8684_IDF.bin:0x10000 \
  build/Quote_0_Updater.bin:0x150000

# 烧录
esptool.py --chip esp32c2 --port /dev/ttyUSB0 write_flash @flash_args
```

### 5. OTA 升级（通过本地云）

```bash
# 生成 Hello World 固件
python3 tools/patch_hello_world_ota.py --main build/Quote_0_ESP8684_IDF.bin

# 启动本地云
python3 tools/local_cloud.py \
  --host 0.0.0.0 --port 8088 \
  --public-host 192.168.4.2:8088 \
  --firmware build/firmware_1.2.5_hello_ota.bin

# 设备连上 Wi-Fi 后会自动检查更新，下载新固件并重启
```

## 添加新功能

1. 在 `main/include/` 添加头文件定义接口
2. 在 `main/` 添加 .c 实现
3. 编辑 `main/CMakeLists.txt` 添加源文件
4. 在 `app_main.c` 的 main 循环中调用
5. 可以用 `ui_render.c` 添加新的屏幕模式

示例：添加摇一摇震动检测

```c
// 1. 在 gpio_key.h 添加：
#define SHAKE_GPIO 18

// 2. 在 app_main.c 初始化：
gpio_config_t shake = {
    .pin_bit_mask = (1ULL << SHAKE_GPIO),
    .mode = GPIO_MODE_INPUT,
    .pull_up_en = GPIO_PULLUP_ENABLE,
    .intr_type = GPIO_INTR_POSEDGE,
};
gpio_config(&shake);

// 3. 在循环中检测：
if (gpio_get_level(SHAKE_GPIO) == 0) {
    LOGI("SHAKE detected!");
    // 触发签语抽选
}
```

## 与原固件的差异

| 方面 | 原固件 | 本重建 |
|------|--------|--------|
| 构建系统 | ESP-IDF v5.5.4 | ESP-IDF v5.5.4 |
| 芯片 | ESP8684/ESP32-C2 | ESP8684/ESP32-C2 |
| 云端地址 | `dot.mindreset.tech` | 可配置（默认 `192.168.4.2:8088`） |
| OTA 协议 | HTTPS | HTTP（可配 HTTPS） |
| 字体 | 专有比例字体 | 8x12 等宽位图字体 |
| BLE | Bluedroid | NimBLE（更省内存） |
| 壁纸格式 | COMPRESS_ARRAY_V2 (LZ4) | 兼容 COMPRESS_ARRAY_V2 |
| 分区表 | 匹配原厂 | 完全相同 |
