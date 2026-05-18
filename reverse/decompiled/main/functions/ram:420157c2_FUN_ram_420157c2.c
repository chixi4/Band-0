
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420157c2(void)

{
  if (DAT_ram_3fcc4f67 != '\0') {
    if (_DAT_ram_3fcc4f68 != 0) {
      FUN_ram_420632c6();
      _DAT_ram_3fcc4f68 = 0;
    }
    if (_DAT_ram_3fcc4f6c != 0) {
      FUN_ram_42063080();
      _DAT_ram_3fcc4f6c = 0;
    }
    DAT_ram_3fcc4f67 = '\0';
  }
  return;
}

