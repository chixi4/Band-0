
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42012b5c(int param_1)

{
  if (*(int *)(param_1 + 4) != _DAT_ram_3fcb0cf0) {
    FUN_ram_42076eb8();
  }
  if (*(int *)(param_1 + 8) != _DAT_ram_3fcb0cf4) {
    FUN_ram_42076eb8(param_1);
  }
  if (*(int *)(param_1 + 0xc) != _DAT_ram_3fcb0cf8) {
    FUN_ram_42076eb8(param_1);
    return;
  }
  return;
}

