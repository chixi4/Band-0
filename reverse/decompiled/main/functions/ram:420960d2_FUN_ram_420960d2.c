
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420960d2(uint param_1)

{
  _DAT_ram_600471f0 = _DAT_ram_600471f0 & 0xfffffff0 | param_1 & 0xf;
  return;
}

