
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390466(void)

{
  if (_DAT_ram_3fcc4e1c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40390470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ram_3fcc4e1c)();
    return;
  }
  return;
}

