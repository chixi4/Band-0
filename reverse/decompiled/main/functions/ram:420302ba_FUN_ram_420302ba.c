
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420302ba(void)

{
  int iVar1;
  
  iVar1 = 6;
  if ((_DAT_ram_3fcb6ba8 != (char *)0x0) && (iVar1 = 0, *_DAT_ram_3fcb6ba8 == '\0')) {
    iVar1 = FUN_ram_42030252();
    if (iVar1 == 0) {
      iVar1 = 900;
    }
    else if (0xa1b7 < (iVar1 - 1U & 0xffff)) {
      return 0x12;
    }
    iVar1 = FUN_ram_42030232(iVar1);
    if (iVar1 == 0) {
      *_DAT_ram_3fcb6ba8 = '\x01';
    }
  }
  return iVar1;
}

