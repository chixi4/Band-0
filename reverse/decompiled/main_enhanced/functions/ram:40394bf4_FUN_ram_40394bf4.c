
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394bf4(void)

{
  FUN_ram_40394bd4();
  _DAT_ram_3fcc4e3c = _DAT_ram_3fcc4e3c + -1;
  if (_DAT_ram_3fcc4e3c < 0) {
    FUN_ram_40394be4();
  }
  else if (_DAT_ram_3fcc4e3c == 0) {
    _DAT_ram_6004e844 = _DAT_ram_6004e844 & 0xfffeffff;
    _DAT_ram_6004e848 = _DAT_ram_6004e848 | 0x40000;
  }
  FUN_ram_40394be4();
  return;
}

