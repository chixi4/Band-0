
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420194f0(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [20];
  
  iVar1 = FUN_ram_4201f03c();
  if (iVar1 != 0) {
    FUN_ram_42018dcc();
    return;
  }
  iVar1 = FUN_ram_4201ee6a();
  if (iVar1 == 0) {
    return;
  }
  if (_DAT_ram_3fcc5024 == 0) {
    iVar2 = FUN_ram_4201605e();
    if (iVar2 == 0) {
      pcVar3 = &DAT_ram_3c0c9f5c;
    }
    else {
      pcVar3 = "nto an action step.";
    }
    iVar1 = FUN_ram_42021020(*(undefined4 *)(pcVar3 + _DAT_ram_3fcc5020 * 8),
                             *(undefined4 *)(pcVar3 + _DAT_ram_3fcc5020 * 8 + 4),iVar1,auStack_24);
    if (iVar1 != 0) {
      FUN_ram_4201eeb2(0);
    }
LAB_ram_42019550:
    if (*(char *)(gp + -0x79f) == '\0') {
      FUN_ram_4201f108(0,199);
      return;
    }
  }
  else {
    if (_DAT_ram_3fcc5024 != 1) {
      if (_DAT_ram_3fcc5024 == 2) {
        if (*(char *)(gp + -0x79f) != '\0') {
          thunk_FUN_ram_4202053c();
        }
        FUN_ram_4201eeb2(0);
        iVar1 = FUN_ram_4201605e();
        if (iVar1 == 0) {
          puVar4 = &DAT_ram_3c0ccd64;
        }
        else {
          puVar4 = &DAT_ram_3c0cc7ec;
        }
        uVar5 = *(undefined4 *)(puVar4 + _DAT_ram_3fcc5018 * 4);
        FUN_ram_4039c11e(auStack_24,&DAT_ram_3c0cf8b4,0x14);
        FUN_ram_4201f3b0(uVar5,auStack_24);
      }
      goto LAB_ram_42019550;
    }
    iVar1 = FUN_ram_40390474(10000,4);
    if (iVar1 == 0) {
      FUN_ram_4201eeb2();
      FUN_ram_4201f3fe(100,0x3c0a903c,3);
    }
    else {
      iVar2 = FUN_ram_42021030("ady yourself first.",0x25c0,iVar1,auStack_28);
      if (iVar2 == 0) {
        iVar2 = FUN_ram_4201605e();
        if (iVar2 == 0) {
          puVar4 = &DAT_ram_3c0ccd64;
        }
        else {
          puVar4 = &DAT_ram_3c0cc7ec;
        }
        uVar5 = *(undefined4 *)(puVar4 + _DAT_ram_3fcc5018 * 4);
        FUN_ram_4039c11e(auStack_24,"nce.",0x14);
        FUN_ram_4201f954(iVar1,uVar5,auStack_24);
        thunk_FUN_ram_42020a10(iVar1);
        thunk_FUN_ram_40390634(iVar1);
        goto LAB_ram_42019620;
      }
      thunk_FUN_ram_40390634(iVar1);
      FUN_ram_4201eeb2(0);
    }
  }
  FUN_ram_4201ef22();
LAB_ram_42019620:
  *(undefined1 *)(gp + -0x79f) = 0;
  return;
}

