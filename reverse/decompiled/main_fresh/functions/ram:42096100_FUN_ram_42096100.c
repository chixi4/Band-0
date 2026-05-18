
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42096100(uint param_1)

{
  _DAT_ram_60047cec = _DAT_ram_60047cec & 0xfffffff0 | param_1 & 0xf;
  return;
}

