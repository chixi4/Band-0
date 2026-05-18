
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420afe2c(int param_1)

{
  FUN_ram_420afd2a();
  if (*(int *)(param_1 + 0x28) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0x4209fc92;
    if (_DAT_ram_3fcc5408 == 0) {
      FUN_ram_420afce2();
    }
  }
  FUN_ram_420afd3a();
  return;
}

