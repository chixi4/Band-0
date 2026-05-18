
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394d60(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *extraout_a5;
  
  if (param_1 == 2) {
    piVar1 = (int *)FUN_ram_420b4e9c(0);
    if (*piVar1 == 0) {
      FUN_ram_420b4de2(0,1);
    }
    _DAT_ram_60008068 = _DAT_ram_60008068 & 0x3fffffff | 0x80000000;
  }
  else {
    FUN_ram_420b4e4e(0);
    puVar2 = (uint *)&DAT_ram_60008068;
    if (param_1 != 0) {
      if (param_1 == 1) {
        _DAT_ram_60008068 = _DAT_ram_60008068 & 0x3fffffff | 0x40000100;
        goto LAB_ram_40394de8;
      }
      FUN_ram_4039bf1e();
      puVar2 = extraout_a5;
    }
    *puVar2 = *puVar2 & 0x3fffffff;
  }
  _DAT_ram_60008068 = _DAT_ram_60008068 & 0xfffffeff;
LAB_ram_40394de8:
  (*(code *)&SUB_ram_40010044)(300);
  return;
}

