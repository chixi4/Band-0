
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039345a(void)

{
  thunk_FUN_ram_40393ad0();
  if (_DAT_ram_6004e800 << 6 < 0) {
    _DAT_ram_6004e800 = 0x4000000;
  }
  if (_DAT_ram_6004e804 << 6 < 0) {
    _DAT_ram_6004e804 = 0x4000000;
  }
  thunk_FUN_ram_40393ae0();
  return;
}

