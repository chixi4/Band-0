
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204de5c(uint param_1)

{
  _DAT_ram_6004d030 = param_1 >> 10 & 0xffff | _DAT_ram_6004d030 & 0xffff0000;
  return;
}

