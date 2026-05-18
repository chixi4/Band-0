
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420795c6(uint param_1)

{
  _DAT_ram_6004d024 = _DAT_ram_6004d024 & 0xffff0000 | param_1 & 0xffff;
  return;
}

