
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420ae158(int param_1)

{
  if (param_1 == 0) {
    _DAT_ram_6004a044 = _DAT_ram_6004a044 & 0xffc0c0ff | 0x3e1800;
    _DAT_ram_6004a124 = _DAT_ram_6004a124 & 0xffff03f0 | 0x6004;
    _DAT_ram_6004a804 = _DAT_ram_6004a804 & 0xffff0fff | 0x6000;
    _DAT_ram_6004a104 = _DAT_ram_6004a104 & 0xfffffe00 | 0x1c8;
  }
  else {
    _DAT_ram_6004a044 = _DAT_ram_6004a044 & 0xffffc0ff | 0x3f2100;
    _DAT_ram_6004a124 = _DAT_ram_6004a124 & 0xffff03f0 | 0x8403;
    _DAT_ram_6004a804 = _DAT_ram_6004a804 & 0xffff0fff | 0x9000;
    _DAT_ram_6004a104 = _DAT_ram_6004a104 & 0xfffffe00 | 0x1e2;
  }
  _DAT_ram_6004a014 = _DAT_ram_6004a014 & 0x7fffff | 0x1000000;
  _DAT_ram_60026010 = _DAT_ram_60026010 | 0x20000;
  FUN_ram_420ae146();
  _DAT_ram_6004a068 = 0x404;
  return;
}

