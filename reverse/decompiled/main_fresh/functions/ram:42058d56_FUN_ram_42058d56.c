
void FUN_ram_42058d56(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfb;
  }
  return;
}

