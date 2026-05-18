#!/usr/bin/env python3
"""Extract likely function starts from RISC-V objdump output."""

from __future__ import annotations

import argparse
import re
from pathlib import Path


INSN = re.compile(r"^\s*([0-9a-f]{8}):\s+[0-9a-f]+\s+(.+)$")
CALL_TARGET = re.compile(r"\b(?:jal|j)\s+([0-9a-f]{8})\s+<")


def in_code(addr: int) -> bool:
    return (0x42000000 <= addr < 0x43000000) or (0x40380000 <= addr < 0x40400000)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--disasm", type=Path, required=True)
    parser.add_argument("--out", type=Path, required=True)
    args = parser.parse_args()

    candidates: set[int] = set()
    for line in args.disasm.read_text(encoding="utf-8", errors="replace").splitlines():
        m = INSN.match(line)
        if not m:
            continue
        addr = int(m.group(1), 16)
        asm = m.group(2)
        if not in_code(addr):
            continue

        if "addi\tsp,sp,-" in asm or "addi sp,sp,-" in asm:
            candidates.add(addr)

        target = CALL_TARGET.search(asm)
        if target:
            target_addr = int(target.group(1), 16)
            if in_code(target_addr):
                candidates.add(target_addr)

    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text("\n".join(f"0x{addr:08x}" for addr in sorted(candidates)) + "\n", encoding="ascii")
    print(f"wrote {len(candidates)} candidates to {args.out}")


if __name__ == "__main__":
    main()

