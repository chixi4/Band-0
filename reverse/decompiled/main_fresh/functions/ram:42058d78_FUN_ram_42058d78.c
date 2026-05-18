
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42058d78(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (_DAT_ram_3fcc5334 == param_1) {
    _DAT_ram_3fcc5334 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar2 = _DAT_ram_3fcc5334;
    if (_DAT_ram_3fcc5334 != 0) {
      do {
        iVar1 = iVar2;
        iVar2 = *(int *)(iVar1 + 0xc);
        if (iVar2 == 0) goto LAB_ram_42058d8e;
      } while (iVar2 != param_1);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    }
  }
LAB_ram_42058d8e:
  FUN_ram_420531f8(1);
  return;
}

