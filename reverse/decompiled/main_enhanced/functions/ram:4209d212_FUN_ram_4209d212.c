
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4209d212(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_4209c15a(_DAT_ram_3fcc4b18);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    iVar1 = FUN_ram_4209c726(_DAT_ram_3fcc4b18);
    if (*(int *)(param_1 + 0x28) != iVar1 + 8) {
      return 0xffffffff;
    }
    iVar3 = *(int *)(param_1 + 0x24);
    iVar1 = FUN_ram_4209c726(_DAT_ram_3fcc4b18);
    if ((iVar1 != _DAT_ram_3fcc4adc) ||
       (iVar2 = FUN_ram_4039c0e0(0x3fcc4abc,iVar3 + 8,iVar1), iVar2 != 0)) {
      iVar2 = FUN_ram_4207fb5a(0,iVar3);
      if (iVar2 < 0) {
        return 0xffffffff;
      }
      _DAT_ram_3fcc4adc = iVar1;
      FUN_ram_4039c11e(0x3fcc4abc,iVar3 + 8,iVar1);
    }
  }
  return 0;
}

