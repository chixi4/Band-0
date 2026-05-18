
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420435f2(void)

{
  if (_DAT_ram_3fcdfef8 != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))();
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfef8 + 4);
                    /* WARNING: Could not recover jumptable at 0x42043642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(&DAT_ram_3fcdfef8);
    return;
  }
  return;
}

