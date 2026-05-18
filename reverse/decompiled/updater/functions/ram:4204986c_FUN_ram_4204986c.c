
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204986c(void)

{
  if (DAT_ram_3fcb5370 == '\x01') {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb5424);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb5438);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb5474);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb5460);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb5498);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb54ac);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb54c0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb54dc);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb555c);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb5570);
    (*(code *)&SUB_ram_40011e2c)(1);
    DAT_ram_3fcb5370 = '\0';
  }
  return;
}

