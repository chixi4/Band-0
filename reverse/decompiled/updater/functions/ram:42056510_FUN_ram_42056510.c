
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42056510(void)

{
  char cVar1;
  
  cVar1 = DAT_ram_3fcb680c;
  DAT_ram_3fcb680c = DAT_ram_3fcb680c + -1;
  if (cVar1 == '\x01') {
    FUN_ram_4205611a(_DAT_ram_3fcb6810);
    _DAT_ram_3fcb6810 = 0;
    return;
  }
  return;
}

