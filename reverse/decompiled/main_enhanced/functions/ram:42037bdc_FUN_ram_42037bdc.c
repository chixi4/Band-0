
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42037bdc(undefined4 param_1)

{
  int iVar1;
  
  _DAT_ram_3fcdfe44 = param_1;
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x2c))();
  if (iVar1 == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x24))();
    return 0;
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0xb00))();
  return 0x101;
}

