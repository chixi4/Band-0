
void FUN_ram_42016b34(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined2 uStack_2c;
  
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_ram_4204b8a2(&uStack_30,0);
  (*(code *)&SUB_ram_400106ac)
            (auStack_40,0xd,0x3c0a87f0,uStack_30 & 0xff,uStack_30._1_1_,uStack_30._2_1_,
             uStack_30._3_1_,(undefined1)uStack_2c,uStack_2c._1_1_);
  iVar1 = FUN_ram_420169ae();
  if ((((iVar1 == 2) || (iVar2 = FUN_ram_4201fe58(), iVar2 != 0)) ||
      (iVar2 = FUN_ram_4201edd8(), iVar2 != 0)) || (iVar2 = FUN_ram_4201ee6a(), iVar2 == 0))
  goto LAB_ram_42016b82;
  FUN_ram_4201eeb2(0);
  iVar3 = FUN_ram_420210fa(auStack_40,0,auStack_48);
  if (iVar3 != 0) {
    FUN_ram_420212ee(auStack_48,iVar2,0xffffffe4,5);
    FUN_ram_420211a6(auStack_48);
  }
  iVar2 = FUN_ram_4201566c();
  if (iVar2 == 0) {
    iVar2 = FUN_ram_4201570a();
    if (iVar2 < 0) {
      iVar2 = FUN_ram_4201579a();
      if (iVar2 == 1) {
        pcVar5 = (char *)0x3c0a8814;
      }
      else {
        pcVar5 = (char *)0x3c0a881c;
      }
      goto LAB_ram_42016c48;
    }
    (*(code *)&SUB_ram_400106ac)(&uStack_30,0x20,0x3c0a880c,auStack_40);
  }
  else {
    pcVar5 = "space in the plan for insight.";
LAB_ram_42016c48:
    (*(code *)&SUB_ram_400106ac)(&uStack_30,0x20,pcVar5,auStack_40);
  }
  if (iVar1 == 1) {
    uVar4 = 0x3c0a87e0;
  }
  else {
    uVar4 = 0x3c0a87d4;
  }
  FUN_ram_4201f3fe(0x96,uVar4,3);
  FUN_ram_4201f3fe(0xac,&uStack_30,3);
  iVar1 = FUN_ram_4201eee8();
  if (iVar1 == 0) {
    thunk_FUN_ram_42020360();
    FUN_ram_40398498(100);
    FUN_ram_42015cca(1);
  }
LAB_ram_42016b82:
  FUN_ram_42016ac0();
  return;
}

