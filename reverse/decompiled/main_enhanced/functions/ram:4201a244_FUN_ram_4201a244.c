
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201a244(void)

{
  FUN_ram_4201f046();
  FUN_ram_4201f0d8();
  if (_DAT_ram_3fcc506c != 0) {
    thunk_FUN_ram_40390634();
    _DAT_ram_3fcc506c = 0;
  }
  if (_DAT_ram_3fcc5068 != 0) {
    thunk_FUN_ram_40390634();
    _DAT_ram_3fcc5068 = 0;
  }
  if (_DAT_ram_3fcc5064 != 0) {
    thunk_FUN_ram_40390634();
    _DAT_ram_3fcc5064 = 0;
  }
  _DAT_ram_3fcc5060 = 0;
  _DAT_ram_3fcc505c = 0;
  return;
}

