
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42048760(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if ((int)param_1 < 0) {
    return 0x106;
  }
  uVar2 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
  if ((uVar2 & 1) == 0) {
LAB_ram_4204876a:
    uVar1 = 0x106;
  }
  else {
    iVar3 = FUN_ram_42048b72(param_1);
    if (iVar3 == 0) {
      uVar2 = *(uint *)(&DAT_ram_3c0f72bc + param_1 * 4);
      if (uVar2 == 0) goto LAB_ram_4204876a;
      FUN_ram_40396966();
      if (param_1 < 6) {
        _DAT_ram_600080c4 = 1 << (param_1 & 0x1f) | _DAT_ram_600080c4;
      }
      else {
        _DAT_ram_600080c8 = _DAT_ram_600080c8 | uVar2;
      }
      FUN_ram_40396994();
    }
    uVar1 = 0;
  }
  return uVar1;
}

