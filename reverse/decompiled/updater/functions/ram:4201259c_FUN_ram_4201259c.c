
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4201259c(void)

{
  int iVar1;
  uint uVar2;
  
  if ((int)(_DAT_ram_60008068 << 2) < 0) {
    uVar2 = FUN_ram_4201257e();
    uVar2 = uVar2 / ((_DAT_ram_60008068 >> 0xc & 7) + 1);
  }
  else {
    iVar1 = FUN_ram_4201b056();
    uVar2 = (uint)(iVar1 * 1000000) >> 1;
  }
  return uVar2;
}

