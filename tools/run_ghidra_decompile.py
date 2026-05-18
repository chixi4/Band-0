#!/usr/bin/env python3
"""Run Ghidra headless decompilation on reconstructed ESP app ELFs."""

from __future__ import annotations

import argparse
import os
import shutil
import subprocess
from pathlib import Path


def analyze_headless() -> str:
    found = shutil.which("analyzeHeadless")
    if found:
        return found
    candidates = [
        "/opt/homebrew/bin/analyzeHeadless",
        "/usr/local/bin/analyzeHeadless",
        "/opt/homebrew/opt/ghidra/libexec/support/analyzeHeadless",
        "/usr/local/opt/ghidra/libexec/support/analyzeHeadless",
    ]
    for candidate in candidates:
        if Path(candidate).exists():
            return candidate
    raise SystemExit("analyzeHeadless not found; install ghidra")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--name", required=True, help="program name, e.g. main")
    parser.add_argument("--elf", required=True, type=Path)
    parser.add_argument("--project-dir", default="reverse/ghidra_projects")
    parser.add_argument("--project", default="Rand0")
    parser.add_argument("--out-dir", type=Path)
    args = parser.parse_args()

    tool = analyze_headless()
    out_dir = args.out_dir or Path("reverse/decompiled") / args.name
    out_dir.mkdir(parents=True, exist_ok=True)
    Path(args.project_dir).mkdir(parents=True, exist_ok=True)
    env = os.environ.copy()
    for java_home in [
        "/opt/homebrew/opt/openjdk@21",
        "/usr/local/opt/openjdk@21",
    ]:
        if Path(java_home).exists():
            env.setdefault("JAVA_HOME", java_home)
            env["PATH"] = str(Path(java_home) / "bin") + os.pathsep + env.get("PATH", "")
            break

    cmd = [
        tool,
        args.project_dir,
        args.project,
        "-import",
        str(args.elf),
        "-overwrite",
        "-analysisTimeoutPerFile",
        "900",
        "-scriptPath",
        "tools/ghidra_scripts",
        "-postScript",
        "ExportDecompiled.java",
        str(out_dir),
    ]
    print(" ".join(cmd))
    subprocess.run(cmd, check=True, env=env)


if __name__ == "__main__":
    main()
