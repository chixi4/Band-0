
int FUN_ram_4039047a(uint param_1)

{
  int iVar1;
  
  if (*(uint *)(gp + -0x7f0) == 0xffffffff) {
    iVar1 = FUN_ram_40390448(param_1,0x1800);
    return iVar1;
  }
  if (*(uint *)(gp + -0x7f0) < param_1) {
    iVar1 = FUN_ram_40390746(param_1,0x1400);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = FUN_ram_40390746(param_1,0x1800);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_ram_40390746(param_1,0x1000);
  if (iVar1 == 0) {
    FUN_ram_4039043a(param_1,0x1000,0x3c074724);
  }
  return iVar1;
}

