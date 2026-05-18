
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42044da8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3fcb6a38;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x20c))(param_1,iVar1);
    if (iVar2 != 0) break;
    iVar1 = *(int *)(iVar1 + 0x18);
  }
  return iVar1;
}

