#!/usr/bin/env python3
"""Map extracted strings to runtime addresses and approximate code xrefs.

Ghidra's string analyzer misses many ESP-IDF references because addresses are
often constructed via RISC-V lui/addi pairs or stored in tables. Objdump emits
useful comments like `# 3c0c1820 <...>` for many such cases; this script joins
those comments back to the string catalogue and nearest known Ghidra function.
"""

from __future__ import annotations

import argparse
import bisect
import re
from pathlib import Path

from esp32_image import parse_image_layout


STRING_LINE = re.compile(r"^(\d+)\s+(.*)$")
DISASM_LINE = re.compile(r"^\s*([0-9a-f]{8}):.*#\s*([0-9a-f]{8})\s")
FUNC_INDEX_LINE = re.compile(r"^\| `ram:([0-9a-f]{8})` \| `([^`]+)`")
HEX_IN_NAME = re.compile(r"(ram_)([0-9a-f]{8})")


def load_strings(path: Path) -> list[tuple[int, str]]:
    out = []
    for line in path.read_text(encoding="utf-8", errors="replace").splitlines():
        m = STRING_LINE.match(line)
        if not m:
            continue
        out.append((int(m.group(1)), m.group(2)))
    return out


def file_to_runtime(image_path: Path) -> dict[int, int]:
    image = image_path.read_bytes()
    layout = parse_image_layout(image)
    mapping = {}
    for seg in layout.segments:
        for pos in range(seg.offset, seg.offset + seg.size):
            mapping[pos] = seg.load_addr + (pos - seg.offset)
    return mapping


def adjust_name(name: str, address_delta: int) -> str:
    if not address_delta:
        return name

    def repl(match: re.Match[str]) -> str:
        adjusted = int(match.group(2), 16) - address_delta
        return f"{match.group(1)}{adjusted:08x}"

    return HEX_IN_NAME.sub(repl, name)


def load_functions(index_path: Path, address_delta: int) -> tuple[list[int], dict[int, str]]:
    entries: list[int] = []
    names: dict[int, str] = {}
    for line in index_path.read_text(encoding="utf-8", errors="replace").splitlines():
        m = FUNC_INDEX_LINE.match(line)
        if not m:
            continue
        addr = int(m.group(1), 16) - address_delta
        entries.append(addr)
        names[addr] = adjust_name(m.group(2), address_delta)
    entries.sort()
    return entries, names


def nearest_function(addr: int, entries: list[int], names: dict[int, str]) -> str:
    idx = bisect.bisect_right(entries, addr) - 1
    if idx < 0:
        return ""
    entry = entries[idx]
    # Keep the nearest-function heuristic conservative.
    if addr - entry > 0x4000:
        return ""
    return f"ram:{entry:08x} {names[entry]}"


def load_disasm_xrefs(disasm_path: Path, entries: list[int], names: dict[int, str]) -> dict[int, list[str]]:
    refs: dict[int, list[str]] = {}
    for line in disasm_path.read_text(encoding="utf-8", errors="replace").splitlines():
        m = DISASM_LINE.match(line)
        if not m:
            continue
        insn = int(m.group(1), 16)
        target = int(m.group(2), 16)
        func = nearest_function(insn, entries, names)
        detail = f"`0x{insn:08x}`"
        if func:
            detail += f" in `{func}`"
        refs.setdefault(target, []).append(detail)
    return refs


def clean(value: str) -> str:
    return value.replace("\\", "\\\\").replace("|", "\\|").replace("\n", "\\n").replace("\r", "\\r")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--image", type=Path, required=True)
    parser.add_argument("--strings", type=Path, required=True)
    parser.add_argument("--disasm", type=Path, required=True)
    parser.add_argument("--function-index", type=Path, required=True)
    parser.add_argument(
        "--function-address-delta",
        default="0",
        help="subtract this delta from Ghidra function addresses before matching",
    )
    parser.add_argument("--out", type=Path, required=True)
    args = parser.parse_args()

    offset_map = file_to_runtime(args.image)
    function_address_delta = int(args.function_address_delta, 0)
    funcs, names = load_functions(args.function_index, function_address_delta)
    refs = load_disasm_xrefs(args.disasm, funcs, names)

    rows = []
    for file_off, value in load_strings(args.strings):
        runtime = offset_map.get(file_off)
        if runtime is None:
            continue
        rows.append((runtime, file_off, value, refs.get(runtime, [])))

    args.out.parent.mkdir(parents=True, exist_ok=True)
    with args.out.open("w", encoding="utf-8") as f:
        f.write("# Address-Level String References\n\n")
        f.write("| Runtime address | File offset | String | Approximate code references |\n")
        f.write("|---|---:|---|---|\n")
        for runtime, file_off, value, matches in rows:
            ref_text = "<br>".join(dict.fromkeys(matches[:12]))
            f.write(f"| `0x{runtime:08x}` | `{file_off}` | `{clean(value)}` | {ref_text} |\n")
        f.write(f"\nTotal strings mapped: {len(rows)}\n")
        f.write("\nNote: function attribution is nearest-entry heuristic when objdump gives an address comment.\n")
        if function_address_delta:
            f.write(f"Ghidra function addresses were adjusted by -0x{function_address_delta:x} before matching.\n")


if __name__ == "__main__":
    main()
