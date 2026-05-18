
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204a0d0(void)

{
  if (_DAT_ram_3fcdfdac != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x98))();
    _DAT_ram_3fcdfdac = 0;
  }
  if (_DAT_ram_3fcdfdb0 != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x17c))();
    _DAT_ram_3fcdfdb0 = 0;
  }
  return 0;
}

