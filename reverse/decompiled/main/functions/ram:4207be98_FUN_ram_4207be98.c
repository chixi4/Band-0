
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4207be98(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe780,&DAT_ram_3c0c426c,0x112);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (_DAT_ram_3fcc4014 == param_1) {
    iVar2 = 2;
    iVar1 = 0;
  }
  else {
    if (_DAT_ram_3fcc4018 != param_1) {
      return -1;
    }
    iVar2 = 4;
    iVar1 = 2;
  }
  while( true ) {
    if (iVar2 == iVar1) {
      return -1;
    }
    if (*(char *)(iVar1 + 0x3fcc419a) == '\0') break;
    iVar1 = iVar1 + 1;
  }
  *(undefined1 *)(iVar1 + 0x3fcc419a) = 1;
  return iVar1;
}

