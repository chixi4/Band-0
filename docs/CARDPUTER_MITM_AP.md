# Cardputer ADV USB Bridge + MITM AP — 搭建文档

## 一、这是做什么的

用 **Cardputer ADV（ESP32-S3）** 做 Band-0 的本地控制节点：

- ADV 开 **2.4GHz 热点 `ADV 2.4G`**，Band-0 连这个热点。
- Mac 不再需要连 `ADV 2.4G`，Mac 继续用自己的 Wi-Fi/以太网/手机热点上外网。
- Mac 通过 USB CDC 串口控制 ADV。
- ADV 通过 Wi-Fi 访问 Band-0 的 HTTP API、托管 OTA 固件、触发 Band-0 updater。
- 旧的 DNS 劫持 + Mac `local_cloud.py` 路线保留为兼容/课堂讲解材料，但推荐主路线改为 USB 桥接。

### 整体架构

```
Mac
├─ 正常 Wi-Fi/以太网：继续访问外网
└─ USB CDC 串口：tools/adv_bridge.py 控制 ADV

Cardputer ADV
├─ SoftAP: ADV 2.4G / 192.168.4.1 / 密码 mitm1234
├─ HTTP: /fw.bin 托管 Band-0 OTA 固件
├─ HTTP proxy: 访问 Band-0 /api/status /api/usage /api/push /api/ota/url
└─ 临时 STA: 可连接 Band-0 Setup / 192.168.50.1 完成首次引导

Band-0
└─ 连接 ADV 2.4G 后，由 ADV 触发本地 OTA 和 Claude Usage 数据推送
```

### 为什么这样更稳

- Mac 不需要切 Wi-Fi，不会因为连 `ADV 2.4G` 断开外网。
- Band-0 下载 OTA 时只访问 `http://192.168.4.1/fw.bin`，不依赖 Mac IP、路由、VPN、代理。
- ADV 可以直接返回诊断状态，后续迭代不再依赖 UART。

---

## 二、文件结构

