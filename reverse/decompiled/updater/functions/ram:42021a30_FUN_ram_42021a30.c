
int FUN_ram_42021a30(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_2c [16];
  
  FUN_ram_42028e32(auStack_2c);
  iVar2 = FUN_ram_42028dc8(param_1);
  iVar1 = -1;
  if (iVar2 != 0) {
    iVar1 = FUN_ram_42028f3c(auStack_2c,iVar2,0);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_42029004(auStack_2c);
      iVar2 = 0;
      if (iVar1 == 0) {
        for (; iVar2 != param_2; iVar2 = iVar2 + 1) {
          iVar1 = FUN_ram_4202905e(auStack_2c,*(undefined4 *)(iVar2 * 4 + param_3),
                                   *(undefined4 *)(param_4 + iVar2 * 4));
          if (iVar1 != 0) goto LAB_ram_42021a74;
        }
        iVar1 = FUN_ram_420290a6(auStack_2c,param_5);
      }
    }
LAB_ram_42021a74:
    FUN_ram_42028e3e(auStack_2c);
  }
  return iVar1;
}

