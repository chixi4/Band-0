
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42098d4a(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x60) != 0) {
      FUN_ram_4209b3c2();
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_ram_4206d7da(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c),0x41);
      thunk_FUN_ram_40390634(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
      FUN_ram_42099662(*(undefined4 *)(param_1 + 4));
    }
    thunk_FUN_ram_40390634(param_1);
    _DAT_ram_3fcc53d0 = 0;
    return;
  }
  return;
}

