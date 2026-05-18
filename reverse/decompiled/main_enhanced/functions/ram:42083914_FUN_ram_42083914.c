
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42083914(void)

{
  FUN_ram_42082b4a();
  thunk_FUN_ram_42093642();
  FUN_ram_420ab800();
  if (_DAT_ram_3fcdfdb8 != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x24))();
    _DAT_ram_3fcdfdb8 = 0;
  }
  if (_DAT_ram_3fcc3040 != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x50))();
    _DAT_ram_3fcc3040 = 0;
  }
  return 0;
}

