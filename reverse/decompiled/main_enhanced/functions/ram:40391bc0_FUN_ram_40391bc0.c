
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40391bc0(void)

{
  int iVar1;
  
  if (DAT_ram_3fcc51b1 == '\0') {
    return 0;
  }
  if ((_DAT_ram_3fcc51c4 == (code *)0x0) || (iVar1 = (*_DAT_ram_3fcc51c4)(), iVar1 == 0)) {
    if (_DAT_ram_3fcc51c8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40391bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*_DAT_ram_3fcc51c8)();
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}

