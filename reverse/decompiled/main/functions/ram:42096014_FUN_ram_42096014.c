
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42096014(void)

{
  if (_DAT_ram_3fcb84cc != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    _DAT_ram_3fcb84cc = 0;
  }
  return 0;
}

