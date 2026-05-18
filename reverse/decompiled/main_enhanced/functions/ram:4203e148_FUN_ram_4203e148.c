
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203e148(void)

{
  if (_DAT_ram_3fcdff6c != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcb6a20 + 4);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(&DAT_ram_3fcb6a20);
    FUN_ram_4203e006();
    return;
  }
  FUN_ram_4203e006();
  return;
}