```
cardputer-ap-arduino/
├── platformio.ini           # PlatformIO 编译配置
├── partitions_8mb.csv       # 8MB 分区表，含 3MB SPIFFS 用于暂存 Band-0 OTA
├── src/
│   └── main.cpp             # ADV 2.4G AP + DNS + Web + USB bridge
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
- ESP32-S3 设备通过 USB 连接（本机当前枚举为 `/dev/cu.usbmodem12401`，重新插拔后端口号可能变化）

### 编译

```bash
cd /Users/yuookie/Documents/dev/Band-0/cardputer-ap-arduino
pio run
```

### 烧录 ADV

```bash
cd /Users/yuookie/Documents/dev/Band-0/cardputer-ap-arduino
pio run -e m5stack-cardputer -t upload --upload-port /dev/cu.usbmodem12401
```

当前工程已固定 `espressif32@6.7.0`，并显式使用 `partitions_8mb.csv`。如果遇到自动进 bootloader 失败，再按屏幕提示长按/短按 ADV 的 BOOT/RESET；不要擦 Band-0。

---

## 四、已实现的功能

| 功能 | 状态 | 说明 |
|------|------|------|
| 2.4GHz Wi-Fi 热点 `ADV 2.4G` | ✅ | 密码 `mitm1234`，信道 6 |
| DHCP 服务器 | ✅ | SoftAP 默认分配 192.168.4.x，Band-0 默认按 192.168.4.2 探测 |
| 网关 IP 192.168.4.1 | ✅ | 设备可 ping 通 |
| Web 配置页 http://192.168.4.1 | ✅ | 显示状态、配置 Mac IP、DNS 命中计数 |
| REST API /api/status | ✅ | 返回 SSID/Mac IP/AP IP/连接数/DNS 命中 |
| REST API /api/config POST | ✅ | 修改 Mac IP，并持久化到 NVS |
| REST API /fw.bin | ✅ | ADV 本地托管 Band-0 OTA 固件 |
| REST API /api/firmware/status | ✅ | 查看 ADV 已暂存固件大小和上传状态 |
| REST API /api/band/status | ✅ | ADV 代理访问 Band-0 `/api/status` |
| REST API /api/band/ota POST | ✅ | ADV 代理触发 Band-0 OTA |
| USB JSON bridge | ✅ | `tools/adv_bridge.py` 自动探测 ADV 串口并控制 |
| 首次引导 provision_ota | ✅ | ADV 临时连接 `Band-0 Setup`，写入 `ADV 2.4G` OTA 参数 |
| DNS 劫持 :53 | ✅ | 劫持 `dot.mindreset.tech` 等 |
| 串口日志 115200 | ✅ | 心跳 + DNS 日志 |
| USB CDC 串口 | ✅ | 当前枚举为 `/dev/cu.usbmodem12401`；重新插拔后端口号可能变化 |

### 当前验证状态

- ADV AP 固件已在本机编译并刷入 Cardputer ADV。
- 最新 ADV app 固件：`cardputer-ap-arduino/.pio/build/m5stack-cardputer/firmware.bin`，大小约 919 KB。
- Band-0 自定义主固件已用 ESP-IDF v5.5.4 编译通过：`sdk/build/Quote_0_ESP8684_IDF.bin`，大小约 835 KB。
- 这个 Band-0 完整功能版适合写入 `main` 分区（0x10000，大小 0x140000），但不能写入 `updater` 分区（0x150000，大小 0xA0000）。
- Band-0 自定义主固件内置 HTTP 调试 API：`/api/status`、`/api/usage`、`/api/push`、`/api/ota/url`。
- Band-0 自定义主固件还内置恢复/调试 API：`GET /api/ota/status`、`POST /api/mode`、`POST /api/reboot`。
- 自定义主固件不会自动查官方云并直接 OTA；更新必须由本地 API 显式写入 URL，再交给 updater。
- 2026-05-19 实机 UART 验证：自定义主固件可正常启动到 `All subsystems initialized`，按键、HTTP server、EPD init 均启动，无 `Guru Meditation` 重启。
- 当前源代码最新构建：`sdk/build/Quote_0_ESP8684_IDF.bin`，版本 `1.2.5-rebuilt-usage4`，大小 `826736` 字节，SHA256 `4cd654b748ca3f1b3c628e3a9f6f83c0f8a2258e1f725adf028050c4e7e61352`。
- 2026-05-19 实机 UART 验证：`usage3` 已刷入 Band-0 `main` 分区并正常启动，启动日志见 `logs/band0_usage3_boot.log`。
- `usage3` 修复项：Wi-Fi STA 初始化 race、主循环误清 OTA URL、断电后掉回 MBTI/空框、5 分钟休眠清屏、重启后用量数据丢失、首帧电子纸残影概率。
- `usage3` 断电重启验证：设备默认进入 `APP_MODE_CLAUDE_USAGE`，从 NVS 恢复上次 Claude 用量 payload，HTTP 状态显示 `transport=cache`、`stale=true`，随后桥接器同步后恢复 `transport=wifi`、`stale=false`。日志见 `logs/band0_usage3_reboot_cache.log`。
- 2026-05-19 网络 OTA 演练：`usage3` 通过 ADV 成功触发同版本 OTA，ADV 记录 `fw_download_count=1`、`fw_last_served_size=825696`，Band-0 回到 `usage3` 主程序，证明 URL 不再被提前清掉。
- `usage4` 修复项：为后续 OTA 增加 `armed_attempt` 标记，回到 main 后自动清理 OTA URL 和旧 `fail_reason`，避免状态页长期显示历史 `no_url`。
- 当前 ADV 已暂存 `usage3` 固件到 `/band0.bin`；`usage4` 上传到 80% 时 ADV USB CDC 重新枚举失败，尚未完成上传/OTA。重新插好 ADV USB 后继续上传 `usage4`。
- 每次重编 Band-0 固件后，都要重新执行 `adv_bridge.py upload` 再做网络 OTA；不要假设 ADV `/fw.bin` 已经是最新构建。
- 设备 fallback 调试热点为 `Band-0 Setup`，AP 地址 `192.168.50.1`。不要再用 `192.168.4.1` 访问 Band-0 自身；`192.168.4.1` 留给 Cardputer ADV MITM AP。

### DNS 劫持域名列表

```
dot.mindreset.tech     → Mac IP (默认 192.168.4.2)
os-cdn.mindreset.tech  → Mac IP
mindreset.tech          → Mac IP
www.mindreset.tech      → Mac IP
```

---

## 五、使用步骤

### 推荐主路线：Mac USB 控制 ADV，ADV 控制 Band-0

Mac 保持外网连接，不需要加入 `ADV 2.4G`。

#### 1. 确认 ADV 串口

```bash
cd /Users/yuookie/Documents/dev/Band-0
python3 tools/adv_bridge.py ports
python3 tools/adv_bridge.py status
```

成功时会返回 `"device":"adv-bridge"`、`"ssid":"ADV 2.4G"`、`"firmware_size"` 等字段。

#### 2. 上传 Band-0 OTA 固件到 ADV

```bash
python3 tools/adv_bridge.py upload sdk/build/Quote_0_ESP8684_IDF.bin --chunk-size 64
```

ADV 会把固件存为 `http://192.168.4.1/fw.bin`。

