
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420af7be(int param_1)

{
  _DAT_ram_60046094 = _DAT_ram_60046094 & 0x7fffffff | param_1 << 0x1f;
  return;
}

