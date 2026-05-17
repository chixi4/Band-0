# Dot. / Quote/0 逆向工程报告

> ESP32-C3 墨水屏信息面板完整逆向分析

---

## 目录

- [一、抓包分析](#一抓包分析)
- [二、服务器侦察](#二服务器侦察)
- [三、MITM 中间人攻击](#三mitm-中间人攻击)
- [四、API 破解](#四api-破解)
- [五、固件提取](#五固件提取)
- [六、固件反编译发现](#六固件反编译发现)
- [七、项目文件](#七项目文件)
- [八、可继续方向](#八可继续方向)

---

## 一、抓包分析

| 步骤 | 操作 | 成果 |
|------|------|------|
| 1.1 | `pktmon` 抓取热点流量 | 捕获 ESP32 全部通信 |
| 1.2 | 解析数据包 | 定位到设备 IP `192.168.137.46` |
| 1.3 | 提取 DNS 查询 | `ntp.aliyun.com` + `dot.mindreset.tech` |
| 1.4 | 分析 TLS 握手 | 96 字节紧凑 ClientHello，无 SNI → ESP32-C3 mbedTLS |
| 1.5 | MAC 地址溯源 | `8c:8c:29:57:3e:6c` = **Espressif (乐鑫)** 官方 OUI |

**结论**: 确认为 **ESP32-C3 (RISC-V)** 芯片，连接 `dot.mindreset.tech` 做固件检查

---

## 二、服务器侦察

| 步骤 | 操作 | 发现 |
|------|------|------|
| 2.1 | DNS 枚举 | 域名: `mindreset.tech`，DNS: DNSPod，邮箱: 飞书 |
| 2.2 | 端口扫描 | 80/443(nginx 1.29.7), 22(SSH) |
| 2.3 | TLS 证书 | `*.mindreset.tech` (Let's Encrypt, 2026-07-04 到期) |
| 2.4 | 网站分析 | **Next.js** 应用，Dot. / Quote/0 产品页，$49 USD |
| 2.5 | GitHub 侦查 | 开发者 `evnydd0sf`，20 个公开仓库（固件私有） |
| 2.6 | CDN 定位 | `os-cdn.mindreset.tech` → **腾讯云 COS** |

**结论**: 产品名为 **Dot. / Quote/0**，$49 墨水屏信息面板，固件存于腾讯云

---

## 三、MITM 中间人攻击

| 步骤 | 操作 | 成果 |
|------|------|------|
| 3.1 | 搭建 mitmproxy | 反向代理 `175.178.196.238:443` |
| 3.2 | hosts 劫持 | `dot.mindreset.tech` → 本机 |
| 3.3 | 端口转发 | `192.168.137.1:443` → mitmproxy:8080 |
| 3.4 | Host 头修正 | 把 `175.178.196.238` 改为 `dot.mindreset.tech` 解决 404 |
| 3.5 | 响应篡改 | 改 `needUpdate` 为 `true`，诱使 ESP32 下载固件 |
| 3.6 | OTA 抓包 | 捕获到固件下载服务器 `140.249.47.188` |

### MITM 核心脚本 `mitm_spoof.py`

```python
"""mitmproxy: Fix Host header + Spoof firmware response"""
import json
from mitmproxy import http

def request(flow: http.HTTPFlow) -> None:
    if "api/authV2/panel/device/firmware/query" in flow.request.pretty_url:
        flow.request.headers["Host"] = "dot.mindreset.tech"

def response(flow: http.HTTPFlow) -> None:
    if "api/authV2/panel/device/firmware/query" in flow.request.pretty_url:
        if "json" in flow.response.headers.get("Content-Type", ""):
            data = json.loads(flow.response.get_text())
            data["needUpdate"] = True
            data["updateVersion"] = "9.9.9"
            data["version"] = "9.9.9"
            flow.response.set_text(json.dumps(data, indent=2))
```

---

## 四、API 破解

### 发现的接口

| 端点 | 方法 | 功能 | 状态 |
|------|------|------|------|
| `/api/authV2/panel/device/firmware/query` | POST | 固件版本查询 | ✅ 完整破解 |
| `/api/authV2/device/render/convert` | POST | 图片渲染转换 | ✅ 新发现 |
| `/wallpaper` | POST | 上传壁纸到设备 | ✅ 本地端点 |
| `/wallpaper/info` | GET | 壁纸状态 | ✅ 本地端点 |
| `/wallpaper` | DELETE | 恢复默认壁纸 | ✅ 本地端点 |

### 认证信息

```
Token: 2782772a1b8f6fb3065c050631185738de5999729682b44095d38f24d405e0e2
来源:  固件硬编码
```

### 固件查询 API

**Request:**
```json
POST /api/authV2/panel/device/firmware/query
Authorization: Bearer 2782772a1b8f6fb3065c050631185738de5999729682b44095d38f24d405e0e2
Content-Type: application/json
User-Agent: ESP32 HTTP Client/1.0

{
    "status": "RELEASED",
    "series": "rand",
    "model": "rand_0",
    "edition": 1
}
```

**Response:**
```json
{
    "status": "RELEASED",
    "model": "rand_0",
    "edition": 1,
    "series": "rand",
    "version": "1.2.5",
    "needUpdate": false,
    "updateVersion": "1.2.5",
    "merged": {
        "path": "dot/firmware/rand_0/1/1.2.5_factory_99c3f5c449216185041b51c6023f86c4a5e17ef3e41f23913aae66002173af3d.bin",
        "sha256": "99c3f5c449216185041b51c6023f86c4a5e17ef3e41f23913aae66002173af3d",
        "size": 1932672
    },
    "ota": {
        "path": "dot/firmware/rand_0/1/1.2.5_ota_4aee9cff308a7496ac1f11d0be37376949b22ddcecdea333ceda120e672c872b.bin",
        "sha256": "4aee9cff308a7496ac1f11d0be37376949b22ddcecdea333ceda120e672c872b",
        "size": 1124256
    },
    "path": "dot/firmware/rand_0/1/1.2.5_separate_0554687ef72e4532a937eed85426ffe57ff1489ebe035eb810adc5bd30c6f50e.tgz",
    "sha256": "0554687ef72e4532a937eed85426ffe57ff1489ebe035eb810adc5bd30c6f50e",
    "size": 1079961,
    "needUpdate": false,
    "updateVersion": "1.2.5"
}
```

### 渲染 API

```json
POST /api/authV2/device/render/convert
Content-Type: application/json

{
    "series": "rand",
    "model": "rand_0",
    "edition": 1,
    "image": "data:image/png;base64,...",
    "colorLevels": 4,
    "ditherType": "DIFFUSION",
    "ditherKernel": "..."
}
```

---

## 五、固件提取

### 固件文件清单

| 文件 | 大小 | SHA256 | 用途 |
|------|------|--------|------|
| `firmware_1.2.5_ota.bin` | 1,124,256 B | `4aee9cff308a7496ac1f11d0be37376949b22ddcecdea333ceda120e672c872b` | OTA 升级镜像 |
| `firmware_1.2.5_factory.bin` | 1,932,672 B | `99c3f5c449216185041b51c6023f86c4a5e17ef3e41f23913aae66002173af3d` | 完整工厂固件 |
| `firmware_1.2.5_separate.tgz` | 1,079,961 B | `0554687ef72e4532a937eed85426ffe57ff1489ebe035eb810adc5bd30c6f50e` | 分区打包 |

### 服务端架构

```
CDN:      os-cdn.mindreset.tech → tencent-cos (腾讯云对象存储)
API:      175.178.196.238 → nginx/1.29.7 → Next.js
TLS 证书:  *.cdn.myqcloud.com (腾讯云 CDN 泛域名)
DNS:      DNSPod (腾讯云)
邮箱:     飞书 (mx1.feishu.cn)
```

---

## 六、固件反编译发现

### 硬件信息

| 项目 | 值 |
|------|-----|
| 芯片 | ESP32-C3 (RISC-V 单核) |
| 型号 | `rand_0` (系列: rand, 版本: 1) |
| MAC | `8C:8C:29:57:3E:6C` |
| 屏幕 | EPD 电子墨水屏 (4 级灰度) |
| 连接 | WiFi 2.4GHz + BLE 5.0 |
| 供电 | USB-C |
| 交互 | 2 个物理按键 (UP/DOWN) |
| 固件标题 | `Quote_0_ESP8684_IDF` |

### 固件版本

- **当前版本**: 1.2 (屏幕二维码下方显示)
- **最新版本**: 1.2.5

### 全部功能清单

| 功能 | 说明 |
|------|------|
| **Quote/0 每日箴言** | 505 条生活建议提示，每天随机显示（核心功能） |
| **时钟模式** | 数字时钟，Keeps time on screen |
| **待办事项** | 任务管理，支持清单/优先级 |
| **天气预报** | 天气信息展示 |
| **邮件管理** | 邮件提示与快速回复 |
| **自定义壁纸** | 图片上传 + 6 种抖动算法渲染 |
| **日历** | 日程管理 |
| **WiFi 配网** | AP 模式 `192.168.4.1` + 扫码配网 |
| **BLE 蓝牙配网** | 蓝牙低功耗配网 |
| **OTA 更新** | 在线固件升级 |
| **番茄钟** | 20 分钟任务片段 |
| **RSS/信息流** | GitHub PR / RSS 订阅聚合 |

### 图片渲染参数

```javascript
ditherKernel: [
    "DIFFUSION",           // 扩散抖动
    "DIFFUSION_2D",        // 2D 扩散
    "DIFFUSION_COLUMN",    // 列扩散
    "DIFFUSION_ROW",       // 行扩散
    "FLOYD_STEINBERG",     // Floyd-Steinberg 算法
    "JARVIS_JUDICE_NINKE"  // Jarvis 算法
]
colorLevels: 4  // 4 级灰度（墨水屏）
```

### 设备网络配置

| 配置 | 值 |
|------|-----|
| WiFi AP 模式 | `192.168.4.1` |
| 配网页面 | `http://192.168.4.1/connect` |
| WiFi 二维码格式 | `WIFI:T:WPA;S:%s;P:%s;;` |
| DNS | `114.114.114.114` |
| NTP 服务器 | `ntp.aliyun.com` / `time.apple.com` |
| CDN | `os-cdn.mindreset.tech` |
| API | `dot.mindreset.tech` |
| 固件查询间隔 | OTA 自动检查 |

### Quote/0 精选箴言摘录

设备内置了 **505 条** 生活建议，以下是部分示例：

- "Clear two small tasks before lunch; free your afternoon."
- "Check the weather once before planning to go out."
- "Don't let tasks grow in your head."
- "Break the task into twenty-minute pieces."
- "Finish the most meaningful task before errands."
- "Reply to one important caring message before lunch."
- "Before sleep, write tomorrow's one must-win point."
- "Build the 80-point version before upgrading it."

---

## 七、项目文件

```
D:\dev\Rand-0\
│
├── 核心工具
│   ├── analyze.py              ← Python 抓包分析器
│   ├── capture_hotspot.ps1     ← PowerShell 抓包脚本
│   ├── start_capture.bat       ← 抓包启动
│   ├── mitm_fix.bat            ← MITM 激活 (右键管理员运行)
│   ├── mitm_cleanup.bat        ← MITM 清理 (右键管理员运行)
│   └── mitm_spoof.py           ← MITM 响应篡改脚本
│
├── 固件 (全部已验证 SHA256)
│   ├── firmware_1.2.5_ota.bin      ← 1.1 MB OTA 升级镜像
│   ├── firmware_1.2.5_factory.bin  ← 1.9 MB 完整工厂镜像
│   └── firmware_1.2.5_separate.tgz ← 1.0 MB 分区打包
│
└── 抓包原始数据
    ├── hotspot_capture.etl/pcapng  ← 第一次行为抓包 (2126 包)
    └── ota_capture.etl/pcapng      ← OTA 下载抓包 (2659 包)
```

### 工具使用方法

**抓包:**
```
右键 start_capture.bat → 以管理员身份运行 → 连接设备 → 按 Enter 停止
```

**MITM 劫持:**
```
右键 mitm_fix.bat → 以管理员身份运行
打开浏览器 http://127.0.0.1:8081 查看 mitmweb 界面
连接设备 → 观察流量
完成后: 右键 mitm_cleanup.bat → 以管理员身份运行
```

**分析抓包:**
```
python analyze.py [pcapng文件路径]
```

---

## 八、可继续方向

| # | 方向 | 难度 | 说明 |
|---|------|------|------|
| A | **Ghidra 完整反编译** factory 固件 | ⭐⭐⭐ | 反汇编所有 RISC-V 代码，还原完整逻辑 |
| B | **自制 OTA 服务器** | ⭐⭐ | 用已知 Token + API 协议搭建本地更新服务 |
| C | **远程推图** | ⭐ | 通过渲染 API 直接推送自定义内容到设备 |
| D | **刷写自制固件** | ⭐⭐ | 用 esptool 把下载的固件刷到 ESP32-C3 |
| E | **硬件改装** | ⭐⭐⭐ | USB-TTL 串口读取完整 Flash + JTAG 调试 |

---

> 报告生成时间: 2026-05-17
> 项目路径: `D:\dev\Rand-0\`
