
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207b55e(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0x102;
  }
  uVar1 = 0x102;
  if (((param_2 != 0) && (param_3 != 0)) && (iVar3 = *(int *)(param_1 + 4), iVar3 == param_3)) {
    iVar2 = *(int *)(param_1 + 8);
    *(int *)(iVar2 * 4 + 0x3fcb36b4) = param_2;
    uVar1 = 0x106;
    if (iVar2 == 0) {
      _DAT_ram_3fcb36a8 = iVar3;
      iVar3 = FUN_ram_4203d146(0,0x40384c64);
      uVar1 = 0;
      if (iVar3 != 0) {
        uVar1 = 0x103;
      }
      return uVar1;
    }
  }
  return uVar1;
}

