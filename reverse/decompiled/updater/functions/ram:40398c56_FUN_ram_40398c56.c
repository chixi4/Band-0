
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40398c56(void)

{
  int iVar1;
  
  if (_DAT_ram_3fcb6700 == 0) {
    _DAT_ram_3fcb6700 = FUN_ram_403956a4(1);
  }
  iVar1 = FUN_ram_403968c6();
  if (iVar1 != 1) {
    FUN_ram_403958fa(_DAT_ram_3fcb6700,0xffffffff);
    return;
  }
  return;
}

