# Band-0 最后一次线刷执行计划

## 2026-05-20 执行结果

计划已执行并通过验证。当前实机运行 `1.2.5-rebuilt-baseline10`：

- 最后一次 UART 固定偏移线刷成功，包含 main 和修复后的 updater。
- 修复 updater 栈溢出后，已完成 ADV 网络 OTA 到 `baseline10`。
- 默认底座状态：Wi-Fi/HTTP/OTA 可用、蜂鸣器静音、BLE 不自启、`health=ok`、heap 约 40 KB。
- 后续日常迭代走 ADV 网络 OTA；只有 Wi-Fi/HTTP 和 BLE 都不可用，或需要改 bootloader/partition/updater 时，才重新接 UART。

## 目标一句话

只线刷一次稳定的本地控制底座，让设备之后能靠网络/BLE安全迭代、OTA恢复和运行 Claude Usage，不再依赖反复拆机接 UART。

## 核心原则

- 不把 `usage4` 当最终目标；`usage4` 只是一个修 OTA 状态的中间补丁。
- 最终要刷的是 `baseline` 固件：包含 Usage、网络 OTA、BLE 数据通道、恢复入口、状态诊断。
- 在 `baseline` 没达到验收门槛前，不让用户再次线刷。
- 最后一次线刷后，UART 线可以撤；后续只在 Wi-Fi 和 BLE 都失效时才重新接 UART。

## 用户只需要配合的动作

全流程尽量压缩成 3 次人工动作：

1. 现在或后续：把 ADV USB 重新插回，让 Mac 能看到 ADV 串口。
2. 最终线刷时：按提示接 BOOT 到 GND，上电一次；刷完后移除 BOOT，正常上电一次。
3. 最终验收后：确认屏幕显示正常，然后拔掉 UART 杜邦线。

除此之外，构建、上传、OTA、日志、状态检查都由我来跑。

## 最终 baseline 必须包含的能力

### 1. Claude Usage 主功能

- 默认进入 Claude Usage App。
- 支持 ADV/Wi-Fi 推送 usage payload。
- 支持 BLE GATT 直连推送 usage payload。
- 断电后保留最后一次 usage cache。
- 没有网络时显示 cached/stale，不回到空白或 MBTI 框。

### 2. 网络控制底座

必须有这些 HTTP API：

```text
GET  /api/status
GET  /api/usage
POST /api/push
POST /api/mode
POST /api/reboot
POST /api/ota/url
GET  /api/ota/status
GET  /api/health
GET  /api/debug/heap
```

验收要求：

- `/api/status` 能看到 firmware、mode、uptime、Wi-Fi、usage、OTA 状态。
- `/api/health` 能给出一眼判断：`ok/degraded/recovery_needed`。
- `/api/debug/heap` 能辅助判断 BLE + Wi-Fi + HTTP 是否有内存风险。

### 3. OTA 安全链路

baseline 必须做到：

- OTA 前保存 `attempt_id`、URL、SSID、SHA/大小信息。
- 触发 updater 前写 `armed_attempt`。
- 回到 main 后自动清理 URL 和旧 `fail_reason`。
- 成功后状态页显示 success，不再残留历史 `no_url`。
- 拒绝明显错误的 OTA URL 或空 URL。
- ADV 暂存固件 SHA 不匹配时，不触发 OTA。

### 4. BLE 备用通道

最小可接受 BLE 能力：

```text
Device name: Band-0 Usage
GATT service: Claude Usage service
write char: 写入 compact JSON
notify/read char: 返回 status 摘要
```

第一版 BLE 不做 OTA，不做大文件传输，只承担：

- 没有 ADV 时，从电脑直接推 Claude usage。
- Wi-Fi 不通时，至少能读到设备状态或写入一个测试 payload。

### 5. 设备恢复入口

至少保留这些恢复手段：

- Wi-Fi 可达时：HTTP 切模式、清 OTA 状态、重启。
- BLE 可达时：写入 `cmd=status` / `cmd=usage` / `cmd=reboot`。
- 按键安全入口：开机后上/下键组合触发 safe display 或 Setup/Usage 页面。
- UART ROM：最后兜底，不作为日常路径。

### 6. 屏幕稳定性

baseline 需要保留：

- 默认 Usage App。
- 禁用调试演示期自动清屏。
- 启动后延迟重绘。
- 显示诊断页或至少可通过 API 触发 redraw。

## 实施阶段

### 阶段 A：不碰设备，先把 baseline 写完整

我负责：

- 把 `usage4` 的 OTA cleanup 合并进 baseline。
- 增加 `/api/health`、`/api/debug/heap`。
- 增加 BLE GATT 最小 usage write/status notify。
- 增加刷前固件 manifest：版本、大小、SHA、目标分区。
- 增加 OTA 触发前的 SHA/大小检查。
- 增加网络/蓝牙状态字段。

用户无需操作。

进入下一阶段的门槛：

```text
[ ] idf.py build 通过
[ ] main app 小于 main 分区
[ ] 编译产物 SHA 已记录
[ ] 静态检查没有明显 panic 点
[ ] 不再新增需要拆机验证的硬件假设
```

### 阶段 B：不刷 Band-0，先验证 ADV 和工具链

我负责：

- 等 ADV 重新枚举。
- 测 `adv_bridge.py status` 稳定性。
- 测 `upload` 不掉线。
- 如果上传仍掉线，先修 `adv_bridge.py` 的重试/重新枚举逻辑。
- 确认 ADV `/band0.bin` 里的固件大小和 SHA 与本地一致。

用户只需要：

- 把 ADV USB 插回。

进入下一阶段的门槛：

