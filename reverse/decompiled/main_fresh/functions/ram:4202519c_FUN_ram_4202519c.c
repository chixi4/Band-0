
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4202519c(void)

{
  if (1 < _DAT_ram_3fcb6944) {
    _DAT_ram_3fcb6944 = 1;
    FUN_ram_42037944();
    FUN_ram_4202525a();
    if (DAT_ram_3fcb6a3c != '\0') {
      FUN_ram_4204f5ac(2);
      FUN_ram_40391b7a(_DAT_ram_3fcb6940);
      DAT_ram_3fcb6a3c = '\0';
    }
    return 0;
  }
  return 0xffffffff;
}

