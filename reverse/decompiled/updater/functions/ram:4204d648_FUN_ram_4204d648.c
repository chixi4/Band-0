
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204d648(uint param_1)

{
  _DAT_ram_600471f0 = (param_1 & 0xf) << 4 | _DAT_ram_600471f0 & 0xffffff0f;
  return;
}

