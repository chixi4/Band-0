
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42048f4e(void)

{
  bool bVar1;
  
  FUN_ram_42047aa6();
  if (((DAT_ram_3fcb537e != '\0') && (DAT_ram_3fcb537f != '\0')) && (DAT_ram_3fcb5380 == '\0')) {
    DAT_ram_3fcb5558 = 1;
    if (_DAT_ram_3fcb5394 == 0) {
      FUN_ram_42048ac2(0,0);
      return;
    }
    bVar1 = DAT_ram_3fcb5371 != '\0';
    if (bVar1) {
      FUN_ram_4039bf06(0);
    }
    FUN_ram_42047c2a(bVar1);
    return;
  }
  return;
}

