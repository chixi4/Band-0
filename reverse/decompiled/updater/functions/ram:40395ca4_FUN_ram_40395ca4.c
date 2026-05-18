
void FUN_ram_40395ca4(int param_1)

{
  FUN_ram_40396232();
  while (*(int *)(param_1 + 4) != 0) {
    FUN_ram_4039674c(*(undefined4 *)(param_1 + 0x10),0x2000000);
  }
  FUN_ram_403963e2();
  if (*(char *)(param_1 + 0x18) == '\0') {
    thunk_FUN_ram_40390608(param_1);
    return;
  }
  return;
}

