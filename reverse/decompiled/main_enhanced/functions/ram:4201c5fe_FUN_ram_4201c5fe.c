
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201c5fe(void)

{
  bool bVar1;
  
  _DAT_ram_3fcc50c0 = FUN_ram_42016158();
  bVar1 = 0xf < _DAT_ram_3fcc50c0;
  if (bVar1) {
    _DAT_ram_3fcc50c0 = 0;
  }
  DAT_ram_3fcc50b1 = !bVar1;
  _DAT_ram_3fcc50c8 = 0;
  _DAT_ram_3fcc50b8 = 0;
  _DAT_ram_3fcc50c4 = _DAT_ram_3fcc50c0 & -(uint)(byte)DAT_ram_3fcc50b1;
  _DAT_ram_3fcc50b4 = 0;
  *(undefined1 *)(gp + -0x77c) = 1;
  _DAT_ram_3fcc50bc = 0;
  DAT_ram_3fcc50b0 = 0;
  _DAT_ram_3fcc50ac = 0;
  FUN_ram_42018dcc();
  return;
}

