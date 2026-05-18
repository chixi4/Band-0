
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394dce(void)

{
  if (_DAT_ram_3fcb6614 != 0) {
    FUN_ram_40394dba();
    return;
  }
  FUN_ram_40391a02(0);
  while( true ) {
    if (_DAT_ram_3fcb6618 == 0) {
      return;
    }
    if (_DAT_ram_3fcb6610 != 0) break;
    if (_DAT_ram_600c0028 == 0) {
      return;
    }
  }
  return;
}

