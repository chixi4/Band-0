
int FUN_ram_42032c94(undefined4 param_1,uint param_2,int param_3,int param_4,byte *param_5,
                    undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 3;
  if (-1 < (char)param_2) {
    iVar1 = FUN_ram_42032b0c(param_1,(param_2 & 0x7f) << 1,param_6,param_4,param_5,param_7);
    iVar3 = 0;
    if (iVar1 == 0) {
      for (; iVar3 < (int)param_2; iVar3 = iVar3 + 1) {
        if (param_7 == 0) {
          FUN_ram_4203012a(param_3,(uint)*param_5 + param_4);
          *param_5 = *param_5 + 2;
        }
        else {
          iVar2 = FUN_ram_420301c8(param_3,param_7);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
        param_3 = param_3 + 4;
      }
    }
  }
  return iVar1;
}

