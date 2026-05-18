
int FUN_ram_42072cf2(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  if (*param_5 == 0) {
    iVar1 = FUN_ram_42031780(param_1,param_3,param_4);
    if (iVar1 == 0) {
      if (*param_4 == 6) {
        iVar1 = FUN_ram_4202939a(1,8);
        if (iVar1 == 0) {
          return -0x2880;
        }
        iVar2 = FUN_ram_42072788(param_2,param_3,iVar1,iVar1 + 4);
        if (iVar2 != 0) {
          FUN_ram_420293a0(iVar1);
          return iVar2;
        }
        *param_5 = iVar1;
      }
      else {
        if ((*param_2 != 5) && (*param_2 != 0)) {
          return -0x2300;
        }
        if (param_2[1] != 0) {
          return -0x2300;
        }
      }
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + -0x2600;
    }
  }
  else {
    iVar1 = -0x2800;
  }
  return iVar1;
}

