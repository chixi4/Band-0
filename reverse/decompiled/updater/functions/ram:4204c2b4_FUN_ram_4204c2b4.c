
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204c2b4(void)

{
  if (_DAT_ram_3fcb56e8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4204c2be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ram_3fcb56e8)();
    return;
  }
  return;
}

