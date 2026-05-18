
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207933e(void)

{
  undefined4 extraout_a3;
  
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb5424);
                    /* WARNING: Could not recover jumptable at 0x4207937e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xf0))
            (0x3fcb5424,_DAT_ram_3fcb5534,0,extraout_a3,&DAT_ram_3fcb5000,
             *(code **)(_DAT_ram_3fcdfdd8 + 0xf0));
  return;
}

