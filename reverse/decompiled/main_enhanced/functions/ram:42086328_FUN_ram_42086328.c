
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42086328(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3fcc3f70;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_ram_4039c0e0(param_1,iVar1,6);
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return 1;
}

