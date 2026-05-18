
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42094eb2(void)

{
  if (_DAT_ram_3fcc4770 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x42094ebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ram_3fcc4770)();
    return;
  }
  return;
}

