
int FUN_ram_4205d164(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (param_2 != 0) {
    if (param_3 < 0) {
      param_3 = (*(code *)&SUB_ram_400104a8)(param_2);
    }
    if (iVar1 == 0) {
      iVar1 = FUN_ram_40399d1a(1,param_3 + 1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = 0;
    }
    else {
      iVar2 = (*(code *)&SUB_ram_400104a8)(iVar1);
      iVar1 = thunk_FUN_ram_4039050c(iVar1,iVar2 + param_3 + 1);
      *(undefined1 *)(iVar2 + param_3 + iVar1) = 0;
    }
    FUN_ram_40399daa(iVar1 + iVar2,param_2,param_3);
    *param_1 = iVar1;
  }
  return iVar1;
}

