
int FUN_ram_4206afea(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,int param_6,int *param_7)

{
  int iVar1;
  int iStack_28;
  uint auStack_24 [3];
  
  iVar1 = FUN_ram_4206aabe();
  if (iVar1 == 0) {
    iVar1 = -0x6100;
    if (*param_1 != 0) {
      param_1[9] = 0;
      iVar1 = FUN_ram_4206ab3c(param_1,param_4,param_5,param_6,param_7);
      if (iVar1 == 0) {
        auStack_24[0] = 0;
        iVar1 = FUN_ram_4206adfe(param_1,*param_7 + param_6,&iStack_28,auStack_24);
        if (iVar1 == 0) {
          *param_7 = *param_7 + iStack_28;
          iVar1 = -(auStack_24[0] & 0x6200);
        }
      }
    }
  }
  return iVar1;
}

