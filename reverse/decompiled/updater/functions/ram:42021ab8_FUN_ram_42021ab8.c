
int FUN_ram_42021ab8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                    int param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_2c [12];
  
  FUN_ram_42028e32(auStack_2c);
  iVar2 = FUN_ram_42028dc8(param_1);
  iVar1 = -1;
  if ((iVar2 != 0) && (iVar1 = FUN_ram_42028f3c(auStack_2c,iVar2,1), iVar1 == 0)) {
    iVar1 = FUN_ram_4202915c(auStack_2c,param_2,param_3);
    iVar2 = 0;
    if (iVar1 == 0) {
      for (; iVar2 != param_4; iVar2 = iVar2 + 1) {
        iVar1 = FUN_ram_42029264(auStack_2c,*(undefined4 *)(param_5 + iVar2 * 4),
                                 *(undefined4 *)(param_6 + iVar2 * 4));
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      iVar1 = FUN_ram_4202927a(auStack_2c,param_7);
      FUN_ram_42028e3e(auStack_2c);
    }
  }
  return iVar1;
}

