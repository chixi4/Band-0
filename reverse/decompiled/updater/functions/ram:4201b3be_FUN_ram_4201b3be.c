
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201b3be(void)

{
  while (_DAT_ram_3fcb66f4 != (int *)0x0) {
    _DAT_ram_3fcb66f4 = (int *)*_DAT_ram_3fcb66f4;
    thunk_FUN_ram_40390608();
  }
  return;
}

