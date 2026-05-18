# Cardputer ADV MITM AP — 搭建文档

## 一、这是做什么的

用 **Cardputer ADV（ESP32-S3）** 开一个 **2.4GHz 热点**，让 Band-0 设备和 Mac 处在同一个局域网，
配合 DNS 劫持 + Mac 上的 `local_cloud.py`，实现**不改原固件的 MITM OTA 攻击**。

### 整体架构

```
Band-0 (ESP32-C2)
    │ 2.4GHz Wi-Fi 连热点
    ▼
Cardputer ADV (ESP32-S3) ── 热点 "adv-2.4G" (192.168.4.1)
    │                      ── DNS 劫持 dot.mindreset.tech → Mac IP
    │                      ── Web 配置页 http://192.168.4.1
    │                      ── 串口日志 115200 baud
    ▼
Mac ── 连上热点，获得 IP (如 192.168.4.2)
    │  运行 local_cloud.py 提供魔改固件
    │  运行 mitmproxy (可选)
    ▼
Band-0 检查更新 → DNS 指向 Mac → 下载魔改固件 → 重启 ✅
```

### 不需要外网

这个热点是纯内网的，不需要接互联网。它只负责：
- 让 Band-0 和 Mac 在同一个二层网络
- 劫持 DNS 把目标域名指向 Mac
- 提供 Web 页面配置

---

## 二、文件结构

```
cardputer-ap-arduino/
├── platformio.ini           # PlatformIO 编译配置
├── partitions_8mb.csv       # 分区表（未使用，实际用 claude-usage 的）
├── src/
│   └── main.cpp             # 完整固件源码（~200 行）
└── .pio/build/
    └── m5stack-cardputer/
        ├── bootloader.bin    # bootloader（未使用）
        ├── partitions.bin    # 分区表
        └── firmware.bin      # 编译出的固件
```

---

## 三、编译与烧录

### 前提

- PlatformIO Core 6.1.19（已安装）
- `espressif32@6.7.0` 平台（已安装）
- ESP32-S3 设备通过 USB 连接（`/dev/tty.usbmodem11201`）

### 编译

```bash
cd /Users/yuookie/Documents/dev/Band-0/cardputer-ap-arduino
pio run
```

### 烧录（重要！必须用 claude-usage-monitor 的 bootloader）

```bash
CLAUDE_PIO="/Users/yuookie/Documents/dev/cardputer/claude-usage-monitor/firmware/.pio/build/m5stack-cardputer"

esptool --chip esp32s3 --port /dev/tty.usbmodem11201 --baud 115200 \
  write-flash -z \
  0x0 "$CLAUDE_PIO/bootloader.bin" \
  0x8000 "$CLAUDE_PIO/partitions.bin" \
  0x10000 .pio/build/m5stack-cardputer/firmware.bin
```

**关键踩坑**：不能用 PlatformIO 自己生成的 bootloader，否则 ONIX XI1 这个设备会无限 `TG0WDT_SYS_RST` 重启。
必须用 claude-usage-monitor 项目（`espressif32@6.7.0`）编译出的 bootloader。

---

## 四、已实现的功能

| 功能 | 状态 | 说明 |
|------|------|------|
| 2.4GHz Wi-Fi 热点 `adv-2.4G` | ✅ | 密码 `mitm1234`，信道 6 |
| DHCP 服务器 | ✅ | IP 池 192.168.4.10-50 |
| 网关 IP 192.168.4.1 | ✅ | 设备可 ping 通 |
| Web 配置页 http://192.168.4.1 | ✅ | 显示状态、配置 Mac IP |
| REST API /api/status | ✅ | 返回 SSID/Mac IP/连接数 |
| REST API /api/config POST | ✅ | 修改 Mac IP |
| DNS 劫持 :53 | ✅ | 劫持 `dot.mindreset.tech` 等 |
| 串口日志 115200 | ✅ | 心跳 + DNS 日志 |
| USB CDC 串口 | ✅ | `/dev/cu.usbmodem11201` |

### DNS 劫持域名列表

```
dot.mindreset.tech     → Mac IP (默认 192.168.4.2)
os-cdn.mindreset.tech  → Mac IP
mindreset.tech          → Mac IP
www.mindreset.tech      → Mac IP
```

