
int FUN_ram_4202c69c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iStack_18;
  int aiStack_14 [2];
  
  param_3 = param_2 + param_3;
  iStack_18 = param_2;
  iVar1 = FUN_ram_4202b91a(&iStack_18,param_3,aiStack_14,0x30);
  if (iVar1 == 0) {
    if (param_3 == iStack_18 + aiStack_14[0]) {
      iVar1 = FUN_ram_4202b91a(&iStack_18,param_3,aiStack_14,2);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_ram_4202c372(param_1,iStack_18,aiStack_14[0],0,0,0,0,0,0,0,0);
      if (iVar1 == 0) {
        iStack_18 = iStack_18 + aiStack_14[0];
        iVar1 = FUN_ram_4202b91a(&iStack_18,param_3,aiStack_14,2);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (((iStack_18 == 0) ||
            (iVar1 = FUN_ram_42024c0c(param_1 + 0x10,iStack_18,aiStack_14[0]), iVar1 == 0)) ||
           (iVar1 == 0x4080)) {
          iStack_18 = iStack_18 + aiStack_14[0];
          iVar1 = FUN_ram_4202c412(param_1);
          if ((iVar1 == 0) && (iVar1 = FUN_ram_4202c63a(param_1), iVar1 == 0)) {
            if (iStack_18 == param_3) {
              return 0;
            }
            return -0x66;
          }
        }
      }
    }
    iVar1 = -0x4080;
  }
  return iVar1;
}

