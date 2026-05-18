
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204b22e(void)

{
  while (_DAT_ram_3fcc5214 != (int *)0x0) {
    _DAT_ram_3fcc5214 = (int *)*_DAT_ram_3fcc5214;
    thunk_FUN_ram_40390634();
  }
  return;
}

