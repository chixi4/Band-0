
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207b474(int param_1)

{
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
                    /* WARNING: Could not recover jumptable at 0x4207b49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_1 + 4);
  return;
}

