
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42025ade(void)

{
  _DAT_ram_3fcb6b4c = FUN_ram_403a5e02(1,0x400);
  if (_DAT_ram_3fcb6b4c != 0) {
    _DAT_ram_3fcb6b20 = FUN_ram_403a5e02(1,0x800);
    if (_DAT_ram_3fcb6b20 != 0) {
      return 0;
    }
    FUN_ram_403a5e1e(_DAT_ram_3fcb6b4c);
    _DAT_ram_3fcb6b4c = 0;
  }
  return 0x101;
}

