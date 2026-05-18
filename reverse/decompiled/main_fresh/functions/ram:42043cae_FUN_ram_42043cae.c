
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42043cae(void)

{
  if (_DAT_ram_3fcdfef4 != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0xb20))();
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfef4 + 8);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfef4 + 4);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfef4);
                    /* WARNING: Could not recover jumptable at 0x42043d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(&DAT_ram_3fcdfef4);
    return;
  }
  return;
}

