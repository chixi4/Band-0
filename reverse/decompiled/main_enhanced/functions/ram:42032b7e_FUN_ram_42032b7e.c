
int FUN_ram_42032b7e(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,byte *param_5,
                    undefined4 param_6,int param_7)

{
  int iVar1;
  
  iVar1 = FUN_ram_42032b0c(param_1,param_2 & 0xff,param_6,param_4,param_5,param_7);
  if (iVar1 == 0) {
    if (param_7 != 0) {
      iVar1 = FUN_ram_403a3150(param_7,param_3,param_2 & 0xffff);
      return iVar1;
    }
    FUN_ram_4039c11e((uint)*param_5 + param_4,param_3,param_2);
    *param_5 = (char)param_2 + *param_5;
  }
  return iVar1;
}

