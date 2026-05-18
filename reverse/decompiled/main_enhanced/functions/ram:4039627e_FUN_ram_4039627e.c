
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039627e(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_ram_4039693c();
  if ((DAT_ram_3fcc51b8 == '\0') && (iVar2 = FUN_ram_40391bc0(), iVar2 == 0)) {
    FUN_ram_40391b7a(_DAT_ram_3fcc51b4);
    DAT_ram_3fcc51b8 = '\x01';
  }
  FUN_ram_40396956(uVar1);
  return;
}

