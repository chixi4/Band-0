
int FUN_ram_403905da(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if (((param_1 != 0) && ((param_1 - 1 & param_1) == 0)) && (param_2 != 0)) {
    if (param_2 < 0x44001) {
      iVar1 = FUN_ram_40390682();
      if (iVar1 != 0) {
        return iVar1;
      }
      FUN_ram_40390466(param_2,param_3,&DAT_ram_3c0c5630);
      return 0;
    }
    FUN_ram_40390466(param_2,param_3,&DAT_ram_3c0c5630);
  }
  return 0;
}

