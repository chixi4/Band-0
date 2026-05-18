
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4204e780(int param_1)

{
  int iVar1;
  undefined1 auStack_11 [5];
  
  auStack_11[0] = 1;
  iVar1 = FUN_ram_40399f4c(gp + -0x7a4 + param_1,auStack_11,0,5);
  if (iVar1 != 0) {
    FUN_ram_4039398a();
    if (param_1 == 0) {
      _DAT_ram_600c0010 = _DAT_ram_600c0010 & 0xfffffffd;
    }
    else {
      _DAT_ram_600c0010 = _DAT_ram_600c0010 & 0xffffffbf;
    }
    FUN_ram_4039399a();
  }
  return iVar1;
}

