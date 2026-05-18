# Dot. / Rand-0 脱云与本地化手册

> 目标：让设备核心功能尽量脱离官方云，并能在课堂上清楚解释“哪些已经本地化、哪些还需要进一步固件 patch”。

## 1. 官方云依赖面

固件里实际出现的云依赖主要有三类：

| 云能力 | 官方地址 | 用途 | 当前状态 |
|---|---|---|---|
| 固件查询 | `https://dot.mindreset.tech/api/authV2/panel/device/firmware/query` | 查询版本、返回 OTA 地址 | 已能本地模拟 |
| 固件下载 | `os-cdn.mindreset.tech` | 下载 OTA/factory/separate 包 | 已下载校验，可本地托管，已提供 HTTP patch |
| 图片转换 | `https://dot.mindreset.tech/api/authV2/device/render/convert` | 把图片转成电子纸 payload | 已完成协议还原，已提供网页 URL patch |
| 时间同步 | `ntp.aliyun.com`、`time.apple.com`、`pool.ntp.org` | Wi-Fi 校时 | 已提供本地 NTP patch 和 `tools/local_ntp.py` |

不依赖官方云、设备本来就具备的能力：

- Wi-Fi SoftAP 配网。
- 本地 `/wallpaper` 上传壁纸。
- 本地 `/wallpaper/info` 查询壁纸空间。
- BLE HID 翻页器。
- 离线内容库：答案/签语/MBTI/功德/设置等。

## 2. 本地壁纸转换

安装依赖：

```bash
python3 -m pip install -r requirements.txt
```

生成 Hello World：

```bash
python3 tools/local_render.py --text 'HELLO\nWORLD'
```

生成任意图片壁纸：

```bash
python3 tools/local_render.py --input path/to/image.png --kernel FLOYD_STEINBERG
```

输出文件：

| 文件 | 说明 |
|---|---|
| `build/hello_world_preview.png` | 200x200 预览图 |
| `build/hello_world_wallpaper.txt` | 可直接上传到设备 `/wallpaper` 的 base64 payload |
| `build/hello_world_wallpaper.json` | 兼容官方 API 返回结构的 JSON |

上传到设备：

```bash
curl --data-binary @build/hello_world_wallpaper.txt \
  -H 'Content-Type: application/octet-stream' \
  http://DEVICE_IP/wallpaper
```

查询壁纸状态：

```bash
curl http://DEVICE_IP/wallpaper/info
```

恢复默认壁纸：

```bash
curl -X DELETE http://DEVICE_IP/wallpaper
```

## 3. 本地云模拟服务

启动：

```bash
python3 tools/local_cloud.py --host 127.0.0.1 --port 8088 \
  --public-host 192.168.4.2:8088 \
  --firmware build/firmware_1.2.5_hello_local_only_ota.bin
```

如果使用默认 local-only 固件的本地 NTP patch，还需要在 `192.168.4.2` 上提供 UDP/123：

```bash
sudo python3 tools/local_ntp.py --host 0.0.0.0 --port 123
```

能力：

| 路径 | 说明 |
|---|---|
| `/api/authV2/device/render/convert` | 本地替代官方图片转换 API |
| `/render` | patched embedded web UI 使用的短路径 |
| `/api/authV2/panel/device/firmware/query` | 返回本地 OTA 信息 |
| `/fwq` | patched firmware 使用的短路径 |
| `/dot/firmware/rand_0/1/<firmware>` | 托管本地 OTA bin |

测试图片转换接口：

```bash
python3 tools/local_render.py --text 'HELLO\nWORLD'
```

测试固件查询接口：

```bash
curl -X POST http://127.0.0.1:8088/api/authV2/panel/device/firmware/query \
  -H 'Authorization: Bearer 2782772a1b8f6fb3065c050631185738de5999729682b44095d38f24d405e0e2' \
  -H 'Content-Type: application/json' \
  -d '{"status":"RELEASED","series":"rand","model":"rand_0","edition":1}'
```

注意：未修改固件访问的是 HTTPS 官方域名，要接入本地服务需要配合以下方法之一；如果使用第 5 节的 patched firmware，则不需要 TLS/MITM，直接访问 `/fwq` 和 `/render`。

