
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201f096(void)

{
  FUN_ram_4201f046();
  if (_DAT_ram_3fcc5138 != 0) {
    thunk_FUN_ram_40390634();
    _DAT_ram_3fcc5138 = 0;
  }
  if (_DAT_ram_3fcc5134 != 0) {
    thunk_FUN_ram_40390634();
    _DAT_ram_3fcc5134 = 0;
  }
  return;
}

