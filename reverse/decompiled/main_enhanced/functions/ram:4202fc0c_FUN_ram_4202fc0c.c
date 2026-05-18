
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202fc0c(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4202ee4a();
  if (iVar1 == 0) {
    *(byte *)(_DAT_ram_3fcb6ba0 + 0x111) = *(byte *)(_DAT_ram_3fcb6ba0 + 0x111) | 4;
  }
  return;
}

