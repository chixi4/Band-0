
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4204d7f4(uint param_1)

{
  return (1 << (param_1 & 0x1f) & _DAT_ram_60047814) != 0;
}

