
undefined4 FUN_ram_4206f260(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 + 8;
  iVar3 = *(int *)(param_1 + 4);
  iVar1 = FUN_ram_420683c4(iVar2);
  if (iVar3 != iVar1) {
    return 0xffffbf80;
  }
  if (0x400 < *(uint *)(param_1 + 4)) {
    return 0xffffbf80;
  }
  iVar1 = FUN_ram_420685b4(iVar2,0);
  if (iVar1 < 1) {
    return 0xffffbf80;
  }
  iVar1 = FUN_ram_4206835e(iVar2,0);
  if (iVar1 == 0) {
    return 0xffffbf80;
  }
  if (param_2 != 0) {
    iVar1 = FUN_ram_420685b4(param_1 + 0x20,0);
    if (iVar1 < 1) {
      return 0xffffbf80;
    }
    iVar1 = FUN_ram_4206835e(param_1 + 0x20,0);
    if (iVar1 == 0) {
      return 0xffffbf80;
    }
    iVar1 = FUN_ram_420685b4(param_1 + 0x28,0);
    if (iVar1 < 1) {
      return 0xffffbf80;
    }
    iVar1 = FUN_ram_4206835e(param_1 + 0x28,0);
    if (iVar1 == 0) {
      return 0xffffbf80;
    }
  }
  iVar1 = FUN_ram_420685b4(param_1 + 0x10,0);
  if ((0 < iVar1) &&
     ((param_2 == 0 ||
      (((iVar1 = FUN_ram_420685b4(param_1 + 0x30,0), 0 < iVar1 &&
        (iVar1 = FUN_ram_420685b4(param_1 + 0x38,0), 0 < iVar1)) &&
       (iVar1 = FUN_ram_420685b4(param_1 + 0x40,0), 0 < iVar1)))))) {
    return 0;
  }
  return 0xffffbf80;
}

