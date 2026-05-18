
int FUN_ram_4206b0ca(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,int param_6,uint param_7,undefined4 param_8,uint param_9,
                    uint *param_10,uint param_11)

{
  int iVar1;
  
  if (param_7 < param_11) {
    iVar1 = -0x6100;
  }
  else {
    param_7 = param_7 - param_11;
    iVar1 = -0x6100;
    if (param_7 <= param_9) {
      iVar1 = -0x6080;
      if ((*(uint *)(*param_1 + 4) & 0xf000) == 0x6000) {
        *param_10 = param_7;
        iVar1 = FUN_ram_4206c3e6(param_1[0xf],param_7,param_2,param_3,param_4,param_5,
                                 param_6 + param_7,param_11,param_6,param_8);
        if (iVar1 == -0x12) {
          iVar1 = -0x6300;
        }
      }
    }
  }
  return iVar1;
}