---

## 五、使用步骤

### 第一步：通电

Cardputer ADV 插 USB，等待 5 秒启动。

### 第二步：Mac 连热点

Wi-Fi 设置 → 选择 `adv-2.4G` → 密码 `mitm1234`
Mac 会自动获得 IP `192.168.4.x`（通常是 `.2`）

### 第三步：配置 Mac IP

浏览器打开 `http://192.168.4.1`
→ 确认显示的 Mac IP 正确
→ 如果不正确，输入正确的 IP 并保存

### 第四步：Mac 上启动本地云

```bash
cd /Users/yuookie/Documents/dev/Band-0
python3 tools/local_cloud.py \
  --host 0.0.0.0 --port 8088 \
  --public-host 你Mac的IP:8088 \
  --firmware build/firmware_1.2.5_hello_ota.bin
```

### 第五步：Band-0 连热点

Band-0 设备连接 `adv-2.4G`，触发 OTA 检查。
DNS 自动把 `dot.mindreset.tech` → Mac IP。
Mac 返回 `needUpdate:true` + 魔改固件地址。
Band-0 下载魔改固件 → 重启 ✅

---

## 六、调试方法

### 看串口日志

```bash
python3 -c "
import serial, time
ser = serial.Serial('/dev/cu.usbmodem11201', 115200, timeout=1)
time.sleep(2)
ser.reset_input_buffer()
while True:
    try:
        line = ser.readline()
        if line:
            print(line.decode('utf-8','replace').strip())
    except:
        break
"
```

### 测试 API

```bash
curl http://192.168.4.1/api/status

# 修改 Mac IP
curl -X POST http://192.168.4.1/api/config \
  -H 'Content-Type: application/json' \
  -d '{"mac_ip":"192.168.4.5"}'
```

### 测试 DNS

```bash
python3 -c "
import socket
q = b'\x00\x01\x01\x00\x00\x01\x00\x00\x00\x00\x00\x00' + \
    b'\x03dot\x0amindreset\x04tech\x00\x00\x01\x00\x01'
s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.settimeout(3)
s.sendto(q, ('192.168.4.1', 53))
try:
    d, a = s.recvfrom(512)
    ip = '.'.join(str(b) for b in d[-4:])
    print(f'DNS OK: dot.mindreset.tech → {ip}')
except socket.timeout:
    print('DNS 超时')
"
```

---

## 七、踩坑记录

### 1. Bootloader 不兼容

**现象**：刷入后设备 `TG0WDT_SYS_RST` 不断重启。

**原因**：ONIX XI1 的 ESP32-S3 rev v0.2 与 PlatformIO `espressif32@6.0.0` 生成的 bootloader 不兼容。

**解决**：用 claude-usage-monitor 项目（`espressif32@6.7.0`）的 bootloader。

### 2. erase_flash 后需要重写分区表

**现象**：刷入 bootloader 后无输出。

**原因**：`erase_flash` 擦除了所有内容，包括分区表，bootloader 找不到 app。

**解决**：同时写 bootloader + partitions + app 三个文件。

### 3. Mac 连上热点后断网

**设计如此**：热点是纯内网的。如果需要 Mac 同时上外网，可以用 USB 共享或连另一个 Wi-Fi 网卡。

### 4. 连上热点后 Pi 连接断开

**设计如此**：热点占用了 Mac 的唯一 Wi-Fi 接口，导致 agent 离线。
解决方案：测试时拔掉 USB 断开热点，或者用手机热点连 Mac。

---

## 八、后续优化方向

| 优化 | 说明 |
|------|------|
| 互联网转发 | 让 Cardputer 同时连 5GHz Wi-Fi 做上行，2.4GHz 做 AP |
| 5GHz STA + 2.4GHz AP 双频 | ESP32-S3 支持双频并发 |
| LCD 状态显示 | 在 Cardputer 屏幕上显示连接设备数、DNS 命中数 |
| 二维码配网 | 在 Web 页面生成 Wi-Fi 二维码方便手机扫码 |
| NVS 持久化 Mac IP | 断电不丢失配置 |
| 固件 OTA | Cardputer 自身也支持 OTA 升级 |
