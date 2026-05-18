
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a5abe(void)

{
  (**(code **)(_DAT_ram_3fcdfecc + 0xb60))(1,1);
  if (_DAT_ram_6004e038 != 0) {
    if (_DAT_ram_6004e024 != 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x988))();
    }
    (**(code **)(_DAT_ram_3fcdfecc + 0x8d0))(*(undefined4 *)(_DAT_ram_3fcdfeb8 + 0xc));
  }
                    /* WARNING: Could not recover jumptable at 0x403a5b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfecc + 0xb60))(1,0);
  return;
}