实测 USB CDC 在 824 KB 固件上传时，`64` 字节块比默认块更稳；如果未来 ADV 固件继续优化串口接收缓冲，可再调大。

#### 3A. 如果 Band-0 现在显示/开启 `Band-0 Setup`

让 ADV 临时去连 Band-0 的配置热点，并直接把 OTA 参数写进去：

```bash
python3 tools/adv_bridge.py provision-ota
```

这会向 `http://192.168.50.1/api/ota/url` 写入：

```json
{
  "url": "http://192.168.4.1/fw.bin",
  "ssid": "ADV 2.4G",
  "pwd": "mitm1234",
  "reboot": true
}
```

Band-0 会重启到 updater，连接 `ADV 2.4G`，从 ADV 下载 `/fw.bin`，写回 `main` 分区。

#### 3B. 如果 Band-0 已经连上 `ADV 2.4G`

直接让 ADV 代理触发 OTA：

```bash
python3 tools/adv_bridge.py band-status
python3 tools/adv_bridge.py ota-start
```

#### 4. 一条命令上传并触发

Band-0 仍在 `Band-0 Setup` 时：

```bash
python3 tools/adv_bridge.py install sdk/build/Quote_0_ESP8684_IDF.bin
```

Band-0 已经在 `ADV 2.4G` 时：

```bash
python3 tools/adv_bridge.py install --direct sdk/build/Quote_0_ESP8684_IDF.bin
```

注意：完整 Claude Usage 主固件必须让 updater 写到 `main` app 槽，不能误写到 640 KB 的 `updater` app 槽。

### 兼容路线：旧 DNS/MITM 模式

仍可让 Mac 连接 `ADV 2.4G`，运行 `tools/local_cloud.py` 或 mitmproxy，DNS 会把 `dot.mindreset.tech` 指向 Mac IP。这个模式适合讲“不改原固件的 MITM OTA”，但日常迭代推荐使用上面的 USB bridge 模式。

---

## 六、调试方法

### USB bridge 命令

```bash
python3 tools/adv_bridge.py status
python3 tools/adv_bridge.py band-status
python3 tools/adv_bridge.py band-get /api/ota/status
python3 tools/adv_bridge.py usage
python3 tools/adv_bridge.py band-post /api/mode --body '{"mode":"usage"}'
python3 tools/adv_bridge.py upload sdk/build/Quote_0_ESP8684_IDF.bin
python3 tools/adv_bridge.py provision-ota
```

`adv_bridge.py` 和 `tools/claude_usage_wifi_bridge.py` 共用 `/tmp/band0_adv_bridge_*.lock` 跨进程锁。网页桥和命令行可以同时开，但实际访问 ADV 串口会排队，避免 JSON 响应串线。

如果自动探测串口失败：

```bash
python3 tools/adv_bridge.py ports
python3 tools/adv_bridge.py --port /dev/cu.usbmodem12401 status
```

### 看串口日志

```bash
python3 -c "
import serial, time
ser = serial.Serial('/dev/cu.usbmodem12401', 115200, timeout=1)
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

Band-0 刷入自定义主固件并进入 `Band-0 Setup` 热点后：

```bash
# 查看设备状态和 Claude Usage 状态
curl http://192.168.50.1/api/status

# 推送一条 cardputer-claude-usage 兼容 payload，设备会自动切到 Claude Usage App
curl -X POST http://192.168.50.1/api/push \
  -H 'Content-Type: application/json' \
  -d '{"cu":42,"cr":58,"ri":"2h 10m","wu":68,"wr":32,"wi":"3d 4h","m":"sonnet","s":"live","src":"bridge"}'

# 切换到 Claude Usage App
curl -X POST http://192.168.50.1/api/mode \
  -H 'Content-Type: application/json' \
  -d '{"mode":"usage"}'

# 安排重启。只在 HTTP 可达但 UI/网络状态异常时使用
curl -X POST http://192.168.50.1/api/reboot -d '{}'

# 写入 updater 要读取的 OTA URL；reboot=true 时会切到 updater 并重启
curl -X POST http://192.168.50.1/api/ota/url \
  -H 'Content-Type: application/json' \
  -d '{"url":"http://192.168.4.2:8088/dot/firmware/rand_0/1/Quote_0_ESP8684_IDF.bin","ssid":"ADV 2.4G","pwd":"mitm1234","reboot":false}'
