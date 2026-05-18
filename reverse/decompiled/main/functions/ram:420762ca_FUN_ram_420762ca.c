
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420762ca(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fbb9c);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x420762ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
  return;
}

