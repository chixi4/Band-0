
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42096520(void)

{
  uint uVar1;
  
  FUN_ram_420960d2(0);
  FUN_ram_420960e6(0);
  FUN_ram_42096100(0);
  uVar1 = _DAT_ram_60047cf8;
  _DAT_ram_600471fc = _DAT_ram_600471fc | 1;
  _DAT_ram_60047c34 = 0;
  _DAT_ram_60047c40 = 0xffffffff;
  _DAT_ram_60047cf8 = _DAT_ram_60047cf8 | 2;
  do {
  } while ((uVar1 & 1) == 0);
  return;
}