- 路由器/DNS/hosts 把 `dot.mindreset.tech` 指向本机。
- mitmproxy 做 TLS 中间人与响应替换。
- 端口转发把设备访问的 443 转到本地服务或代理。
- 直接刷入第 5 节生成的 patched firmware，使其访问本地域名。

## 4. 本地 OTA 演示路线

已生成 Hello World OTA：

```text
build/firmware_1.2.5_hello_ota.bin
SHA256: 357c9cf541f929cee81e2a5f31e7b4a95931b9aa2fa4b052cfd0f9fb0bfb8ed1
```

课堂中可选两种演示：

| 方案 | 优点 | 风险 |
|---|---|---|
| 直接 USB 刷 `hello_local_only_factory.bin` | 最可控，不依赖官方云 | 需要串口/下载模式，必须先备份 |
| 本地云 + 已 patch 固件 OTA | 更能展示脱云 OTA | 需要先刷入 local-only 或 Hello+local-only app |
| 本地云 + MITM 引导原固件 OTA | 不改原固件即可证明链路 | 受证书、DNS、网络环境影响 |

推荐课堂主演示使用“本地壁纸 Hello World”，加分演示使用 `firmware_1.2.5_hello_local_only_ota.bin` 证明 URL 已经二进制 patch 到本地服务。

## 5. 已完成的完全脱云 patch

生成 cloud-only 版本：

```bash
python3 tools/patch_local_only_firmware.py
```

生成 Hello World + 脱云组合版本：

```bash
python3 tools/patch_local_only_firmware.py \
  --main build/firmware_1.2.5_hello_ota.bin \
  --main-out build/firmware_1.2.5_hello_local_only_ota.bin \
  --factory-out build/firmware_1.2.5_hello_local_only_factory.bin \
  --manifest-out build/hello_local_only_manifest.json
```

补丁内容：

| 原始内容 | 新内容 | 说明 |
|---|---|---|
| `https://dot.mindreset.tech/api/authV2/panel/device/firmware/query` | `http://192.168.4.2:8088/fwq` | 设备固件查询改为本地 |
| `os-cdn.mindreset.tech` | `192.168.4.2:8088` | OTA 下载 host 改为本机 |
| `https://%s%s%s` | `http://%s%s%s` | OTA 下载改走 HTTP |
| `render/convert` 官方 URL | `http://127.0.0.1:8088/render` | 设备内置网页的图片转换改为本地浏览器访问 |
| `ntp.aliyun.com` / `time.apple.com` / `pool.ntp.org` | `192.168.4.2` | 公共 NTP 改为本地 NTP |

已验证：

```bash
esptool.py --chip esp32c2 image_info build/firmware_1.2.5_local_only_ota.bin
esptool.py --chip esp32c2 image_info build/firmware_1.2.5_hello_local_only_ota.bin
```

两个 OTA app 的 ESP checksum 和 validation hash 都有效。

## 6. 后续源码化方向

当前已经完成二进制级脱云。要把它变成长期可维护固件，可以继续做四件事：

1. 重建等价 ESP-IDF 工程。
   把目前的可读反编译结果翻译成真正源码，彻底摆脱二进制字符串长度限制。

2. 把本地云服务嵌入局域网部署。
   用固定局域网 IP、mDNS 或路由器 DHCP reservation，避免 `192.168.4.2` 变化。

3. 增加本地签名/版本管理。
   给本地 OTA manifest 加版本、大小、hash 校验，课堂讲解会更完整。

4. 实物验证 UART/BOOT/EN。
   形成“反编译推断 -> 实测验证 -> 可刷写恢复”的闭环。

## 7. 课堂讲解口径

可以这样解释：

- 设备真正必须联网的部分不是显示和本地功能，而是 OTA 查询和官方图片渲染。
- 我们通过固件字符串、网页脚本和构造图片测试还原了图片 payload。
- 本地渲染器输出和官方 API 的关键字段一致，设备只需要 `COMPRESS_ARRAY_V2` 对应的 payload。
- 因此 Hello World 可以不经过官方服务器直接显示到屏幕上。
- OTA 云也已经能本地模拟，但未改原固件时仍需要 DNS/TLS 劫持；这是下一步二进制 patch 的目标。
