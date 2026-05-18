
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204ab9e(void)

{
  if (_DAT_ram_3fcb55b8 != 0) {
    FUN_ram_42033fd8(6,0x20,3,0x3c07ecd4);
    (*(code *)&SUB_ram_40011c1c)(_DAT_ram_3fcb55b8);
    _DAT_ram_3fcb55b8 = 0;
  }
  return;
}

