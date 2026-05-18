
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204de72(int param_1)

{
  _DAT_ram_6004d030 = _DAT_ram_6004d030 & 0xffff | param_1 << 0x10;
  return;
}

