
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203c1f6(void)

{
  FUN_ram_4203b74e();
  thunk_FUN_ram_4204ac2a();
  FUN_ram_420693be();
  if (_DAT_ram_3fcdfdb8 != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x24))();
    _DAT_ram_3fcdfdb8 = 0;
  }
  if (_DAT_ram_3fcb3fb8 != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x50))();
    _DAT_ram_3fcb3fb8 = 0;
  }
  return 0;
}

