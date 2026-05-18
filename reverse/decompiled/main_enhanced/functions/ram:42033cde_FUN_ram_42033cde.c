
void FUN_ram_42033cde(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = *param_4 + -1;
  *param_4 = iVar1;
  if (param_3 < iVar1) {
    param_1 = param_1 + param_3 * param_2;
    FUN_ram_4039c1f2(param_1,param_2 + param_1,(iVar1 - param_3) * param_2);
    return;
  }
  return;
}

