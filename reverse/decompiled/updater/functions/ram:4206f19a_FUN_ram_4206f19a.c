
void FUN_ram_4206f19a(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x60) != 0) {
      FUN_ram_42071c72();
      FUN_ram_420293a0(*(undefined4 *)(param_1 + 0x60));
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    FUN_ram_420293a6(param_1,0x6c);
    return;
  }
  return;
}

