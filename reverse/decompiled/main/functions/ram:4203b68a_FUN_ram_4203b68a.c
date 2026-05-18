
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203b68a(void)

{
  if (_DAT_ram_3fcb6a18 != 0) {
    (**(code **)(_DAT_ram_3fcdfec8 + 0x10))();
    _DAT_ram_3fcb6a18 = 0;
  }
  return 0;
}

