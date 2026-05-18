
int FUN_ram_40390538(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if (*(uint *)(gp + -0x7c8) == 0xffffffff) {
    iVar1 = FUN_ram_40390506(param_1,param_2,0x1800);
    return iVar1;
  }
  if (*(uint *)(gp + -0x7c8) < param_2) {
    iVar1 = FUN_ram_403907c6(param_1,param_2,0x1400);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = FUN_ram_403907c6(param_1,param_2,0x1800);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_ram_403907c6(param_1,param_2,0x1000);
  if (iVar1 == 0) {
    FUN_ram_40390466(param_2,0x1000,&DAT_ram_3c0c5670);
  }
  return iVar1;
}

