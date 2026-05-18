
int FUN_ram_4209d008(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  for (param_1 = (int *)*param_1;
      (param_1 != (int *)0x0 &&
      ((((param_2 != 0 && (iVar1 = FUN_ram_4039c0e0(param_1 + 0x19,param_2,6), iVar1 != 0)) ||
        ((param_3 != 0 && (iVar1 = FUN_ram_4039c0e0(param_1 + 1,param_3,0x10), iVar1 != 0)))) ||
       ((param_4 != 0 && (param_1[0x1e] != param_4)))))); param_1 = (int *)*param_1) {
  }
  return (int)param_1;
}

