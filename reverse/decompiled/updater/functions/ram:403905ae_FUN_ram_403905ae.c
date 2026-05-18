
int FUN_ram_403905ae(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if (((param_1 != 0) && ((param_1 - 1 & param_1) == 0)) && (param_2 != 0)) {
    if (param_2 < 0x44001) {
      iVar1 = FUN_ram_4039064a();
      if (iVar1 != 0) {
        return iVar1;
      }
      FUN_ram_4039043a(param_2,param_3,0x3c0746c8);
      return 0;
    }
    FUN_ram_4039043a(param_2,param_3,0x3c0746c8);
  }
  return 0;
}

