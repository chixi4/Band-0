
int FUN_ram_42027e46(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [28];
  
  FUN_ram_420293a6(auStack_30);
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = *(uint *)(*param_1 + 4) & 0x1f;
  }
  iVar2 = FUN_ram_420274c2(param_1,auStack_30,uVar1,auStack_30,auStack_34);
  if (iVar2 == 0) {
    if (uVar1 == 0x10) {
      FUN_ram_42027d8e(param_2,auStack_30);
      FUN_ram_42027d8e(param_3,param_2);
    }
    else {
      iVar2 = -0x6100;
    }
  }
  FUN_ram_420293a6(auStack_30);
  return iVar2;
}

