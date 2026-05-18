
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42016ca2(int param_1)

{
  if (_DAT_ram_3fcc4fb4 != param_1) {
    _DAT_ram_3fcc4fb4 = param_1;
    if (_DAT_ram_3fcc4fb0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x42016cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_ram_3fcc4fb0)();
      return;
    }
  }
  return;
}

