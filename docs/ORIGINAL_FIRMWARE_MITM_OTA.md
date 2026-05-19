# 不改原固件的 MITM OTA 方案

目标：设备仍运行官方 `main.bin`，但在它检查更新时拦截 `firmware/query` 响应，让官方 updater 下载并写入我们的自定义 OTA app。

## 1. 可行性结论

可行，但有一个硬前提：设备必须接受被代理的 HTTPS 连接，或者至少不能强校验服务器证书链。

当前反编译证据偏乐观：

| 位置 | 证据 | 结论 |
|---|---|---|
| main `0x4201339a` | 固件查询 URL 是 `https://dot.mindreset.tech/api/authV2/panel/device/firmware/query` | 需要拦截这个 HTTPS 响应 |
| main `0x42013682` | OTA URL 由 `https://%s%s%s` 拼出 | 原固件大概率仍会请求 `https://os-cdn.mindreset.tech/<path>` |
| updater `0x4200706c` | `esp_https_ota_config_t` 中 timeout=15000、keep_alive=true、`skip_cert_common_name_check=true` | CDN 下载端对 MITM 更宽松 |
| updater raw decompile | 未看到 `cert_pem`、`crt_bundle_attach`、`use_global_ca_store` 被设置 | 没有发现固定 CA 证据 |

ESP-IDF 官方文档说明：HTTPS 若需要服务器验证，需要在 `esp_http_client_config_t` 中提供 `cert_pem` 或 `crt_bundle_attach`。所以实机上如果没有这类配置，mitmproxy 的自签证书链有机会通过；如果固件实际启用了 CA bundle，则不改固件的 TLS MITM 会失败。

## 2. 实现方式

脚本：`tools/mitm_ota_swap.py`

它做两件事：

1. 拦截 `firmware/query` JSON，把 `needUpdate` 强制改成 `true`，并把 `path`/`ota.path` 指向我们的 OTA 文件名。
2. 当设备请求 `os-cdn.mindreset.tech/*.bin` 时，mitmproxy 不再访问真实 CDN，而是直接返回本地自定义 OTA bin。

默认返回：

```text
build/firmware_1.2.5_hello_local_only_ota.bin
```

可通过环境变量切换：

```bash
MITM_CUSTOM_FIRMWARE=build/your_custom_esp32c2_ota.bin \
  mitmproxy -s tools/mitm_ota_swap.py --mode regular --listen-port 8080
```

## 3. 为什么不直接把 host 改成 192.168.4.2

原固件的 URL 构造函数里硬编码了 `https://%s%s%s`。如果只在响应里写 `http://192.168.4.2:8088/...`，原固件未必使用这个完整 `url` 字段；它更可能取 `path`，再用默认 CDN host 拼成 HTTPS URL。

所以对原固件最稳的 MITM 策略是：

- 响应里把 `path` 改成我们的文件路径。
- 保持下载 host 逻辑仍落到 `os-cdn.mindreset.tech`。
- 在代理层对 `os-cdn.mindreset.tech` 的 `.bin` 请求直接换成本地自定义固件。

这样不依赖原固件是否解析 `host` 或 `url` 字段。

## 4. 网络接入路线

推荐优先级：

| 方案 | 说明 | 风险 |
|---|---|---|
| 路由器透明代理 | 让设备连到你控制的 Wi-Fi，网关把 443 流量转给 mitmproxy | 最接近真实 OTA，配置稍麻烦 |
| macOS/Windows 热点 + NAT 重定向 | 电脑开热点，设备连接热点，电脑把 443 转给 mitmproxy | 课堂最可控 |
| DNS 指向本机 + 本机 443 | `dot.mindreset.tech`、`os-cdn.mindreset.tech` 指到本机 | 仍需 TLS 代理/证书可被接受 |

只改 hosts 文件对设备没有用，除非设备的 DNS 请求也经过你的机器。

## 5. 实机验证标准

成功链路应看到：

1. 设备触发“检查更新”。
2. mitmproxy 日志出现 `[OTA-SWAP] forced update path ...`。
3. 设备随后请求 `os-cdn.mindreset.tech/...bin`。
4. mitmproxy 日志出现 `[OTA-SWAP] served build/...ota.bin`。
5. updater 屏幕显示下载进度，最后 `Update Success`。
6. 重启后进入自定义 app。

失败判断：

| 现象 | 可能原因 |
|---|---|
| mitmproxy 完全看不到 HTTPS 请求 | 设备没走你的网关/代理 |
| 看到 CONNECT 但没有明文 URL | TLS 证书校验或透明代理模式没配好 |
| 查询能拦截但下载不走代理 | CDN 域名/DNS/NAT 未覆盖 |
| 下载完成后启动失败 | 自定义 OTA 不是 ESP32-C2 app image，或 checksum/hash/分区不匹配 |

## 6. 和后续自定义固件的关系

MITM 只负责“第一次把设备从官方 app 带到我们的 app”。自定义 app 装上以后，后续应该改成更稳定的自控链路：

- 设备 SoftAP 或 STA HTTP API 查看状态。
- `/api/ota/url` 写入 OTA URL，再复用原 updater 下载到 `main`。
- Web Bluetooth 推送 Claude payload。
- Wi-Fi dashboard 做日志、状态、配置、OTA 触发。

