
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403969de(void)

{
  if (_DAT_ram_3fcc4eb4 != 0) {
    FUN_ram_403969ca();
    return;
  }
  FUN_ram_4039245c(0);
  while( true ) {
    if (_DAT_ram_3fcc4eb8 == 0) {
      return;
    }
    if (_DAT_ram_3fcc4eb0 != 0) break;
    if (_DAT_ram_600c0028 == 0) {
      return;
    }
  }
  return;
}

