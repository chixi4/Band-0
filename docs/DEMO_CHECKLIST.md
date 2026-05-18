# 课堂演示清单

## 1. 先展示逆向证据

```bash
python3 tools/firmware_report.py
esptool.py --chip esp32c2 image_info extracted/main.bin
```

讲解重点：

- 芯片是 ESP32-C2/ESP8684，不是 ESP32-C3。
- `main.bin` 是主应用，`updater.bin` 是恢复升级应用。
- Flash 是 2 MB，`wp` 分区是自定义壁纸。
- 屏幕字符串明确出现 JD79650 200x200 BW。

## 2. 展示完整反编译代码

```bash
wc -l reverse/decompiled/main_fresh/all_functions.c \
  reverse/decompiled/updater/all_functions.c

sed -n '1,80p' decompiled_src/main/app_main_recovered.c
sed -n '1,120p' decompiled_src/main/gpio_key_map_recovered.c
sed -n '1,120p' decompiled_src/updater/epd_jd79650_recovered.c
```

讲解重点：

- `reverse/decompiled/*/all_functions.c` 是 Ghidra 全量反编译，不是只挑字符串。
- `decompiled_src/` 是人工命名后的可读恢复代码，用来讲功能流程。
- 真实固件地址和 Ghidra 地址差 `0x10000`，已在 `docs/DECOMPILATION_REPORT.md` 说明。
- 可以用 `reverse/xrefs/main_string_addr_xrefs_true.md` 证明每个关键函数的字符串证据。
- GPIO 总表在 `docs/GPIO_AND_API_MAP.md`：上键 GPIO8、下键 GPIO1、EPD GPIO3/4/5/6/7、buzzer GPIO10、shake GPIO18。

## 3. 展示 Hello World 壁纸

```bash
python3 tools/local_render.py --text 'HELLO\nWORLD'
open build/hello_world_preview.png
```

如果设备已联网：

```bash
curl --data-binary @build/hello_world_wallpaper.txt \
  -H 'Content-Type: application/octet-stream' \
  http://DEVICE_IP/wallpaper
```

讲解重点：

- 这是本地生成，不调用官方 `render/convert`。
- payload 是 LZ4 block，解压后是 200x200、2bpp、10,000 字节。
- 这证明壁纸链路已经脱云。

## 4. 展示 Hello World 固件补丁

```bash
python3 tools/patch_hello_world_ota.py
esptool.py --chip esp32c2 image_info build/firmware_1.2.5_hello_ota.bin
```

讲解重点：

- 只做保守字符串 patch，不破坏段布局。
- 脚本自动修复 ESP checksum 和 SHA-256 footer。
- `esptool.py image_info` 显示校验有效。

## 5. 展示本地云原型

启动：

```bash
python3 tools/local_cloud.py --host 127.0.0.1 --port 8088 \
  --public-host 192.168.4.2:8088 \
  --firmware build/firmware_1.2.5_hello_local_only_ota.bin
```

完全离线校时时另开一个终端：

```bash
sudo python3 tools/local_ntp.py --host 0.0.0.0 --port 123
```

另一个终端测试：

```bash
curl -X POST http://127.0.0.1:8088/api/authV2/panel/device/firmware/query \
  -H 'Authorization: Bearer 2782772a1b8f6fb3065c050631185738de5999729682b44095d38f24d405e0e2' \
  -H 'Content-Type: application/json' \
  -d '{"status":"RELEASED","series":"rand","model":"rand_0","edition":1}'
```

展示短路径：

```bash
curl -X POST http://127.0.0.1:8088/fwq \
  -H 'Content-Type: application/json' \
  -d '{"status":"RELEASED","series":"rand","model":"rand_0","edition":1}'
```

讲解重点：

- 官方 OTA 查询和图片转换两个端点已经有本地替代。
- 未改原固件时，需要 DNS/TLS 代理才能让设备访问本地服务。
- 已 patch 固件直接访问 `http://192.168.4.2:8088/fwq`，OTA 下载也改成 HTTP 本地地址，公共 NTP 也改到 `192.168.4.2`。

## 6. 展示完全脱云补丁

```bash
python3 tools/patch_local_only_firmware.py
python3 tools/patch_local_only_firmware.py \
  --main build/firmware_1.2.5_hello_ota.bin \
  --main-out build/firmware_1.2.5_hello_local_only_ota.bin \
  --factory-out build/firmware_1.2.5_hello_local_only_factory.bin \
  --manifest-out build/hello_local_only_manifest.json

esptool.py --chip esp32c2 image_info build/firmware_1.2.5_hello_local_only_ota.bin
```

讲解重点：

- 固件查询 API、CDN host、OTA scheme、网页 render API、公共 NTP 都已 patch。
- patch 只缩短字符串，不移动段；脚本修复 ESP checksum/hash footer。
- 组合版既能显示 Hello World，又不再依赖官方云。

## 7. 备选 USB 刷写

只对自己的实验设备操作，先备份：

```bash
esptool.py --chip esp32c2 --port /dev/ttyUSB0 read_flash 0x0 0x200000 backup_full_flash.bin
```

刷 Hello World 工厂镜像：

```bash
esptool.py --chip esp32c2 --port /dev/ttyUSB0 write_flash 0x0 build/firmware_1.2.5_hello_local_only_factory.bin
```

如果课堂时间紧，优先用壁纸上传方案，USB 刷写作为备用。
