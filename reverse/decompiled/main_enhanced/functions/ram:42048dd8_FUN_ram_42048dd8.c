
uint FUN_ram_42048dd8(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x10;
  do {
    iVar2 = FUN_ram_420491d0(0,iVar1,0);
    if (iVar2 == 0) {
      return iVar1 - 0x10U & 0xff;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x21);
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

