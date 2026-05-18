
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42049fb8(void)

{
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x18))(2);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x10))
            (1,0,0,extraout_a3,extraout_a4,*(code **)(_DAT_ram_3fcdfdd8 + 0x10));
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xc))(0,1);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xc))(2,1);
  FUN_ram_4204da62();
  return;
}

