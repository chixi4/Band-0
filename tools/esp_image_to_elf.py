#!/usr/bin/env python3
"""Convert an ESP32-C2/ESP8684 app image into a sectioned RISC-V ELF.

The input .bin image contains ESP image segment headers. Ghidra and objdump are
much more useful when each segment is represented as an ELF section at its
runtime load address.
"""

from __future__ import annotations

import argparse
import json
import shutil
import subprocess
import tempfile
from pathlib import Path

from esp32_image import parse_image_layout


def entry_point(image: bytes) -> int:
    if len(image) < 8:
        raise ValueError("image too short")
    return int.from_bytes(image[4:8], "little")


def section_name(load_addr: int, index: int) -> str:
    if 0x42000000 <= load_addr < 0x43000000:
        return f".irom{index}"
    if 0x40380000 <= load_addr < 0x40400000:
        return f".iram{index}"
    if 0x3C000000 <= load_addr < 0x3D000000:
        return f".drom{index}"
    if 0x3FC00000 <= load_addr < 0x40000000:
        return f".dram{index}"
    return f".seg{index}"


def section_flags(name: str) -> str:
    if name.startswith((".irom", ".iram")):
        return "alloc,load,readonly,code,contents"
    if name.startswith(".drom"):
        return "alloc,load,readonly,data,contents"
    return "alloc,load,data,contents"


def objcopy() -> str:
    candidates = [
        "riscv64-elf-objcopy",
        "riscv32-unknown-elf-objcopy",
        "llvm-objcopy",
    ]
    for candidate in candidates:
        found = shutil.which(candidate)
        if found:
            return found
    raise SystemExit("no RISC-V objcopy found; install riscv64-elf-binutils")


def objdump() -> str | None:
    for candidate in ["riscv64-elf-objdump", "riscv32-unknown-elf-objdump", "llvm-objdump"]:
        found = shutil.which(candidate)
        if found:
            return found
    return None


def run(cmd: list[str]) -> None:
    subprocess.run(cmd, check=True)


def convert(image_path: Path, out_elf: Path, meta_out: Path | None = None) -> dict:
    image = image_path.read_bytes()
    layout = parse_image_layout(image)
    start = entry_point(image)
    tool = objcopy()

    out_elf.parent.mkdir(parents=True, exist_ok=True)
    metadata = {
        "source": str(image_path),
        "elf": str(out_elf),
        "entry": f"0x{start:08x}",
        "segments": [],
    }

    with tempfile.TemporaryDirectory() as tmp_name:
        tmp = Path(tmp_name)
        section_files = []
        for index, seg in enumerate(layout.segments):
            name = section_name(seg.load_addr, index)
            raw = image[seg.offset : seg.offset + seg.size]
            seg_path = tmp / f"seg{index}.bin"
            seg_path.write_bytes(raw)
            section_files.append((name, seg_path, seg.load_addr, seg.size))
            metadata["segments"].append(
                {
                    "index": index,
                    "section": name,
                    "load_addr": f"0x{seg.load_addr:08x}",
                    "file_offset": f"0x{seg.offset:08x}",
                    "size": f"0x{seg.size:x}",
                    "flags": section_flags(name),
                }
            )

        first_name, first_path, first_addr, _ = section_files[0]
        tmp_elf = tmp / "image.elf"
        run(
            [
                tool,
                "-I",
                "binary",
                "-O",
                "elf32-littleriscv",
                "-B",
                "riscv",
                "--rename-section",
                f".data={first_name},{section_flags(first_name)}",
                "--change-addresses",
                f"0x{first_addr:08x}",
                f"--set-start=0x{start:08x}",
                str(first_path),
                str(tmp_elf),
            ]
        )

        current = tmp_elf
        for name, seg_path, addr, _ in section_files[1:]:
            next_elf = tmp / f"{name[1:]}.elf"
            run(
                [
                    tool,
                    "--add-section",
                    f"{name}={seg_path}",
                    "--set-section-flags",
                    f"{name}={section_flags(name)}",
                    "--change-section-address",
                    f"{name}=0x{addr:08x}",
                    str(current),
                    str(next_elf),
                ]
            )
            current = next_elf

        out_elf.write_bytes(current.read_bytes())

    if meta_out:
        meta_out.parent.mkdir(parents=True, exist_ok=True)
        meta_out.write_text(json.dumps(metadata, indent=2), encoding="utf-8")

    return metadata


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("image", type=Path)
    parser.add_argument("--out", type=Path, required=True)
    parser.add_argument("--meta-out", type=Path)
    parser.add_argument("--disasm-out", type=Path)
    args = parser.parse_args()

    metadata = convert(args.image, args.out, args.meta_out)

    if args.disasm_out:
        dump_tool = objdump()
        if not dump_tool:
            raise SystemExit("no RISC-V objdump found")
        args.disasm_out.parent.mkdir(parents=True, exist_ok=True)
        with args.disasm_out.open("w", encoding="utf-8") as f:
            subprocess.run([dump_tool, "-d", "-s", "-z", str(args.out)], check=True, stdout=f)

    print(json.dumps(metadata, indent=2))


if __name__ == "__main__":
    main()
