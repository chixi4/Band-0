
int FUN_ram_4205fc00(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_2c [16];
  
  FUN_ram_4206c48e(auStack_2c);
  iVar2 = FUN_ram_4206c444(param_1);
  iVar1 = -1;
  if (iVar2 != 0) {
    iVar1 = FUN_ram_4206c572(auStack_2c,iVar2,0);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4206c624(auStack_2c);
      iVar2 = 0;
      if (iVar1 == 0) {
        for (; iVar2 != param_2; iVar2 = iVar2 + 1) {
          iVar1 = FUN_ram_4206c666(auStack_2c,*(undefined4 *)(iVar2 * 4 + param_3),
                                   *(undefined4 *)(param_4 + iVar2 * 4));
          if (iVar1 != 0) goto LAB_ram_4205fc44;
        }
        iVar1 = FUN_ram_4206c6a0(auStack_2c,param_5);
      }
    }
LAB_ram_4205fc44:
    FUN_ram_4206c49a(auStack_2c);
  }
  return iVar1;
}

