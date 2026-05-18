
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4204ae30(void)

{
  uint uVar1;
  
  uVar1 = 0x28;
  if ((((_DAT_ram_600080ac & 0xffff) == _DAT_ram_600080ac >> 0x10) &&
      (_DAT_ram_600080ac - 1 < 0xfffffffe)) && (uVar1 = _DAT_ram_600080ac & 0xfffe, uVar1 == 0)) {
    uVar1 = 0x28;
  }
  return uVar1;
}

