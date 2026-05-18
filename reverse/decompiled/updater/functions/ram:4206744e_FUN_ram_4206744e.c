
int FUN_ram_4206744e(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,
                    undefined4 param_5)

{
  int iVar1;
  undefined1 auStack_2c [24];
  
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  iVar1 = FUN_ram_4202bbf6(param_1,param_2,auStack_2c);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_420317b4(auStack_2c,param_3);
    if (iVar1 == -0x2e) {
      iVar1 = FUN_ram_42031858(auStack_2c,param_5);
      if (iVar1 == 0) {
        *param_3 = 2;
        return 0;
      }
    }
    else if (iVar1 == 0) {
      if (*param_3 != 1) {
        return 0;
      }
      if (((*param_4 == 5) || (*param_4 == 0)) && (param_4[1] == 0)) {
        return 0;
      }
      return -0x3a80;
    }
    iVar1 = -0x3c80;
  }
  else {
    iVar1 = iVar1 + -0x3a80;
  }
  return iVar1;
}

