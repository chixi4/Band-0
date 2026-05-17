# Dot. / Rand-0 脱云与本地化手册

> 目标：让设备核心功能尽量脱离官方云，并能在课堂上清楚解释“哪些已经本地化、哪些还需要进一步固件 patch”。

## 1. 官方云依赖面

固件里实际出现的云依赖主要有三类：

| 云能力 | 官方地址 | 用途 | 当前状态 |
|---|---|---|---|
| 固件查询 | `https://dot.mindreset.tech/api/authV2/panel/device/firmware/query` | 查询版本、返回 OTA 地址 | 已能本地模拟 |
| 固件下载 | `os-cdn.mindreset.tech` | 下载 OTA/factory/separate 包 | 已下载并校验，可本地托管 |
| 图片转换 | `https://dot.mindreset.tech/api/authV2/device/render/convert` | 把图片转成电子纸 payload | 已完成协议还原，可完全本地生成 |

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
python3 tools/local_cloud.py --host 127.0.0.1 --port 8088
```

能力：

| 路径 | 说明 |
|---|---|
| `/api/authV2/device/render/convert` | 本地替代官方图片转换 API |
| `/api/authV2/panel/device/firmware/query` | 返回本地 OTA 信息 |
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

注意：原固件访问的是 HTTPS 官方域名。未修改固件要接入本地服务，需要配合以下方法之一：

- 路由器/DNS/hosts 把 `dot.mindreset.tech` 指向本机。
- mitmproxy 做 TLS 中间人与响应替换。
- 端口转发把设备访问的 443 转到本地服务或代理。
- 进一步二进制 patch 固件中的 URL，使其访问本地域名。

## 4. 本地 OTA 演示路线

已生成 Hello World OTA：

```text
build/firmware_1.2.5_hello_ota.bin
SHA256: 357c9cf541f929cee81e2a5f31e7b4a95931b9aa2fa4b052cfd0f9fb0bfb8ed1
```

课堂中可选两种演示：

| 方案 | 优点 | 风险 |
|---|---|---|
| 直接 USB 刷 `hello_factory.bin` | 最可控，不依赖网络 | 需要串口/下载模式，必须先备份 |
| 本地云 + MITM 引导 OTA | 更能展示脱云 OTA | 受证书、DNS、网络环境影响 |

推荐课堂主演示使用“本地壁纸 Hello World”，备用演示使用 USB 刷写。OTA 脱云作为原理展示和加分项说明。

## 5. 后续完全脱云 patch 方向

当前脱云已完成图片转换和本地服务原型。要做到更彻底，可以继续做四件事：

1. Patch 图片转换 API。
   将固件内 `https://dot.mindreset.tech/api/authV2/device/render/convert` 改为本地可控地址。注意新字符串不能比原字符串长，或者需要重定位/重建镜像。

2. Patch 固件查询 API。
   将 `firmware/query` 指向本地服务，或者保留路径只改域名。

3. Patch CDN host。
   将 `os-cdn.mindreset.tech` 改为本地域名，并在本地 HTTP/HTTPS 服务托管 OTA。

4. 固化本地根证书或改用 HTTP。
   如果保留 HTTPS，需要处理证书校验；如果改 HTTP，需要确认 ESP-IDF HTTP client 配置路径。

## 6. 课堂讲解口径

可以这样解释：

- 设备真正必须联网的部分不是显示和本地功能，而是 OTA 查询和官方图片渲染。
- 我们通过固件字符串、网页脚本和构造图片测试还原了图片 payload。
- 本地渲染器输出和官方 API 的关键字段一致，设备只需要 `COMPRESS_ARRAY_V2` 对应的 payload。
- 因此 Hello World 可以不经过官方服务器直接显示到屏幕上。
- OTA 云也已经能本地模拟，但未改原固件时仍需要 DNS/TLS 劫持；这是下一步二进制 patch 的目标。

