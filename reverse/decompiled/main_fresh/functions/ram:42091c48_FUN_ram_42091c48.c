
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42091c48(void)

{
  _DAT_ram_3fcc4524 = 0;
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc44f0);
  if (DAT_ram_3fcc4521 != '\0') {
    (*(code *)&SUB_ram_40011d4c)();
    DAT_ram_3fcc4521 = 1;
    FUN_ram_40393cee(3,0);
    FUN_ram_40393cee(4,1);
    FUN_ram_40393cee(5,1);
    (*(code *)&SUB_ram_40011f70)();
    return;
  }
  return;
}

