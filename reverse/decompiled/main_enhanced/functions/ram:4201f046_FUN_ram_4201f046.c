
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201f046(void)

{
  int iVar1;
  
  if ((DAT_ram_3fcc5130 != '\0') && (iVar1 = FUN_ram_403975e0(_DAT_ram_3fcc5128,1000), iVar1 != 1))
  {
    if (_DAT_ram_3fcc512c != 0) {
      FUN_ram_40397f1c();
      _DAT_ram_3fcc512c = 0;
    }
    DAT_ram_3fcc5130 = '\0';
  }
  return;
}

