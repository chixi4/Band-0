
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42019a30(void)

{
  uint uVar1;
  
  if (_DAT_ram_3fcc5040 == 0) {
    FUN_ram_42015586();
    *(undefined4 *)(gp + -0x798) = 1;
    _DAT_ram_3fcc5040 = 2;
    _DAT_ram_3fcc503c = 0;
    uVar1 = FUN_ram_403926c4();
  }
  else {
    if (_DAT_ram_3fcc5040 != 1) {
      return;
    }
    FUN_ram_42015586();
    _DAT_ram_3fcc5040 = 2;
    _DAT_ram_3fcc503c = 0;
    uVar1 = FUN_ram_403926c4();
  }
  *(uint *)(gp + -0x79c) = (uVar1 & 1) + 1;
  FUN_ram_42018dcc();
  return;
}

