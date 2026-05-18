
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207f4ec(int param_1)

{
  if (*(int *)(_DAT_ram_3fcc4014 + 0x98) == 0) {
    return;
  }
  if ((*(char *)(_DAT_ram_3fcc4014 + 0x128) != '\x05') &&
     (1 < (byte)(*(char *)(_DAT_ram_3fcc4014 + 0x128) - 1U))) {
    return;
  }
  FUN_ram_42089514(&DAT_ram_3fcc4004,0,param_1 << 8);
  return;
}

