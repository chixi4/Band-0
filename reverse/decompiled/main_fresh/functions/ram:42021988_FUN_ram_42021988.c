
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42021988(void)

{
  if (DAT_ram_3fcc516c != '\0') {
    FUN_ram_420b2e6c(0x8000c000,0xffffffff,0x420114f0);
    FUN_ram_420b2e6c(0x18ff1f,0,0x420114a0);
    FUN_ram_420845bc();
    FUN_ram_42060fcc();
    if (_DAT_ram_3fcc5160 != 0) {
      FUN_ram_42061538();
      _DAT_ram_3fcc5160 = 0;
    }
    if (_DAT_ram_3fcc515c != 0) {
      FUN_ram_42061538();
      _DAT_ram_3fcc515c = 0;
    }
    if (_DAT_ram_3fcc5164 != 0) {
      FUN_ram_40397a56();
      _DAT_ram_3fcc5164 = 0;
    }
    (*(code *)&SUB_ram_40010488)(&DAT_ram_3fcc16e4,0,0x20);
    _DAT_ram_3fcc5150 = 0;
    _DAT_ram_3fcc5158 = 0;
    _DAT_ram_3fcc5154 = 0;
    DAT_ram_3fcc516c = '\0';
    FUN_ram_42021346(0);
  }
  return 0;
}

