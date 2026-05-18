
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42019456(void)

{
  int in_a4;
  int in_a5;
  
  if (in_a5 < 3) {
    *(int *)(in_a4 + 0x20) = in_a5 + 1;
    _DAT_ram_3fcc501c = 0;
  }
  else {
    _DAT_ram_3fcc5018 = FUN_ram_403926c4();
    _DAT_ram_3fcc5018 = _DAT_ram_3fcc5018 % 0x15e;
    _DAT_ram_3fcc5024 = 1;
    *(undefined1 *)(gp + -0x79f) = 1;
  }
  FUN_ram_42018dcc();
  return;
}

