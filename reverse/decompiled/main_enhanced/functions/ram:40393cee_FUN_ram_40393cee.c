
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40393cee(void)

{
  if (_DAT_ram_3fcb8440 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40393cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ram_3fcb8440)();
    return;
  }
  return;
}

