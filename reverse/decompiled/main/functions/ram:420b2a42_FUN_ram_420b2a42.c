
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420b2a42(void)

{
  undefined4 extraout_a3;
  
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc44b4);
                    /* WARNING: Could not recover jumptable at 0x420b2a82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xf0))
            (0x3fcc44b4,_DAT_ram_3fcc45c4,0,extraout_a3,&DAT_ram_3fcc4000,
             *(code **)(_DAT_ram_3fcdfdd8 + 0xf0));
  return;
}

