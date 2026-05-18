
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42092274(void)

{
  if (DAT_ram_3fcc4400 == '\x01') {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc44b4);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc44c8);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc4504);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc44f0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc4528);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc453c);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc4550);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc456c);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc45ec);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc4600);
    (*(code *)&SUB_ram_40011e2c)(1);
    DAT_ram_3fcc4400 = '\0';
  }
  return;
}

