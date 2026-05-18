
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394288(void)

{
  thunk_FUN_ram_40394bd4();
  if (_DAT_ram_6004e800 << 6 < 0) {
    _DAT_ram_6004e800 = 0x4000000;
  }
  if (_DAT_ram_6004e804 << 6 < 0) {
    _DAT_ram_6004e804 = 0x4000000;
  }
  thunk_FUN_ram_40394be4();
  return;
}

