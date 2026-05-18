
void FUN_ram_42065b5a(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_ram_42065b30(param_1 + 4,*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_ram_42065b30(param_1 + 0xc,*(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    return;
  }
  return;
}

