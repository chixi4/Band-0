
undefined4
FUN_ram_420279e4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7,int param_8,uint param_9,
                int *param_10,int param_11)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_9 < (uint)(param_7 + param_11)) {
    uVar1 = 0xffff9f00;
  }
  else {
    uVar1 = 0xffff9f80;
    if ((*(uint *)(*param_1 + 4) & 0xf000) == 0x6000) {
      iVar2 = param_1[0xf];
      *param_10 = param_7;
      uVar1 = FUN_ram_42028d06(iVar2,1,param_7,param_2,param_3,param_4,param_5,param_6,param_8,
                               param_11,param_8 + param_7);
    }
    *param_10 = *param_10 + param_11;
  }
  return uVar1;
}

