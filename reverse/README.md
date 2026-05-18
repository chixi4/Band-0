# Reverse Artifacts

这个目录保存反编译和交叉引用产物。

## 目录

| 路径 | 内容 |
|---|---|
| `elf/` | 从 ESP app image 重建出的 RISC-V ELF，供 objdump/Ghidra 使用 |
| `disasm/` | `riscv64-elf-objdump -d -s -z` 输出 |
| `decompiled/main_fresh/` | 主应用 Ghidra 全量反编译，推荐查看这一版 |
| `decompiled/updater/` | updater Ghidra 全量反编译 |
| `xrefs/*_true.md` | 字符串到真实固件地址的交叉引用 |
| `candidates/` | 从 objdump 提取的函数入口候选 |

## 重要地址说明

当前 ELF 是用 `objcopy` 从裸 ESP image 段重建出的 relocatable ELF。Ghidra 12.1 导入时会把段地址整体加 `0x10000`。因此：

- 真实固件地址 `0x42004b52` 在 Ghidra 文件中显示为 `ram:42014b52`。
- 真实固件地址 `0x403802f4` 在 Ghidra 文件中显示为 `ram:403902f4`。
- `reverse/xrefs/*_true.md` 已用 `--function-address-delta 0x10000` 修正回真实地址。

课堂讲解时建议统一使用真实固件地址；需要查看原始伪代码时，再按 `+0x10000` 找对应 Ghidra 单函数文件。

## 复现命令

```bash
python3 tools/esp_image_to_elf.py extracted/main.bin \
  --out reverse/elf/main.elf \
  --meta-out reverse/elf/main_segments.json \
  --disasm-out reverse/disasm/main_objdump.txt

python3 tools/esp_image_to_elf.py extracted/updater.bin \
  --out reverse/elf/updater.elf \
  --meta-out reverse/elf/updater_segments.json \
  --disasm-out reverse/disasm/updater_objdump.txt

python3 tools/run_ghidra_decompile.py \
  --name main_fresh \
  --project Rand0Fresh \
  --elf reverse/elf/main.elf \
  --out-dir reverse/decompiled/main_fresh

python3 tools/string_addr_xrefs.py \
  --image extracted/main.bin \
  --strings analysis/main_strings_offsets.txt \
  --disasm reverse/disasm/main_objdump.txt \
  --function-index reverse/decompiled/main_fresh/FUNCTION_INDEX.md \
  --function-address-delta 0x10000 \
  --out reverse/xrefs/main_string_addr_xrefs_true.md
```

