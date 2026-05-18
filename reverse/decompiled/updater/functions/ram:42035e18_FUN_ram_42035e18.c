
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42035e18(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07d174,0x3c072718,0x112);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (_DAT_ram_3fcb4f84 == param_1) {
    iVar2 = 2;
    iVar1 = 0;
  }
  else {
    if (_DAT_ram_3fcb4f88 != param_1) {
      return -1;
    }
    iVar2 = 4;
    iVar1 = 2;
  }
  while( true ) {
    if (iVar2 == iVar1) {
      return -1;
    }
    if (*(char *)(iVar1 + 0x3fcb510a) == '\0') break;
    iVar1 = iVar1 + 1;
  }
  *(undefined1 *)(iVar1 + 0x3fcb510a) = 1;
  return iVar1;
}

