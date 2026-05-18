
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420159f0(void)

{
  int iVar1;
  
  fence();
  _DAT_ram_3fcc4f88 = 0;
  fence();
  DAT_ram_3fcc4f70 = 0;
  DAT_ram_3fcc4f80 = 1;
  if ((_DAT_ram_3fcc4f84 != 0) && (iVar1 = FUN_ram_403930fe(), iVar1 == 0)) {
    FUN_ram_40392f42(_DAT_ram_3fcc4f84,56000,0);
    return;
  }
  return;
}

