
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42044cec(void)

{
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(_DAT_ram_3fcdfb20 + 4);
                    /* WARNING: Could not recover jumptable at 0x42044d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(_DAT_ram_3fcdfb20 + 0x18);
  return;
}

