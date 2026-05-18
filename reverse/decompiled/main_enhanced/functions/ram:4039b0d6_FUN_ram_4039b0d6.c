
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4039b0d6(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_403989f4();
  if (iVar1 == 1) {
    iVar1 = FUN_ram_4039b0b0();
    return iVar1;
  }
  if (_DAT_ram_3fcc5210 == 0) {
    _DAT_ram_3fcc5210 = FUN_ram_4039b0b0();
  }
  iVar1 = FUN_ram_4039691e();
  if (iVar1 == 0) {
    iVar1 = FUN_ram_403980d6();
  }
  else {
    iVar1 = FUN_ram_403980e0();
  }
  return iVar1 * 10 + _DAT_ram_3fcc5210;
}

