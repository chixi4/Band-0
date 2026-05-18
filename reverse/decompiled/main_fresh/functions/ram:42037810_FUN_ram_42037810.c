
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42037810(void)

{
  if (_DAT_ram_3fcdfecc != 0) {
    (**(code **)(_DAT_ram_3fcdfec8 + 0x10))();
    _DAT_ram_3fcdfecc = 0;
  }
  if (_DAT_ram_3fcdfed0 != 0) {
    (**(code **)(_DAT_ram_3fcdfec8 + 0x10))();
    _DAT_ram_3fcdfed0 = 0;
  }
  return;
}

