
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403937f4(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4039d97a();
  if ((iVar1 == 0) || ((_DAT_ram_600c0008 & 8) != 0)) {
    wfi();
  }
  return;
}

