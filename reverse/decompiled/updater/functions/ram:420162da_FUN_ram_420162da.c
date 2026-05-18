
void FUN_ram_420162da(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStack_2b8 [48];
  undefined1 auStack_288 [288];
  undefined1 auStack_168 [300];
  char cStack_3c;
  int iStack_38;
  char cStack_34;
  
  uVar2 = FUN_ram_40398d1c();
  FUN_ram_40398c14(3,0x3c070628,0x3c0707fc,uVar2,0x3c070628);
  uVar2 = FUN_ram_40398d1c();
  FUN_ram_40398c14(3,0x3c070628,0x3c07083c,uVar2,0x3c070628);
  uVar2 = FUN_ram_40398d1c();
  FUN_ram_40398c14(3,0x3c070628,0x3c0707fc,uVar2,0x3c070628);
  iVar3 = FUN_ram_42018a8a();
  if (iVar3 != 0) goto LAB_ram_42016400;
  uVar2 = FUN_ram_40398d1c();
  FUN_ram_40398c14(2,0x3c070628,0x3c070860,uVar2,0x3c070628);
LAB_ram_420163a0:
  iVar3 = FUN_ram_4201d5c2();
  if ((iVar3 == 0x110d) || (iVar3 == 0x1110)) {
    uVar2 = FUN_ram_40398d1c();
    uVar4 = FUN_ram_4201ae60(iVar3);
    FUN_ram_40398c14(2,0x3c070628,0x3c0708e0,uVar2,0x3c070628,uVar4);
    FUN_ram_4201db16();
    iVar3 = FUN_ram_4201d5c2();
  }
  if (iVar3 == 0) {
    iVar3 = FUN_ram_42017706();
    if (iVar3 == 0) {
      DAT_ram_3fcb6695 = '\x01';
      FUN_ram_42017758(0x3c070928,0x3c07091c);
    }
    else {
      uVar2 = FUN_ram_40398d1c();
      FUN_ram_40398c14(2,0x3c070628,0x3c070934,uVar2,0x3c070628);
    }
    iVar3 = FUN_ram_420168aa(auStack_288);
    if (iVar3 == 0x1102) {
      uVar2 = FUN_ram_40398d1c();
      FUN_ram_40398c14(2,0x3c070628,0x3c070974,uVar2,0x3c070628);
      uVar2 = 0x3c0709cc;
      goto LAB_ram_420163fc;
    }
    if (iVar3 != 0) {
      uVar2 = 0x3c0709d4;
      goto LAB_ram_420163fc;
    }
    if (cStack_34 == '\0') {
      uVar2 = FUN_ram_40398d1c();
      FUN_ram_40398c14(1,0x3c070628,0x3c0709e0,uVar2,0x3c070628);
      uVar2 = 0x3c0709cc;
      iVar3 = iStack_38;
    }
    else {
      iVar3 = 1;
      if (cStack_3c != '\0') {
        do {
          uVar2 = FUN_ram_40398d1c();
          FUN_ram_40398c14(3,0x3c070628,0x3c070a5c,uVar2,0x3c070628,iVar3);
          puVar1 = auStack_168;
          iVar8 = 0;
          do {
            if (puVar1[0x62] != '\0') {
              if (DAT_ram_3fcb6695 != '\0') {
                (*(code *)&SUB_ram_400106ac)(auStack_2b8,0x30,0x3c070a84,puVar1);
                FUN_ram_42017758(0x3c070a90,auStack_2b8);
              }
              uVar2 = FUN_ram_40398d1c();
              FUN_ram_40398c14(3,0x3c070628,0x3c070a9c,uVar2,0x3c070628,iVar8,puVar1);
              puVar7 = (undefined1 *)0x0;
              if (puVar1[99] != '\0') {
                puVar7 = puVar1 + 0x21;
              }
              iVar5 = FUN_ram_42016d9a(puVar1,puVar7,12000);
              if (iVar5 == 0) {
                uVar2 = FUN_ram_40398d1c();
                FUN_ram_40398c14(3,0x3c070628,0x3c070abc,uVar2,0x3c070628,iVar8);
                *(undefined4 *)(gp + -0x7d8) = 0xffffffff;
                *(undefined4 *)(gp + -0x7dc) = 0xffffffff;
                if (DAT_ram_3fcb6695 != '\0') {
                  FUN_ram_4201777a(0x3c0706e0,0);
                }
                iVar8 = FUN_ram_420173fe(auStack_288,0x42006128,0);
                FUN_ram_42017046();
                if (iVar8 != 0) {
                  if (iVar8 == -1) {
                    uVar2 = 0x3c0707c8;
                  }
                  else if ((iVar8 - 0x103U & 0xfffffffd) == 0) {
                    uVar2 = 0x3c0707d4;
                  }
                  else {
                    uVar2 = 0x3c0707e0;
                  }
                  uVar4 = FUN_ram_40398d1c();
                  uVar6 = FUN_ram_4201ae60(iVar8);
                  FUN_ram_40398c14(1,0x3c070628,0x3c070b58,uVar4,0x3c070628,uVar6,uVar2);
                  goto LAB_ram_42016736;
                }
                uVar2 = FUN_ram_40398d1c();
                FUN_ram_40398c14(3,0x3c070628,0x3c070b18,uVar2,0x3c070628);
                iVar8 = iStack_38;
                if (DAT_ram_3fcb6695 != '\0') {
                  FUN_ram_420177fa(1,0);
                }
                if (iVar8 != 0) {
                  FUN_ram_420161d6(2,iVar8,0);
                }
                iVar8 = FUN_ram_42016076();
                if (iVar8 != 0) {
                  uVar2 = FUN_ram_40398d1c();
                  uVar4 = FUN_ram_4201ae60(iVar8);
                  FUN_ram_40398c14(1,0x3c070628,0x3c070b88,uVar2,0x3c070628,uVar4);
                }
                uVar2 = FUN_ram_40398d1c();
                FUN_ram_40398c14(2,0x3c070628,0x3c070bf8,uVar2,0x3c070628);
                FUN_ram_40396524(0x96);
                FUN_ram_4201041e();
                goto LAB_ram_420166c6;
              }
              uVar2 = FUN_ram_40398d1c();
              uVar4 = FUN_ram_4201ae60(iVar5);
              FUN_ram_40398c14(2,0x3c070628,0x3c070ae0,uVar2,0x3c070628,iVar8,uVar4);
              FUN_ram_42017046();
            }
            iVar8 = iVar8 + 1;
            puVar1 = puVar1 + 100;
          } while (iVar8 != 3);
          uVar2 = 0x3c0707f0;
LAB_ram_42016736:
          if (iVar3 == 3) goto code_r0x4201673a;
          if (DAT_ram_3fcb6695 != '\0') {
            (*(code *)&SUB_ram_400106ac)(auStack_2b8,0x30,0x3c070c7c,iVar3 + 1,3);
            FUN_ram_42017758(0x3c070c90,auStack_2b8);
          }
          uVar4 = FUN_ram_40398d1c();
          FUN_ram_40398c14(2,0x3c070628,0x3c070c9c,uVar4,0x3c070628,iVar3,uVar2,3000);
          FUN_ram_40396524(300);
          iVar3 = iVar3 + 1;
        } while( true );
      }
LAB_ram_420166c6:
      uVar2 = FUN_ram_40398d1c();
      FUN_ram_40398c14(iVar3,0x3c070628,0x3c0709fc,uVar2,0x3c070628);
      uVar2 = 0x3c070a50;
      iVar3 = iStack_38;
    }
  }
  else {
    uVar2 = 0x3c070910;
LAB_ram_420163fc:
    iVar3 = 0;
  }
  goto LAB_ram_420163fe;
code_r0x4201673a:
  uVar4 = FUN_ram_40398d1c();
  FUN_ram_40398c14(1,0x3c070628,0x3c070c38,uVar4,0x3c070628,3,uVar2);
  iVar3 = iStack_38;
LAB_ram_420163fe:
  iVar3 = FUN_ram_42016224(iVar3,uVar2);
LAB_ram_42016400:
  uVar2 = FUN_ram_40398d1c();
  FUN_ram_40398c14(3,0x3c070628,0x3c07088c,uVar2,0x3c070628,iVar3 + 0x18,*(undefined4 *)(iVar3 + 8),
                   *(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10));
  goto LAB_ram_420163a0;
}

