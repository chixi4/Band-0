
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203ac9c(void)

{
  if (_DAT_ram_3fcdff60 != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdff60 + 8);
                    /* WARNING: Could not recover jumptable at 0x4203acdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(&DAT_ram_3fcdff60);
    return;
  }
  return;
}

