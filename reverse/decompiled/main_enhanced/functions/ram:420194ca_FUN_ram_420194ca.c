
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420194ca(undefined8 param_1)

{
  int in_a3;
  int iVar1;
  int in_a5;
  
  iVar1 = *(int *)(in_a3 + 0x24);
  if (iVar1 == 0) {
    _DAT_ram_3fcc5018 = FUN_ram_403926c4(param_1,*(undefined8 *)(in_a5 + 0xb8));
    _DAT_ram_3fcc5018 = _DAT_ram_3fcc5018 % 0x15e;
    _DAT_ram_3fcc5024 = 1;
    *(undefined1 *)(gp + -0x79f) = 1;
  }
  else {
    if (iVar1 != in_a5) {
      return;
    }
    *(undefined4 *)(in_a3 + 0x24) = 2;
    *(char *)(gp + -0x79f) = (char)iVar1;
  }
  FUN_ram_42018dcc();
  return;
}

