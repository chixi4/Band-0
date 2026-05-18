
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42049240(void)

{
  _DAT_ram_3fcb5494 = 0;
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb5460);
  if (DAT_ram_3fcb5491 != '\0') {
    (*(code *)&SUB_ram_40011d4c)();
    DAT_ram_3fcb5491 = 1;
    FUN_ram_40392eec(3,0);
    FUN_ram_40392eec(4,1);
    FUN_ram_40392eec(5,1);
    (*(code *)&SUB_ram_40011f70)();
    return;
  }
  return;
}

