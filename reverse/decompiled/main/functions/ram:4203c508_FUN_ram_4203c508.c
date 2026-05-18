
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203c508(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_ram_3fcdfed0;
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(_DAT_ram_3fcdfed0 + 0x210);
  while (iVar2 = (**(code **)(iVar2 + 0x3b0))(param_1), iVar2 != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x7028,0);
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x3b0))(param_1);
    iVar2 = _DAT_ram_3fcdfed0;
    if (iVar1 != 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x7029,0);
      return 0xffffffff;
    }
  }
  if (_DAT_ram_3fcdfe70 == 0) {
    return 0;
  }
  if (*(int *)(_DAT_ram_3fcdfe70 + 0x14) == 0) {
    return 0;
  }
  (**(code **)(_DAT_ram_3fcdfed0 + 0x25c))(param_1,1);
  return 0;
}

