
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201ccaa(void)

{
  DAT_ram_3fcc50d0 = 0;
  if (_DAT_ram_3fcc50d4 != 0) {
    FUN_ram_40398498(10);
    _DAT_ram_3fcc50d4 = 0;
  }
  if (DAT_ram_3fcc50e0 != '\0') {
    FUN_ram_42018ba6();
    FUN_ram_42023218();
    FUN_ram_42021a90(0x4200cd68);
    FUN_ram_42021988();
    DAT_ram_3fcc50e0 = '\0';
  }
  if (DAT_ram_3fcc50de != '\0') {
    FUN_ram_420211a6(0x3fcc50d8);
  }
  _DAT_ram_3fcc50e4 = 0;
  (*(code *)&SUB_ram_40010488)(0x3fcbb23c,0,0x40);
  return;
}

