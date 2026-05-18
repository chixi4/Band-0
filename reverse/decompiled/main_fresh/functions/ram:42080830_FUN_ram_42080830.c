
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42080830(void)

{
  int iVar1;
  
  iVar1 = 4;
  if (_DAT_ram_3fcc3028 - 1U < 4) {
    iVar1 = 4 - _DAT_ram_3fcc3028;
  }
  return iVar1;
}

