
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42053934(void)

{
  int iVar1;
  
  FUN_ram_4205c96c();
  DAT_ram_3fcc52e0 = 0;
  FUN_ram_4205c996();
  iVar1 = _DAT_ram_3fcc52f0;
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(iVar1 + 0x78) != 0) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  FUN_ram_42054b8a();
  return;
}

