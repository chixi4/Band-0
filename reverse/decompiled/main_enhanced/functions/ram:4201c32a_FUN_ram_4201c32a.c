
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201c32a(undefined8 param_1)

{
  int iVar1;
  int in_a5;
  
  if (*(char *)(in_a5 + 0xb1) == '\0') {
    _DAT_ram_3fcc50c8 = 1;
    _DAT_ram_3fcc50b4 = 0;
    *(undefined1 *)(gp + -0x77c) = 1;
  }
  else {
    _DAT_ram_3fcc50c4 = _DAT_ram_3fcc50c0;
    iVar1 = FUN_ram_42016760(param_1,*(undefined8 *)(in_a5 + 0xb8));
    if (iVar1 != 0) {
      FUN_ram_4201c2de();
      return;
    }
    _DAT_ram_3fcc50c8 = 2;
    _DAT_ram_3fcc50b4 = 0;
    _DAT_ram_3fcc50ac = 0;
    *(undefined1 *)(gp + -0x77c) = 1;
  }
  FUN_ram_42018dcc();
  return;
}

