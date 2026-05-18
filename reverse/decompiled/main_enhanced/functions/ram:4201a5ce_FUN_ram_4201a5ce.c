
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201a5ce(undefined8 param_1)

{
  int in_a5;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(in_a5 + 0xb8);
  *(undefined4 *)(in_a5 + 0x80) = 0;
  _DAT_ram_3fcc507c = 0;
  _DAT_ram_3fcc5074 = 0;
  _DAT_ram_3fcc5078 = 1;
  _DAT_ram_3fcc5070 = 0;
  *(undefined1 *)(gp + -0x792) = 1;
  FUN_ram_42018dcc(param_1,uVar1);
  return;
}

