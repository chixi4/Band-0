
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_40394d8e(void)

{
  if (_DAT_ram_3fcb6610 != 0) {
    _DAT_ram_3fcb6610 = _DAT_ram_3fcb6610 + -1;
    if (_DAT_ram_3fcb6610 == 0) {
      FUN_ram_40394d50(_DAT_ram_3fcb660c);
      return;
    }
  }
  return;
}

