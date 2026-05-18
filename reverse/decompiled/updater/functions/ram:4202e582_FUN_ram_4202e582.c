
void FUN_ram_4202e582(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_420231ba(param_1 + 0x20);
    FUN_ram_420293a6(param_1,0x140);
    *(undefined4 *)(param_1 + 0x1c) = 10000;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    return;
  }
  return;
}

