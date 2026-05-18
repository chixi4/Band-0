
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201984c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined2 uStack_20;
  
  iVar2 = FUN_ram_4201f03c();
  if (iVar2 != 0) {
    FUN_ram_42018dcc();
    return;
  }
  iVar2 = FUN_ram_4201ee6a();
  if (iVar2 != 0) {
    iVar3 = FUN_ram_4201605e();
    if (_DAT_ram_3fcc5038 == 0) {
      if (iVar3 == 0) {
        pcVar4 = "e block of deep work without noise.";
        uVar5 = 0x79c;
      }
      else {
        pcVar4 = &DAT_ram_3c0d048c;
        uVar5 = 0x6ec;
      }
      iVar2 = FUN_ram_42021020(pcVar4,uVar5,iVar2,&uStack_24);
      if (iVar2 != 0) {
        FUN_ram_4201eeb2(0);
      }
    }
    else if (_DAT_ram_3fcc5038 == 1) {
      if (iVar3 == 0) {
        pcVar4 = "tnership drags, switch the contact person.";
        uVar5 = 0x598;
      }
      else {
        pcVar4 = &DAT_ram_3c0cf8c8;
        uVar5 = 0x624;
      }
      iVar2 = FUN_ram_42021020(pcVar4,uVar5,iVar2,auStack_28);
      if (iVar2 != 0) {
        FUN_ram_4201eeb2(0);
      }
      if (iVar3 == 0) {
        uVar5 = *(undefined4 *)(&DAT_ram_3c0d1524 + _DAT_ram_3fcc5034 * 4);
        uVar6 = *(undefined4 *)("QR code failed" + _DAT_ram_3fcc5030 * 4 + 8);
        pcVar4 = &DAT_ram_3c0d138c;
      }
      else {
        uVar5 = *(undefined4 *)("No saved networks" + _DAT_ram_3fcc5034 * 4 + 8);
        uVar6 = *(undefined4 *)("Cur: %s" + _DAT_ram_3fcc5030 * 4 + 4);
        pcVar4 = "omplete";
      }
      uVar1 = *(undefined4 *)(pcVar4 + _DAT_ram_3fcc502c * 4);
      FUN_ram_4039c11e(&uStack_24,&DAT_ram_3c0d156c,0x14);
      FUN_ram_4201f3b0(uVar5,&uStack_24);
      uStack_24 = 0x76004b;
      uStack_20 = 0x6e;
      FUN_ram_4201f3b0(uVar6,&uStack_24);
      uStack_24 = 0xa0004b;
      uStack_20 = 0x6e;
      FUN_ram_4201f3b0(uVar1,&uStack_24);
    }
    if (*(char *)(gp + -0x79e) == '\0') {
      FUN_ram_4201f108(0,199);
      return;
    }
    FUN_ram_4201ef22();
    *(undefined1 *)(gp + -0x79e) = 0;
  }
  return;
}

