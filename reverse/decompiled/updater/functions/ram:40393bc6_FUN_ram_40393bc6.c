
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40393bc6(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *extraout_a5;
  
  if (param_1 == 2) {
    piVar1 = (int *)FUN_ram_420123e2(0);
    if (*piVar1 == 0) {
      FUN_ram_42012328(0,1);
    }
    _DAT_ram_60008068 = _DAT_ram_60008068 & 0x3fffffff | 0x80000000;
  }
  else {
    FUN_ram_42012394(0);
    puVar2 = (uint *)&DAT_ram_60008068;
    if (param_1 != 0) {
      if (param_1 == 1) {
        _DAT_ram_60008068 = _DAT_ram_60008068 & 0x3fffffff | 0x40000100;
        goto LAB_ram_40393c4e;
      }
      FUN_ram_40399b58();
      puVar2 = extraout_a5;
    }
    *puVar2 = *puVar2 & 0x3fffffff;
  }
  _DAT_ram_60008068 = _DAT_ram_60008068 & 0xfffffeff;
LAB_ram_40393c4e:
  (*(code *)&SUB_ram_40010044)(300);
  return;
}

