
undefined4 FUN_ram_4206ed9c(int *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (0 < iVar1 - param_2) {
    *param_1 = iVar1 + -1;
    *(undefined1 *)(iVar1 + -1) = param_3;
    return 1;
  }
  return 0xffffff94;
}

