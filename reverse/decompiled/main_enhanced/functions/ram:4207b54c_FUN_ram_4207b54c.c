
int FUN_ram_4207b54c(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                    int *param_6)

{
  int iVar1;
  
  while ((iVar1 = *param_6, iVar1 == 0 || (param_2 != *(int *)(iVar1 + 0x1c)))) {
    param_1 = param_1 + 1;
    param_6 = param_6 + 1;
    if (param_1 == 8) {
      return -1;
    }
  }
  *param_3 = iVar1;
  return param_1;
}

