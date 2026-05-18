
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201ce64(void)

{
  if (_DAT_ram_3fcc50f8 != 0) {
    FUN_ram_40398498(0xf);
    _DAT_ram_3fcc50f8 = 0;
  }
  if (DAT_ram_3fcc50fc != '\0') {
    FUN_ram_42023218();
    FUN_ram_42022110();
    FUN_ram_42021988();
    DAT_ram_3fcc50fc = '\0';
  }
  if (DAT_ram_3fcc50f6 != '\0') {
    FUN_ram_420211a6(0x3fcc50f0);
  }
  _DAT_ram_3fcc5100 = 0;
  DAT_ram_3fcbb310 = 0;
  DAT_ram_3fcbb2d0 = 0;
  return;
}

