
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42030aba(void)

{
  int iVar1;
  
  if (DAT_ram_3fcb6bb0 == '\0') {
    iVar1 = FUN_ram_42030a88();
    if (iVar1 != 0) {
      return 6;
    }
    iVar1 = FUN_ram_4202b65c(_DAT_ram_3fcb6bb4,_DAT_ram_3fcb6bb4 + 0x40);
    if (iVar1 != 0) {
      return iVar1;
    }
    DAT_ram_3fcb6bb0 = '\x01';
  }
  FUN_ram_4202d766(_DAT_ram_3fcb6bb4,0x40);
  FUN_ram_4202d766(_DAT_ram_3fcb6bb4 + 0x40,0x20);
  return 0;
}

