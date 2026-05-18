
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201b9d4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_a4;
  uint *extraout_a5;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [4];
  int iStack_30;
  
  uVar3 = *(uint *)(gp + -0x784);
  uVar1 = *param_1;
  uVar2 = 1;
  if (uVar3 == 0) {
    if (uVar1 == 1) {
      if (param_1[1] != 2) {
        return;
      }
      if ((char)param_1[2] == '\0') {
        return;
      }
      goto LAB_ram_4201b9fa;
    }
    if (uVar1 != 0) {
      return;
    }
    _DAT_ram_3fcc50a4 = _DAT_ram_3fcc50a4 - param_1[1];
    if (0 < _DAT_ram_3fcc50a4) {
      return;
    }
    FUN_ram_42015f20();
    FUN_ram_40398498(8);
    uVar2 = FUN_ram_42010478();
    uVar3 = extraout_a4;
    param_1 = extraout_a5;
  }
  if (uVar3 == uVar2) {
    if (uVar1 == uVar3) {
      FUN_ram_4201670c();
      *(undefined4 *)(gp + -0x784) = 2;
      *(char *)(gp + -0x788) = (char)uVar1;
      goto LAB_ram_4201ba48;
    }
  }
  else if (uVar1 == uVar2) {
    uVar3 = param_1[1];
    if (uVar3 == 2) {
LAB_ram_4201b9fa:
      FUN_ram_42018caa(0);
      return;
    }
    if (uVar3 < 3) {
      if (uVar3 == uVar1) {
LAB_ram_4201ba48:
        *(undefined4 *)(gp + -0x78c) = 0xffffffff;
        FUN_ram_42018dcc();
        return;
      }
    }
    else if (uVar3 - 3 <= uVar1) goto LAB_ram_4201ba48;
  }
  else if (uVar1 == 0) {
    FUN_ram_420b07a6(auStack_40);
    FUN_ram_420b0592(auStack_40,auStack_34);
    if (iStack_30 != *(int *)(gp + -0x78c)) {
      *(int *)(gp + -0x78c) = iStack_30;
      FUN_ram_42018dcc();
    }
  }
  return;
}

