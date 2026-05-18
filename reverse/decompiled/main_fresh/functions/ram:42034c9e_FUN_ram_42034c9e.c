
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42034c9e(void)

{
  if (_DAT_ram_3fcb6bd4 == 0) {
    if (DAT_ram_3fcb6bd0 != '\0') {
      return 5;
    }
    _DAT_ram_3fcb6bd4 = FUN_ram_403a5e02(1,0x18);
    if (_DAT_ram_3fcb6bd4 == 0) {
      return 6;
    }
  }
  return 0;
}

