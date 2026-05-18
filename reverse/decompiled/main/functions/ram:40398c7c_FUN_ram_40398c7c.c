
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40398c7c(void)

{
  if (_DAT_ram_3fcc4e9c != 0) {
    *(int *)(_DAT_ram_3fcc4e9c + 0x4c) = *(int *)(_DAT_ram_3fcc4e9c + 0x4c) + 1;
  }
  return _DAT_ram_3fcc4e9c;
}

