
int FUN_ram_4039050c(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if (*(uint *)(gp + -0x7f0) == 0xffffffff) {
    iVar1 = FUN_ram_403904da(param_1,param_2,0x1800);
    return iVar1;
  }
  if (*(uint *)(gp + -0x7f0) < param_2) {
    iVar1 = FUN_ram_4039074e(param_1,param_2,0x1400);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = FUN_ram_4039074e(param_1,param_2,0x1800);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_ram_4039074e(param_1,param_2,0x1000);
  if (iVar1 == 0) {
    FUN_ram_4039043a(param_2,0x1000,0x3c074708);
  }
  return iVar1;
}

