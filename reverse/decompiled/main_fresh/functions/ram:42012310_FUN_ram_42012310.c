
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_42012310(void)

{
  int iVar1;
  uint uVar2;
  
  if ((int)(_DAT_ram_60008068 << 2) < 0) {
    uVar2 = FUN_ram_420122f2();
    uVar2 = uVar2 / ((_DAT_ram_60008068 >> 0xc & 7) + 1);
  }
  else {
    iVar1 = FUN_ram_4204ae30();
    uVar2 = (uint)(iVar1 * 1000000) >> 1;
  }
  return uVar2;
}

