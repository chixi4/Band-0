
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40392eec(void)

{
  if (_DAT_ram_3fcb0f94 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40392ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ram_3fcb0f94)();
    return;
  }
  return;
}

