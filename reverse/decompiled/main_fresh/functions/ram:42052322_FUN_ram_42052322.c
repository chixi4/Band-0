
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42052322(void)

{
  if (_DAT_ram_3fcc52c4 != 0) {
    DAT_ram_3fcc203c = 0;
    FUN_ram_42058690(0x420420e8,0);
    FUN_ram_42058690(0x42041fe6,0);
    FUN_ram_42058d78(_DAT_ram_3fcc52c4);
    _DAT_ram_3fcc52c4 = 0;
  }
  return;
}

