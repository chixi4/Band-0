
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390f8a(uint param_1)

{
  _DAT_ram_600080b0 = param_1 >> 0xc & 0xffff | (param_1 >> 0xc) << 0x10;
  return;
}

