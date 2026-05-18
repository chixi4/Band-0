
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40395d60(undefined4 param_1)

{
  if (_DAT_ram_3fcc4e5c != (code *)0x0) {
    (*_DAT_ram_3fcc4e5c)();
  }
  if (_DAT_ram_3fcc4e60 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40395d8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ram_3fcc4e60)(param_1);
    return;
  }
  return;
}

