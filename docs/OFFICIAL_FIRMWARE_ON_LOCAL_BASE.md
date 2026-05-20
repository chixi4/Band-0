# Official Firmware on the Local Base

Date: 2026-05-20

## Short Answer

The official 1.2.6 main firmware can run on this hardware with our current
bootloader/partition layout, but it cannot run inside our local base as a normal
app module. It is a full ESP-IDF application image with its own entry point,
FreeRTOS startup, globals, NVS assumptions, cloud logic, and UI renderer.

## Verified Local Facts

- Chip target: ESP32-C2 / ESP8684.
- Partition table matches the extracted official layout.
- App slots:
  - `main`: offset `0x10000`, size `0x140000`.
  - `updater`: offset `0x150000`, size `0xA0000`.
- Official 1.2.6 main image:
  - Path: `firmware_1.2.6_extracted/main.bin`
  - Size: `1125248` bytes (`0x112b80`)
  - Fits `main`, with `185472` bytes spare.
  - Does not fit `updater`; it overflows by `469888` bytes.
- Official 1.2.6 updater image:
  - Path: `firmware_1.2.6_extracted/updater.bin`
  - Size: `556416` bytes
  - Fits `updater`, with `98944` bytes spare.
- Current local base image:
  - Path: `sdk/build/Quote_0_ESP8684_IDF.bin`
  - Current ui9 size: `906656` bytes
  - Fits `main`, but does not fit `updater`.

## What Is Feasible

1. Restore official firmware as the active main app.
   - Network OTA or UART can write `firmware_1.2.6_extracted/main.bin` to the
     `main` slot.
   - After reboot, the device should behave like official 1.2.6 again.

2. Keep official updater plus our custom main.
   - This is effectively the current partition strategy: a large main app and a
     smaller updater/recovery app.
   - The updater slot is too small for either the official main app or our full
     local base.

3. Use official firmware as a reference oracle.
   - We can extract strings, image assets, UI coordinates, fonts, and behavior
     from the official binary and reimplement them in our local base.
   - This is the best route for "official-looking UI plus local control".

## What Is Not Realistic

1. Running official firmware as a sub-app inside our base.
   - There is no dynamic loader or ABI boundary.
   - The official firmware owns ESP-IDF startup and hardware initialization.
   - Its functions are not exported as a stable library.

2. Keeping full official main and full local base simultaneously in the current
   2MB flash layout.
   - `main` can hold one large app.
   - `updater` is only `0xA0000`, too small for either full app.

3. Patching official firmware lightly to add Claude Usage.
   - Binary patching is possible in principle, but adding a new UI app, local
     HTTP APIs, BLE handling, and safe OTA recovery is much larger than a small
     patch. It would be fragile and harder to grade or maintain than the current
     reimplementation.

## Safe Experiment Plan

If we want to prove official-on-base experimentally:

1. Keep `ui4` as the known-good local recovery build on the Mac and ADV.
2. Upload `firmware_1.2.6_extracted/main.bin` to ADV as `/band0.bin`.
3. Trigger direct OTA while Band-0 is on `ADV 2.4G`.
4. Confirm the official app boots.
5. Use official OTA hijack or UART only if needed to return to the local base.

This experiment is reversible, but less convenient than staying on the local
base because official firmware will not expose our `/api/status`, `/api/push`,
or `/api/ota/url` endpoints.

## Recommendation

Do not make official firmware the daily base. Keep the local base as the active
firmware, and use official 1.2.6 as a visual and behavioral reference. Rebuild
the official UI primitives in our code: white list pages with rounded outline
rows, black selected rows, official-style black icon pages, extracted/recreated
bitmap icons, and the same two-button interaction grammar.

## Current Implementation Status

Built and OTA-verified on 2026-05-20:

- Image: `sdk/build/Quote_0_ESP8684_IDF.bin`
- Active firmware: `1.2.6-local-ui9`
- Size: `906656` bytes
- SHA256: `42104342294703969dfc19cf1c45c44361ee4c5a59ae5f4f189573717c419660`
- OTA result: attempt `28`, success, booted back into `main`
- Runtime verification:
  - `/api/status` reports `runtime: local-base`
  - `official_reference: 1.2.6`
  - health `ok`
  - display ready and non-inverted
  - Wi-Fi connected to `ADV 2.4G`
  - battery is read from the stock firmware ADC path: ADC1 channel 2 / GPIO2,
    doubled to cell voltage, then mapped with the recovered stock voltage curve
  - verified sample: `battery_pct=64`, `adc_mv≈1921`, `cell_mv≈3842`
  - Usage push no longer forces a jump into the Usage app when another page is
    active
  - Usage page redraw is now gated by visible quota/status changes; reset
    countdown-only updates are accepted into state but do not refresh the EPD
  - after a successful STA connection, Wi-Fi disconnects retry indefinitely so
    ADV restarts do not strand the device offline again
  - OTA finalization no longer fabricates success if the updater does not write
    a matching result for the armed attempt

