
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420189ea(int param_1)

{
  if (_DAT_ram_3fcc5008 != param_1) {
    _DAT_ram_3fcc5008 = param_1;
    if (_DAT_ram_3fcc5004 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x42018a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_ram_3fcc5004)();
      return;
    }
  }
  return;
}

