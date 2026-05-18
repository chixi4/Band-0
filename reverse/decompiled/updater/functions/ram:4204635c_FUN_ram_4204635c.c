
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204635c(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_42033fd8(1,8,4,0x3c07cbc8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4204637c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
  return;
}

