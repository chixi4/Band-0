
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207b45e(int param_1)

{
  if (((*(byte *)(param_1 + 4) & 1) != 0) && (_DAT_ram_3fcc4188 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x4207b470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ram_3fcc4188)();
    return;
  }
  return;
}

