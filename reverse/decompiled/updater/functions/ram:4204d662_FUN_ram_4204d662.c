
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204d662(uint param_1)

{
  _DAT_ram_60047cec = _DAT_ram_60047cec & 0xfffffff0 | param_1 & 0xf;
  return;
}

