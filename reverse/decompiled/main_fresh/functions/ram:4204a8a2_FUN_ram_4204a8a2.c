
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204a8a2(void)

{
  undefined4 uVar1;
  
  uVar1 = 0x103;
  if (_DAT_ram_3fcc5200 != (undefined4 *)0x0) {
    FUN_ram_40396966(0x103);
    uVar1 = FUN_ram_4204abf4(*_DAT_ram_3fcc5200);
    FUN_ram_40396994();
  }
  return uVar1;
}

