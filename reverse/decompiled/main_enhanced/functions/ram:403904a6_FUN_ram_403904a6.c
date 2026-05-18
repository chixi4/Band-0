
int FUN_ram_403904a6(uint param_1)

{
  int iVar1;
  
  if (*(uint *)(gp + -0x7c8) == 0xffffffff) {
    iVar1 = FUN_ram_40390474(param_1,0x1800);
    return iVar1;
  }
  if (*(uint *)(gp + -0x7c8) < param_1) {
    iVar1 = FUN_ram_403907be(param_1,0x1400);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = FUN_ram_403907be(param_1,0x1800);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_ram_403907be(param_1,0x1000);
  if (iVar1 == 0) {
    FUN_ram_40390466(param_1,0x1000,"A gentle pace can still move work forward.");
  }
  return iVar1;
}

