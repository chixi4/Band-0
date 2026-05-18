
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204dcba(uint param_1)

{
  _DAT_ram_60047004 = (param_1 & 0x7ff) << 0x10 | _DAT_ram_60047004 & 0xf800ffff;
  return;
}

