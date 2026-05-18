
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42031c04(undefined1 param_1)

{
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
  DAT_ram_3fcb5174 = param_1;
                    /* WARNING: Could not recover jumptable at 0x42031c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
  return;
}

