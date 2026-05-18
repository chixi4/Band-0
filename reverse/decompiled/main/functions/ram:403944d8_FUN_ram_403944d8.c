
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403944d8(int param_1)

{
  if (param_1 == 0) {
    _DAT_ram_6002600c = _DAT_ram_6002600c & 0xfffffffd;
  }
  else {
    _DAT_ram_6002600c = _DAT_ram_6002600c | 2;
  }
  return;
}

