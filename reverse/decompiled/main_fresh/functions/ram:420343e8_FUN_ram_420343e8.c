
undefined4 FUN_ram_420343e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 auStack_14 [2];
  
  iVar1 = FUN_ram_4204beee("key point.",1,auStack_14);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4204c148(auStack_14[0],param_1,param_2,param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_4204c0c8(auStack_14[0]), iVar1 == 0)) {
      FUN_ram_4204c3d0(auStack_14[0]);
      return 0;
    }
    FUN_ram_4204c3d0(auStack_14[0]);
  }
  return 0x1c;
}

