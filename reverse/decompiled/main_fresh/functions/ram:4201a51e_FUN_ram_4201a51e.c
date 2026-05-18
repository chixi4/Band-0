
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201a51e(void)

{
  _DAT_ram_3fcc5074 = FUN_ram_403926c4();
  _DAT_ram_3fcc5074 = _DAT_ram_3fcc5074 & 3;
  do {
    _DAT_ram_3fcc5078 = FUN_ram_403926c4();
    _DAT_ram_3fcc5078 = _DAT_ram_3fcc5078 & 3;
  } while (_DAT_ram_3fcc5078 == _DAT_ram_3fcc5074);
  return;
}

