
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42019b2c(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_14 [8];
  
  iVar1 = FUN_ram_4201f03c();
  if (iVar1 != 0) goto LAB_ram_42019b3a;
  iVar1 = FUN_ram_4201ee6a();
  if (iVar1 == 0) {
    return;
  }
  iVar2 = FUN_ram_4201605e();
  if (_DAT_ram_3fcc5040 == 1) {
    uVar4 = 5;
    if (*(int *)(gp + -0x798) == 1) {
      uVar4 = 0;
    }
    FUN_ram_420199c6(uVar4);
    FUN_ram_4201f108(0,199);
    return;
  }
  if (_DAT_ram_3fcc5040 != 2) {
    if (_DAT_ram_3fcc5040 != 0) {
      return;
    }
    if (iVar2 == 0) {
      pcVar3 = "BC-SHA256";
      uVar4 = 0x440;
    }
    else {
      pcVar3 = "LID_PORT";
      uVar4 = 0x398;
    }
    iVar1 = FUN_ram_42021020(pcVar3,uVar4,iVar1,auStack_14);
    if (iVar1 != 0) {
      FUN_ram_4201eeb2(0);
    }
    if (*(char *)(gp + -0x79d) != '\0') {
      FUN_ram_4201ef22();
      *(undefined1 *)(gp + -0x79d) = 0;
      return;
    }
    FUN_ram_4201f108(0,199);
    return;
  }
  if (_DAT_ram_3fcc503c == 3) {
LAB_ram_42019c58:
    uVar5 = _DAT_ram_3fcc503c;
  }
  else if ((int)_DAT_ram_3fcc503c < 4) {
    if (_DAT_ram_3fcc503c == 1) {
      uVar5 = 6;
      if (*(int *)(gp + -0x798) == 1) {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 2;
      if (((_DAT_ram_3fcc503c != 2) && (uVar5 = 0, _DAT_ram_3fcc503c == 0)) &&
         (*(int *)(gp + -0x798) != 1)) {
        uVar5 = 5;
      }
    }
  }
  else if (_DAT_ram_3fcc503c == 4) {
    uVar5 = 7;
    if (*(int *)(gp + -0x79c) == 1) goto LAB_ram_42019c58;
  }
  else if (_DAT_ram_3fcc503c == 5) {
    uVar5 = -(uint)(*(int *)(gp + -0x79c) != 1) & 5;
  }
  else {
    uVar5 = 0;
  }
  FUN_ram_420199c6(uVar5);
  FUN_ram_4201f108(0x12,0xb6);
  _DAT_ram_3fcc503c = _DAT_ram_3fcc503c + 1;
  if (5 < (int)_DAT_ram_3fcc503c) {
    *(undefined4 *)(gp + -0x798) = *(undefined4 *)(gp + -0x79c);
    _DAT_ram_3fcc5040 = 1;
    return;
  }
LAB_ram_42019b3a:
  FUN_ram_42018dcc();
  return;
}

