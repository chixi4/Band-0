
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039043a(void)

{
  if (_DAT_ram_3fcb6594 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40390444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ram_3fcb6594)();
    return;
  }
  return;
}

