
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42048c0a(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    uVar1 = 0x103;
    if (*(int *)(param_1 + 0x14) == 0) {
      FUN_ram_403917e0(0x3fcc51a8);
      iVar3 = _DAT_ram_3fcc51ac;
      if (param_1 == _DAT_ram_3fcc51ac) {
        _DAT_ram_3fcc51ac = *(int *)(param_1 + 0x10);
      }
      else {
        do {
          iVar2 = iVar3;
          iVar3 = *(int *)(iVar2 + 0x10);
        } while (param_1 != iVar3);
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
      }
      FUN_ram_403917f8(0x3fcc51a8);
      thunk_FUN_ram_40390634(param_1);
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0x102;
}

