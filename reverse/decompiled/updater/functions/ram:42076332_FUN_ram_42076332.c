
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42076332(int param_1)

{
  _DAT_ram_6004a068 = 0x404;
  if (param_1 == 0) {
    _DAT_ram_6004a05c = _DAT_ram_6004a05c & 0x2ef00000 | 0x400;
  }
  else {
    _DAT_ram_6004a05c = _DAT_ram_6004a05c & 0xfff80000 | 0xd1080800;
  }
  return;
}

