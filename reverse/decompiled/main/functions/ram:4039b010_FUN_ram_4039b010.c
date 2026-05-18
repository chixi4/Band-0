
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039b010(void)

{
  int iVar1;
  
  if (_DAT_ram_3fcc5224 == 0) {
    _DAT_ram_3fcc5224 = FUN_ram_4039731c(1);
  }
  iVar1 = FUN_ram_403989f4();
  if (iVar1 != 1) {
    FUN_ram_403975e0(_DAT_ram_3fcc5224,0xffffffff);
    return;
  }
  return;
}

