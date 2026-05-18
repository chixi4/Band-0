
undefined4 FUN_ram_4206589e(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_30 [32];
  
  iVar1 = *(int *)(param_1 + 0x390);
  param_1 = param_1 + 0x80;
  do {
    uVar3 = *(uint *)(iVar1 + 0x18);
    if (uVar3 == 0) {
      FUN_ram_4206559e(param_1);
      return 0;
    }
    if (0x20 < uVar3) {
      uVar3 = 0x20;
    }
    iVar2 = FUN_ram_4206671c(param_1,auStack_30,uVar3);
  } while (0 < iVar2);
  FUN_ram_4206559e(param_1);
  return 0xffffffff;
}

