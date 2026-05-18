
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42038146(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x42038160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0xa1c))(0x3fcb68cc);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4203816e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfecc + 0xbc4))(0x3fcb68cc);
  return;
}

