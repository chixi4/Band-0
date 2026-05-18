
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203755a(void)

{
  if (_DAT_ram_3fcdfeb8 != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfeb8 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x4203759a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(&DAT_ram_3fcdfeb8);
    return;
  }
  return;
}

