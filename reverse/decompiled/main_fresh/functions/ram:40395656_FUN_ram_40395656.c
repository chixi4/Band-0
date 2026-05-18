
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40395656(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  _DAT_ram_60008034 = _DAT_ram_60008034 & 0x7fff | param_1 << 0xf;
  _DAT_ram_60008060 = (param_2 & 0x3ffff) << 0xc | _DAT_ram_60008060 & 0xc0000fff;
  _DAT_ram_60008018 = _DAT_ram_60008018 | 0x80000002;
  do {
  } while ((_DAT_ram_6000803c & 3) == 0);
  uVar1 = _DAT_ram_6000803c >> 1;
  _DAT_ram_60008044 = _DAT_ram_60008044 | 3;
  if (param_3 != 0) {
    FUN_ram_40395558(0xff);
  }
  return uVar1 & 1;
}

