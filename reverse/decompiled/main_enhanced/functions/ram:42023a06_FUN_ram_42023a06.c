
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42023a06(void)

{
  int iVar1;
  uint uVar2;
  
  if (_DAT_ram_3fcc1ac4 != 0) {
    if (_DAT_ram_3fcc1a58 == 6) {
      return 0x103;
    }
    if (_DAT_ram_3fcc1a58 == 5) {
      return 0x103;
    }
    DAT_ram_3fcc1a5c = 1;
    iVar1 = FUN_ram_403980d6(0x103);
    while ((_DAT_ram_3fcc1ac4 != 0 && (uVar2 = FUN_ram_403980d6(), uVar2 < iVar1 + 100U))) {
      FUN_ram_40398498(5);
    }
    _DAT_ram_3fcc1abc = 0;
    _DAT_ram_3fcc1ac0 = 0;
  }
  return 0;
}

