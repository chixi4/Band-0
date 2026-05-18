
int FUN_ram_42060954(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && (iVar1 = thunk_FUN_ram_403904a6(param_2 + 1), iVar1 != 0)) {
    FUN_ram_4039c11e(iVar1,param_1,param_2);
    *(undefined1 *)(param_2 + iVar1) = 0;
  }
  return iVar1;
}

