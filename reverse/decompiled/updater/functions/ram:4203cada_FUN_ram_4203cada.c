
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203cada(void)

{
  if (_DAT_ram_3fcdfb24 != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    _DAT_ram_3fcdfb24 = 0;
  }
  return 0;
}

