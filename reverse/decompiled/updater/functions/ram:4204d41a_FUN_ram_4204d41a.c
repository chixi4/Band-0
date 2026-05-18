
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204d41a(void)

{
  if (_DAT_ram_3fcdfddc != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    _DAT_ram_3fcdfddc = 0;
  }
  return 0;
}

