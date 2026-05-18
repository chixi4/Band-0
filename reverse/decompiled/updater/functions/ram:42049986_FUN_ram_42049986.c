
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42049986(void)

{
  _DAT_ram_3fcb5584 = _DAT_ram_3fcb5584 + 1;
  if (*(code **)(_DAT_ram_3fcb1020 + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x420499a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcb1020 + 0x24))();
    return;
  }
  return;
}

