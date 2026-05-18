
int FUN_ram_4201cd00(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = -1;
  if ((param_2 != 0) && (iVar1 = -1, param_1 != (undefined4 *)0x0)) {
    iVar1 = FUN_ram_42018cf4(*param_1);
    if (iVar1 == 0) {
      iVar1 = 0x9001;
      param_1[7] = param_1[7] + param_3;
    }
    FUN_ram_4201cc96(6,param_1 + 7,4);
  }
  return iVar1;
}

