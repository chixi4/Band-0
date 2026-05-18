
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42091a88(void)

{
  if (_DAT_ram_3fcc4594 == 0) {
    FUN_ram_420919c6(0);
  }
  FUN_ram_42090fde();
  (*(code *)&SUB_ram_40011f70)();
  if (_DAT_ram_3fcc4424 == 0) {
    FUN_ram_4207a038(6,0x1000,3,&DAT_ram_3c1006d0);
    DAT_ram_3fcc45c8 = 0;
  }
  return;
}

