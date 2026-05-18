
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42044d2e(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3fcb6a38;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (((*(ushort *)(iVar1 + 0x16) & 1) == param_2) &&
       (iVar2 = FUN_ram_4039c0e0(iVar1 + 0x10,param_1,6), iVar2 == 0)) break;
    iVar1 = *(int *)(iVar1 + 0x18);
  }
  iVar2 = _DAT_ram_3fcb6a38;
  iVar3 = *(int *)(iVar1 + 0x18);
  if (_DAT_ram_3fcb6a38 != iVar1) {
    do {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar3 + 0x18);
    } while (iVar2 != iVar1);
    *(int *)(iVar3 + 0x18) = *(int *)(iVar1 + 0x18);
    iVar3 = _DAT_ram_3fcb6a38;
  }
  _DAT_ram_3fcb6a38 = iVar3;
  (**(code **)(_DAT_ram_3fcdfec8 + 0x10))(iVar1);
  return 0;
}

