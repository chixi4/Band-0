
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_40398c92(void)

{
  bool bVar1;
  int iVar2;
  
  if (_DAT_ram_3fcb6700 == 0) {
    _DAT_ram_3fcb6700 = FUN_ram_403956a4(1);
  }
  iVar2 = FUN_ram_403968c6();
  bVar1 = true;
  if (iVar2 != 1) {
    iVar2 = FUN_ram_403958fa(_DAT_ram_3fcb6700);
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}

