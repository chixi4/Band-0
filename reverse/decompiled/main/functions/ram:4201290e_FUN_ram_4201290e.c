
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201290e(int param_1)

{
  if (*(int *)(param_1 + 4) != _DAT_ram_3fcb814c) {
    FUN_ram_420af9b0();
  }
  if (*(int *)(param_1 + 8) != _DAT_ram_3fcb8150) {
    FUN_ram_420af9b0(param_1);
  }
  if (*(int *)(param_1 + 0xc) != _DAT_ram_3fcb8154) {
    FUN_ram_420af9b0(param_1);
    return;
  }
  return;
}

