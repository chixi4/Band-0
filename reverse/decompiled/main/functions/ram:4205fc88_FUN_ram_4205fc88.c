
int FUN_ram_4205fc88(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                    int param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_2c [12];
  
  FUN_ram_4206c48e(auStack_2c);
  iVar2 = FUN_ram_4206c444(param_1);
  iVar1 = -1;
  if ((iVar2 != 0) && (iVar1 = FUN_ram_4206c572(auStack_2c,iVar2,1), iVar1 == 0)) {
    iVar1 = FUN_ram_4206c738(auStack_2c,param_2,param_3);
    iVar2 = 0;
    if (iVar1 == 0) {
      for (; iVar2 != param_4; iVar2 = iVar2 + 1) {
        iVar1 = FUN_ram_4206c842(auStack_2c,*(undefined4 *)(param_5 + iVar2 * 4),
                                 *(undefined4 *)(param_6 + iVar2 * 4));
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      iVar1 = FUN_ram_4206c858(auStack_2c,param_7);
      FUN_ram_4206c49a(auStack_2c);
    }
  }
  return iVar1;
}

