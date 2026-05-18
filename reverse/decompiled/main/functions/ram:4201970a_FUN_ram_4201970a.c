
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201970a(void)

{
  uint uVar1;
  int iVar2;
  int local_40;
  int iStack_3c;
  undefined1 auStack_34 [12];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  if (_DAT_ram_3fcc5038 != 0) {
    return;
  }
  FUN_ram_420b07a6(&local_40);
  if ((iStack_3c < 1) && ((iStack_3c != 0 || (local_40 == 0)))) {
LAB_ram_42019736:
    if (_DAT_ram_3fcc5028 == 0xffffffff) goto LAB_ram_42019810;
    _DAT_ram_3fcc5028 = 0xffffffff;
    _DAT_ram_3fcc5034 = FUN_ram_403926c4();
    _DAT_ram_3fcc5034 = _DAT_ram_3fcc5034 % 0x12;
    _DAT_ram_3fcc5030 = FUN_ram_403926c4();
    _DAT_ram_3fcc5030 = _DAT_ram_3fcc5030 % 0x1c;
    _DAT_ram_3fcc502c = FUN_ram_403926c4();
  }
  else {
    iVar2 = FUN_ram_420b0592(&local_40,auStack_34);
    if ((iVar2 == 0) || (iStack_20 + 0x76c < 0x7ea)) goto LAB_ram_42019736;
    uVar1 = (iStack_24 + 1) * 100 + (iStack_20 + 0x76c) * 10000 + iStack_28;
    if (uVar1 == _DAT_ram_3fcc5028) goto LAB_ram_42019810;
    _DAT_ram_3fcc5028 = uVar1;
    _DAT_ram_3fcc5034 = FUN_ram_42019694(uVar1 ^ 0x434f4c52);
    _DAT_ram_3fcc5034 = _DAT_ram_3fcc5034 % 0x12;
    _DAT_ram_3fcc5030 = FUN_ram_42019694(uVar1 ^ 0x444f2020);
    _DAT_ram_3fcc5030 = _DAT_ram_3fcc5030 % 0x1c;
    _DAT_ram_3fcc502c = FUN_ram_42019694(uVar1 ^ 0x444f4e54);
  }
  _DAT_ram_3fcc502c = _DAT_ram_3fcc502c % 0x1c;
LAB_ram_42019810:
  _DAT_ram_3fcc5038 = 1;
  *(undefined1 *)(gp + -0x79e) = 1;
  FUN_ram_42018dcc();
  return;
}