```

Mac 调试注意：

- 如果 `curl http://192.168.50.1/api/status` 走到 `utun`、代理或 VPN（`route -n get 192.168.50.1` 可查），先临时断开该代理/VPN，或手动给 Wi-Fi 直连 `Band-0 Setup`。
- 连上 `Band-0 Setup` 后 Mac 应获得 `192.168.50.x`，设备固定为 `192.168.50.1`。

### Claude Usage Wi-Fi 网页桥

推荐运行原项目桥接器作为 Claude 额度来源，再运行本项目的 Wi-Fi/ADV 传输桥：

```bash
# 终端 1：原项目，负责 Claude OAuth、缓存、/api/device-payload
cd /Users/yuookie/Documents/dev/cardputer/claude-usage-monitor/bridge
npm start

# 终端 2：本项目，负责网页控制 + ADV USB + Band-0 HTTP 推送
cd /Users/yuookie/Documents/dev/Band-0
python3 tools/claude_usage_wifi_bridge.py \
  --host 127.0.0.1 \
  --port 8788 \
  --adv-port /dev/cu.usbmodem12401
```

打开 `http://127.0.0.1:8788/` 后可做：

- 查看 Claude bridge、ADV USB、Band-0 IP、同步次数和错误。
- `Sync now`：读取原项目 `/api/device-payload` 并通过 ADV 推到 Band-0。
- `Push demo`：推送原项目 demo payload，用于无风险测试屏幕 UI。
- `Auto sync`：定时同步，Mac 仍保持自己的外网连接。
- `Open Usage app`：通过 ADV 调 Band-0 `/api/mode`，把屏幕切到 Usage App。

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

旧 DNS/MITM 模式会这样。推荐 USB bridge 模式：Mac 不连 `ADV 2.4G`，继续用自己的网络上外网，只用 USB 串口控制 ADV。

### 4. 连上热点后 Pi 连接断开

旧 DNS/MITM 模式会占用 Mac 的唯一 Wi-Fi 接口。USB bridge 模式不会占用 Mac Wi-Fi。
解决方案：测试时拔掉 USB 断开热点，或者用手机热点连 Mac。

### 5. Band-0 OTA 显示 `no URL`

**现象**：触发 OTA 后 updater 进入失败页，提示 `OTA update fail reason no URL returning to main`。

**原因**：`usage2` 的主循环读取到待处理 OTA 请求后调用了 `wifi_clear_ota_request()`，URL 在真正重启进入 updater 前已经被清掉。

**解决**：`usage3` 中主循环只记录“OTA 已暂存”，不再提前清除 NVS 请求；真正成功下载后由 updater 侧清理。已经跑在 `usage2` 的设备建议用 UART 刷一次 `usage3`，之后再验证网络 OTA。

### 6. 重启后黑屏、残字或只剩 MBTI 框

**现象**：刷完后曾经显示过 Claude Usage，但断电重启后只剩少量字符、`MBTI` 标题或空框。

**原因**：旧 NVS 可能保存了 `MBTI` 启动模式；旧版没有保存 Claude Usage payload；默认 300 秒休眠会清屏；电子纸首帧刷新偶发残影。

**解决**：`usage3` 启动时固定进入 Claude Usage App、禁用调试演示期自动清屏、把最近一次 payload 保存到 NVS，并在显示初始化后 8 秒追加一次重绘。实机断电重启已验证恢复缓存数据。

### 7. UART 刷写中途 `The chip stopped responding`

**现象**：460800 波特率下已识别 `ESP32-C2`，但写到 3% 左右失败。

**原因**：杜邦线/触点/GND/供电在写入期间抖动，或高速串口边沿不稳。此时通常只是 app 分区半写，不是变砖，因为 ROM 下载器仍可进入。

**解决**：保持 BOOT/GND/RX/TX 稳定，降到 115200 重新写 `0x10000` 主 app。2026-05-19 实测 115200 写入 `825696` 字节成功并通过 hash 校验。

---

## 八、后续优化方向

| 优化 | 说明 |
|------|------|
| 互联网转发 | ESP32-S3 只有 2.4GHz Wi-Fi；如需 Mac 同时联网，优先用 USB/以太网/第二网卡做上行 |
| STA+AP 同信道桥接 | 可研究让 ADV 连一个 2.4GHz 上游再开 AP，但会牺牲稳定性，不作为首选演示链路 |
| LCD 状态显示 | ESP-IDF 版已预留 LCD 状态面板；Arduino 实用版目前以 Web 控制台和串口日志为主 |
| 二维码配网 | 在 Web 页面生成 Wi-Fi 二维码方便手机扫码 |
| NVS 持久化 Mac IP | 已实现，断电不丢失配置 |
| 固件 OTA | Cardputer 自身也支持 OTA 升级 |