```text
[ ] ADV 串口可见
[ ] ADV status 连续多次稳定
[ ] baseline 固件完整上传 ADV
[ ] ADV status 显示 firmware_size 和 SHA 正确
[ ] 没有触发 Band-0 OTA
```

### 阶段 C：如果网络 OTA 可用，先不用线刷

如果 Band-0 当前 `usage3` HTTP 可达：

- 先用 ADV 走网络 OTA 升到 baseline。
- 这样可能连最后一次 UART 线刷都省掉。

但只有在这些条件都满足时才走：

```text
[ ] Band-0 /api/status 可达
[ ] 当前固件是 usage3 或更高
[ ] ADV /fw.bin SHA 正确
[ ] UART 救援线当前仍可用作为兜底
```

如果网络 OTA 成功，线刷计划结束，UART 可以撤。

如果网络 OTA 失败但 ROM 还可进，再进入阶段 D。

### 阶段 D：最后一次 UART 线刷 baseline

这是唯一需要用户较多配合的一步。

用户动作：

1. 保持 UART GND/RX/TX。
2. BOOT/GPIO9 通过 10K 接 GND。
3. 按我提示给 Band-0 上电。
4. 写入开始后保持线不动。
5. 出现 `Hash of data verified` 后，移除 BOOT 到 GND。
6. 正常断电上电。

我负责：

- 用 115200 稳定写入。
- 固定写完整底座包：bootloader、partition、otadata、main、updater。
- 不擦全片。
- 不覆盖 NVS、PHY、用户缓存和 key 分区。
- 写完立刻抓启动日志。

写入偏移固定为：

```text
0x000000 bootloader
0x008000 partition table
0x00d000 otadata initial
0x010000 main baseline1
0x150000 updater/recovery app
```

执行入口固定为：

```bash
python3 tools/flash_baseline1.py --port /dev/cu.usbmodem5B7B0549671
```

禁止使用 `sdk/updater` 工程提示的 `idf.py flash`，因为那个命令会把 updater app 写到 `0x10000`，覆盖 main。

通过标准：

```text
[ ] esptool 识别 ESP32-C2
[ ] 写入 100%
[ ] Hash of data verified
[ ] 启动日志显示 baseline 版本
[ ] display ready
[ ] HTTP debug API started
[ ] 无 panic / abort / watchdog loop
```

### 阶段 E：最终验收

线刷或网络 OTA 后必须一次性跑完这些验收：

```text
[ ] /api/status HTTP 200
[ ] firmware = baseline 版本
[ ] mode = Claude Usage
[ ] usage cache 可显示
[ ] ADV/Wi-Fi push 真实 Claude usage 成功
[ ] 断电重启后仍显示 cached usage
[ ] OTA status 没有历史 no_url
[ ] ADV 网络 OTA 做一次小版本验证或同版本验证
[ ] BLE 扫描能看到 Band-0 Usage
[ ] BLE 写 demo payload 后屏幕/状态更新
[ ] /api/debug/heap 显示内存余量正常
```

全部通过后：

- 用户可以拔掉 UART 杜邦线。
- 后续日常迭代只走 ADV 网络 OTA 或 BLE 数据推送。

## 之后怎么迭代

### 日常改 UI / Claude Usage

```text
build -> ADV upload -> SHA check -> ota-start -> /api/status 验收
```

不需要接 UART。

### 日常推数据

优先级：

1. ADV/Wi-Fi bridge。
2. BLE GATT。
3. UART 不参与。

### 只有这些情况才重新接 UART

- Wi-Fi 和 BLE 都不可达。
- 设备无法正常启动 main。
- 网络 OTA 后 HTTP 长时间不回来。
- 需要改 bootloader、分区表或 updater/recovery。

## 失败回退策略

| 失败点 | 回退 |
|---|---|
| ADV 上传失败 | 不触发 OTA，修上传重试或降 chunk |
| 网络 OTA 失败但 main 还活 | HTTP 清 OTA 状态，重新上传正确固件 |
| 网络 OTA 后 main 不活 | 进入 UART ROM，115200 写 baseline |
| BLE 不稳定 | 不阻塞 baseline，先保留 Wi-Fi/ADV 路线 |
| 屏幕显示异常但 HTTP 活 | API 触发 redraw / mode usage / reboot |
| HTTP 和 BLE 都不活 | UART 救援 |

## 版本命名建议

最终底座不要继续叫 `usage4`，建议命名为：

```text
1.2.5-rebuilt-baseline1
```

后续小修：

```text
1.2.5-rebuilt-baseline2
1.2.5-rebuilt-baseline3
```

这样课堂讲解时也清楚：

- `usage2/3/4` 是调试迭代版。
- `baseline1` 是最终本地控制底座。

## 最小打扰版时间线

1. 我先把 baseline 功能写完并本地编译。
2. 你只需要把 ADV USB 插回来。
3. 我验证 ADV 上传稳定性。
4. 如果当前 `usage3` HTTP 可达，我先尝试网络 OTA，可能不用线刷。
5. 如果网络 OTA 不够稳，我再让你做最后一次 BOOT + UART 线刷。
6. 验收通过后，你拔掉 UART。
7. 之后日常更新都走网络/BLE。

## 当前下一步

当前先不让你再线刷。

下一步优先级：

1. ADV USB 重新枚举。
2. 修好/验证 ADV upload 稳定性。
3. 把 `usage4` 的 OTA cleanup、BLE GATT、health/heap API 合并成 `baseline1`。
4. 优先尝试网络 OTA 到 `baseline1`。
5. 只有网络 OTA 不满足条件时，才执行最后一次 UART 线刷。
