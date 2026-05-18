
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203717a(void)

{
  if (_DAT_ram_3fcdfed8 != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))();
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfed8 + 4);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfed8 + 8);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfed8 + 0xc);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfed8 + 0x1c);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfed8 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x42037212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(&DAT_ram_3fcdfed8);
    return;
  }
  return;
}

