
int FUN_ram_42064ae4(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (param_3 < 0) {
    param_3 = (*(code *)&SUB_ram_400104a8)(param_2);
  }
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4039c08e(1,param_3 + 1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = thunk_FUN_ram_40390538(iVar1);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined1 *)(iVar1 + param_3) = 0;
  }
  iVar1 = FUN_ram_4039c11e(iVar1,param_2,param_3);
  *param_1 = iVar1;
  return iVar1;
}