UI changes through `ui9` intentionally keep the official surface dominant:

- The Settings page now uses official-like rows: `Lock Now`, `Wi-Fi Time`,
  `Saved Wi-Fi`, `Wallpaper`, `Wi-Fi OTA`, `Language`, `Sleep Time`,
  `Key Sound`, `Lock Flip`, `Guide Pages`, reset entries, `System Version`.
- `Local Control` is the only explicit local extension row and is placed at the
  bottom of Settings.
- Reset actions use a confirmation screen instead of executing immediately.
- Local wireless diagnostics remain available, but they are behind Settings
  instead of being treated as a primary app.
- Usage page order is restored to percent-left / badge-right. Current uses the
  right badge at `x=122`; Weekly uses `x=124`, two pixels farther right.
- The mockup reference is generated at
  `build/ui_mockups/official_firmware_interpretation.png`.

## Hybrid Experiment Artifact

Built on 2026-05-20:

- Path: `build/official_hybrid/official_1.2.6_main_local_updater_factory.bin`
- SHA256: `d52ae560f424d4370ae23e58eb29ee9988d53366949923c219ec91b55bc75c5c`
- Size: `2000736` bytes
- Contents:
  - `0x00000`: official 1.2.6 bootloader
  - `0x08000`: official partition table
  - `0x0d000`: official OTA data initial image
  - `0x10000`: official 1.2.6 main app
  - `0x150000`: local rebuilt updater/recovery app

This artifact is for a controlled UART full-flash experiment. It should not be
used as the daily firmware unless we accept that official main will not expose
the local HTTP debug API while it is running.

## Why Official Main Cannot Keep Our Runtime Features

When official main boots, it owns the CPU process, FreeRTOS scheduler, Wi-Fi
stack, key scanner, and UI loop. Our local base is not resident in memory, so
these features disappear while official main is active:

- `/api/status`, `/api/push`, `/api/mode`, `/api/logs`, `/api/ota/url`
- silent Claude Usage updates
- local BLE Usage bridge
- our two-button chord suppression and runtime long-press reboot
- our health/heap/OTA diagnostics

The local updater can still be present in the updater slot, but it only runs
after the boot partition is switched to updater. With official main active,
that switch must come from official OTA behavior, a custom bootloader, UART, or
another future recovery mechanism.

## Required Interpretation for the Final Product

The target "official firmware plus local control" must be implemented as an
official-compatible local firmware, not as official main running side-by-side
with a hidden local base.

Hard constraints:

- ESP32-C2 has one application runtime. There is no supervisor OS that can keep
  our HTTP server and key scanner alive while another ESP-IDF app owns the CPU.
- The Wi-Fi radio is controlled by the active app. If official main runs, our
  `/api/status`, `/api/push`, `/api/ota/url`, and bridge protocol cannot keep
  serving in the background.
- The two physical keys are plain GPIOs. Runtime long-press reboot requires the
  active app to scan them. The bootloader or updater cannot observe a 10-second
  chord while official main is running.
- A custom bootloader could choose between apps at boot, but it cannot provide
  runtime network debugging after official main has started.

Therefore the success definition is:

1. Keep the local base as the only running app.
2. Recreate the official 1.2.6 UI grammar, icons, settings pages, wallpaper
   flow, Wi-Fi OTA flow, BT Pager behavior, MBTI guide, merit counter, answers,
   and fortune pages inside that app.
3. Keep local-only control always alive:
   - `GET /api/status`
   - `GET /api/logs`
   - `POST /api/push`
   - `POST /api/mode`
   - `POST /api/ota/url`
   - `POST /api/reboot`
   - two-button runtime reboot/recovery chord
4. Use the official binary as a resource/reference source, not as the active
   production runtime.

This is the only route that can satisfy both halves of the requirement at the
same time.
