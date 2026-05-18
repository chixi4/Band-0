
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4039b04c(void)

{
  bool bVar1;
  int iVar2;
  
  if (_DAT_ram_3fcc5224 == 0) {
    _DAT_ram_3fcc5224 = FUN_ram_4039731c(1);
  }
  iVar2 = FUN_ram_403989f4();
  bVar1 = true;
  if (iVar2 != 1) {
    iVar2 = FUN_ram_403975e0(_DAT_ram_3fcc5224);
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}

