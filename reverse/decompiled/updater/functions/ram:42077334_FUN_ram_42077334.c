
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42077334(int param_1)

{
  FUN_ram_42077232();
  if (*(int *)(param_1 + 0x28) == 0) {
    *(undefined1 **)(param_1 + 0x28) = &LAB_ram_4206719a;
    if (_DAT_ram_3fcb689c == 0) {
      FUN_ram_420771ea();
    }
  }
  FUN_ram_42077242();
  return;
}

