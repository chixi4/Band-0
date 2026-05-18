# 硬件突破与拆机验证手册

## 1. 当前判断

从固件和拆机图综合判断：

- 主控是 ESP8684 / ESP32-C2。
- 板上 USB-C 口大概率只接电源，或没有接到 USB-UART 桥。
- 拆机图上没有明显 CH340/CP210x/FTDI 这类 USB-UART 芯片。
- 蜂鸣器旁边一排金色测试点很可能是工厂测试/串口/下载焊盘。
- 后续最现实的突破路线是 **3.3V USB-UART + 测试点**，不是直接靠 USB-C。

已由固件定位的业务 GPIO：

| GPIO | 功能 |
|---:|---|
| 1 | 下键，active-low，长按确认 |
| 3 | EPD BUSY |
| 4 | EPD RESET |
| 5 | EPD CS |
| 6 | EPD SCLK |
| 7 | EPD MOSI/SDA |
| 8 | 上键，active-low，长按退出 |
| 10 | buzzer |
| 18 | shake/vibration input，上拉中断 |

完整证据表见 `docs/GPIO_AND_API_MAP.md`。UART0/BOOT/EN 仍需在板上实测。

## 2. 手头硬件怎么用

| 设备 | 是否优先 | 用法 |
|---|---:|---|
| 3.3V USB 转 UART | 最高 | 最直接接 ESP32-C2 UART0，读日志/烧录 |
| DAPLink | 中 | 如果带 USB CDC VCOM，可当 3.3V 串口用；SWD/JTAG 不一定适用 |
| Cardputer ADV | 中低 | 只有在能方便暴露 3.3V UART 桥时才推荐；不如专用 USB-UART 稳 |
| Xilinx 下载器 | 低 | 主要面向 FPGA/JTAG，不适合作为 ESP32-C2 下载首选 |
| 逻辑分析仪 | 高 | 找测试点 TX/RX、确认按键/屏幕 SPI 很有用 |
| 万用表 | 必须 | 找 GND、3V3、确认测试点是否直连芯片/电源 |

## 3. 串口焊盘定位步骤

断电状态：

1. 万用表蜂鸣档找 GND：USB-C 外壳、屏蔽罩、大面积地铜通常是 GND。
2. 通电后测测试点电压：稳定 3.3V 的点可能是 VCC，不要接 USB-UART 的 5V。
3. 找上电跳变点：开机瞬间有波形、空闲高电平的点可能是 UART TX。
4. 逻辑分析仪设 74880、115200、460800、921600 逐个尝试，先找 ROM boot log。
5. 找到 TX 后，再用 USB-UART 的 TX 通过 1k 串联电阻试探 RX。

连接规则：

| USB-UART | 设备测试点 |
|---|---|
| GND | GND |
| RXD | 设备 TX |
| TXD | 设备 RX |
| 3V3 | 一般不接，除非需要外部供电且确认电流足够 |
| 5V | 不接 ESP32-C2 IO |

## 4. ESP32-C2 下载模式

ESP32-C2/ESP8684 进入下载模式一般需要控制 strapping：

- GPIO9 低电平参与进入下载模式。
- GPIO8/GPIO9 的组合影响 boot mode。
- EN/CHIP_PU 拉低再拉高完成复位。

实际操作建议：

1. 先只接 GND/RX/TX，看能否读到启动日志。
2. 如果能读日志但不能烧录，再找 BOOT(GPIO9) 和 EN。
3. 手动下载流程：GPIO9 拉低，复位 EN，松开 EN，开始 `esptool`，再松开 GPIO9。
4. 成功烧录后要让 GPIO9 回到高电平或悬空，再复位进入 SPI Boot。

## 5. 推荐命令

先列串口：

```bash
ls /dev/tty.* /dev/cu.*
```

读芯片信息：

```bash
esptool.py --chip esp32c2 --port /dev/cu.usbserial-XXXX chip_id
```

完整备份 2 MB Flash：

```bash
esptool.py --chip esp32c2 --port /dev/cu.usbserial-XXXX \
  read_flash 0x0 0x200000 backup_full_flash.bin
```

只在确认备份后再写入：

```bash
esptool.py --chip esp32c2 --port /dev/cu.usbserial-XXXX \
  write_flash 0x0 build/firmware_1.2.5_hello_local_only_factory.bin
```

## 6. 拆机时重点找什么

| 目标 | 为什么重要 | 怎么验证 |
|---|---|---|
| ESP8684 具体封装/丝印 | 确认 flash 容量、芯片变种 | 拍高清微距 |
| USB-C D+/D- 是否走线 | 判断 USB-C 是否有数据能力 | 万用表追线到芯片/桥 |
| 6 个测试点 | 最可能包含 UART/BOOT/EN/GND/3V3 | 万用表 + 逻辑分析仪 |
| 屏幕 FPC | 验证 GPIO3/4/5/6/7 到屏幕 FPC 的走线 | 对照固件 JD79650 初始化；注意无独立 DC GPIO |
| 电池/充电 IC | 补齐电源管理型号 | 看丝印、查 datasheet |
| 按键焊盘 | 验证上键 GPIO8、下键 GPIO1 | 断电蜂鸣档追到芯片脚或电阻网络 |

## 7. 安全边界

- IO 只按 3.3V 对待。
- 不要把 USB-UART 的 5V 接到测试点。
- 不要同时由电池、USB-C、外部 3V3 多路强供电，除非确认电源路径。
- 第一次接线建议串 1k 电阻到可疑 RX/BOOT 点，避免误短。
- 写 flash 前必须先 `read_flash` 备份完整 2 MB。

## 8. 官方参考

- ESP32-C2 Download Guidelines: <https://docs.espressif.com/projects/esp-hardware-design-guidelines/en/latest/esp32c2/download-guidelines.html>
- esptool ESP32-C2 Boot Mode Selection: <https://docs.espressif.com/projects/esptool/en/latest/esp32c2/advanced-topics/boot-mode-selection.html>
- ESP8684 Datasheet: <https://documentation.espressif.com/esp8684_datasheet_en.html>
- ESP32-C2 GPIO 文档: <https://docs.espressif.com/projects/esp-idf/en/latest/esp32c2/api-reference/peripherals/gpio.html>
- ESP8684-DevKitC-02 引脚参考: <https://docs.espressif.com/projects/esp-dev-kits/en/latest/esp32c2/esp8684-devkitc-02/user_guide.html>
