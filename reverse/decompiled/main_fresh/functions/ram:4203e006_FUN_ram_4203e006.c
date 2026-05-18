
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203e006(void)

{
  (**(code **)(_DAT_ram_3fcdfed0 + 0x59c))();
  (**(code **)(_DAT_ram_3fcdfecc + 0xaf4))();
  (**(code **)(_DAT_ram_3fcdfecc + 0xaf0))();
  (**(code **)(_DAT_ram_3fcdfed0 + 0x590))();
  (**(code **)(_DAT_ram_3fcdfed0 + 0x594))();
  (**(code **)(_DAT_ram_3fcdfecc + 0xaec))();
  (**(code **)(_DAT_ram_3fcdfed0 + 0x58c))();
  (**(code **)(_DAT_ram_3fcdfecc + 0xae8))();
  (**(code **)(_DAT_ram_3fcdfecc + 0xae4))();
  (**(code **)(_DAT_ram_3fcdfecc + 0xadc))();
  (**(code **)(_DAT_ram_3fcdfecc + 0xad8))();
  (**(code **)(_DAT_ram_3fcdfecc + 0xad4))();
  (**(code **)(_DAT_ram_3fcdfecc + 0xae0))();
  if (_DAT_ram_3fcdff6c != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdff6c + 0x10);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdff6c + 0x14);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdff6c + 0x18);
    (**(code **)(_DAT_ram_3fcdfecc + 0xb18))();
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdff6c + 0x1c);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdff6c + 0x20);
                    /* WARNING: Could not recover jumptable at 0x4203e138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(&DAT_ram_3fcdff6c);
    return;
  }
  return;
}

