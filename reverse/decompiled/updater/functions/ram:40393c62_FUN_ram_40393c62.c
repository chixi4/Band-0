
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40393c62(void)

{
  uint uVar1;
  
  uVar1 = _DAT_ram_60008068 >> 0x1e;
  if (((uVar1 != 1) && (uVar1 != 2)) && (uVar1 != 0)) {
    uVar1 = 3;
  }
  return uVar1;
}

