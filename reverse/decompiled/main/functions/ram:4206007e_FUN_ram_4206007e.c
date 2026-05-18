
int FUN_ram_4206007e(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_64 [68];
  
  iVar2 = FUN_ram_4206a944(2);
  if (iVar2 == 0) {
    iVar2 = -0x6080;
  }
  else {
    if (param_1 == 0) {
      return -1;
    }
    if (param_5 == 0) {
      return -1;
    }
    FUN_ram_4206a9a6(auStack_64);
    iVar2 = FUN_ram_4206a9fa(auStack_64,iVar2);
    if (iVar2 == 0) {
      iVar2 = FUN_ram_4206b532(auStack_64,param_1,0x80);
      iVar1 = 0;
      if (iVar2 == 0) {
        for (; iVar1 != param_2; iVar1 = iVar1 + 1) {
          iVar2 = FUN_ram_4206b59a(auStack_64,*(undefined4 *)(iVar1 * 4 + param_3),
                                   *(undefined4 *)(param_4 + iVar1 * 4));
          if (iVar2 != 0) goto LAB_ram_42060030;
        }
        iVar2 = FUN_ram_4206b6a6(auStack_64,param_5);
      }
    }
  }
LAB_ram_42060030:
  FUN_ram_4206a9b4(auStack_64);
  return iVar2;
}

