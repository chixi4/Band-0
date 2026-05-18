
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204553a(void)

{
  if (_DAT_ram_3fcdfebc != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfebc + 0x8c);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfebc + 0x88);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfebc + 0x84);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfebc + 0x80);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfebc + 0x7c);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfebc + 0x78);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfebc + 0x90);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfebc + 100);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfebc + 0x68);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdfebc + 0x60);
                    /* WARNING: Could not recover jumptable at 0x42045630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(&DAT_ram_3fcdfebc);
    return;
  }
  return;
}

