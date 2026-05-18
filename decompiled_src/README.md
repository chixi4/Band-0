# 可读恢复代码说明

这里不是重新编写的业务程序，而是基于 Ghidra、objdump 字符串交叉引用和人工命名整理出的“可读反编译恢复代码”。

原始全量反编译在：

- `reverse/decompiled/main_fresh/all_functions.c`
- `reverse/decompiled/updater/all_functions.c`
- 单函数文件在各自的 `functions/` 目录。

注意：Ghidra 导入当前 relocatable ELF 时把段地址整体加了 `0x10000`。本目录文件统一写“真实固件地址”，例如真实 `0x42004b52` 在 Ghidra 文件中对应 `ram:42014b52_FUN_ram_42014b52.c`。

目录分类：

- `main/`：主应用业务、GPIO 按键表、蜂鸣、Wi-Fi/NVS、BLE 翻页器、UI/电池、云端 OTA、壁纸上传。
- `updater/`：恢复升级 app、OTA 下载、JD79650 电子纸初始化。

这些文件适合课堂讲解：先给老师看 `reverse/decompiled/*/all_functions.c` 证明“全量反编译”，再用本目录解释“关键功能如何还原”。
