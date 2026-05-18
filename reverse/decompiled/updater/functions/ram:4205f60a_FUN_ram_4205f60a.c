
undefined4 FUN_ram_4205f60a(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined1 auStack_190 [67];
  byte abStack_14d [68];
  byte abStack_109 [69];
  undefined1 auStack_c4 [144];
  
  if (param_2 != 0x13) {
    return 0;
  }
  uVar2 = FUN_ram_4205e4c2();
  iVar3 = FUN_ram_4205e4ae(param_1);
  iVar4 = FUN_ram_4205e4cc(param_1);
  uVar5 = FUN_ram_4205e518(param_1);
  iVar6 = FUN_ram_42066304();
  iVar7 = FUN_ram_42066304();
  iVar8 = FUN_ram_42066304();
  iVar9 = FUN_ram_42066388(10);
  iVar10 = FUN_ram_42066304();
  iVar11 = FUN_ram_42066388(0);
  iVar12 = FUN_ram_42066388(1);
  iVar13 = FUN_ram_42066388(2);
  iVar14 = FUN_ram_42066388(3);
  iVar15 = FUN_ram_42066304();
  iVar16 = FUN_ram_42066304();
  iVar17 = FUN_ram_42066304();
  iVar18 = FUN_ram_42066304();
  iVar19 = FUN_ram_42066304();
  iVar20 = FUN_ram_42066304();
  if (((((((iVar6 == 0) || (iVar7 == 0)) || (iVar8 == 0)) || ((iVar9 == 0 || (iVar10 == 0)))) ||
       ((iVar11 == 0 || ((iVar12 == 0 || (iVar13 == 0)))))) ||
      ((iVar14 == 0 ||
       (((((iVar15 == 0 || (iVar16 == 0)) || (iVar17 == 0)) ||
         (((iVar18 == 0 || (iVar19 == 0)) ||
          ((iVar4 == 0 ||
           ((iVar20 == 0 || (iVar25 = FUN_ram_420664b2(uVar2,iVar9,iVar9), iVar25 < 0)))))))) ||
        (iVar25 = FUN_ram_42066528(param_3,uVar2,iVar6), iVar25 < 0)))))) ||
     (((iVar25 = FUN_ram_420664f0(iVar9,iVar6,uVar2,iVar7), iVar25 < 0 ||
       (iVar25 = FUN_ram_42066528(iVar7,uVar2,iVar8), iVar25 < 0)) ||
      (iVar25 = FUN_ram_42066694(iVar7,iVar8,uVar2,iVar7), iVar25 < 0)))) {
LAB_ram_4205f6d2:
    iVar26 = 0;
    iVar25 = 0;
  }
  else {
    FUN_ram_4205f5d0(iVar7,iVar3);
    uVar21 = FUN_ram_420665b0(iVar7);
    iVar25 = FUN_ram_420664b2(uVar2,iVar13,iVar8);
    if ((iVar25 < 0) || (iVar25 = FUN_ram_42066472(iVar7,iVar8,uVar2,iVar10), iVar25 < 0))
    goto LAB_ram_4205f6d2;
    FUN_ram_4205f5d0(iVar10,iVar3);
    iVar25 = FUN_ram_420664f0(iVar9,iVar4,uVar2,iVar7);
    if ((iVar25 < 0) ||
       ((iVar25 = FUN_ram_42066494(iVar7,uVar2,iVar7), iVar25 < 0 ||
        (iVar25 = FUN_ram_420664f0(uVar5,iVar7,uVar2,iVar15), iVar25 < 0)))) goto LAB_ram_4205f6d2;
    FUN_ram_4205f5d0(iVar15,iVar3);
    iVar25 = FUN_ram_420664b2(uVar2,uVar5,iVar7);
    if ((iVar25 < 0) ||
       ((((iVar25 = FUN_ram_42066494(iVar4,uVar2,iVar8), iVar25 < 0 ||
          (iVar25 = FUN_ram_420664f0(iVar7,iVar8,uVar2,iVar7), iVar25 < 0)) ||
         (iVar25 = FUN_ram_42066694(iVar12,iVar10,uVar2,iVar8), iVar25 < 0)) ||
        (iVar25 = FUN_ram_420664f0(iVar7,iVar8,uVar2,iVar16), iVar25 < 0)))) goto LAB_ram_4205f6d2;
    FUN_ram_4205f5d0(iVar16,iVar3);
    iVar25 = FUN_ram_420663cc(iVar15,abStack_14d + 1,0x42,iVar3);
    if ((iVar25 < 0) || (iVar25 = FUN_ram_420663cc(iVar16,abStack_109 + 1,0x42,iVar3), iVar25 < 0))
    goto LAB_ram_4205f6d2;
    uVar1 = FUN_ram_4205f334(uVar21 ^ 1);
    FUN_ram_4205f340(uVar1,abStack_14d + 1,abStack_109 + 1,iVar3,auStack_190);
    iVar25 = FUN_ram_42066328(auStack_190,iVar3);
    if (iVar25 == 0) goto LAB_ram_4205f6d2;
    FUN_ram_4205f5d0(iVar25,iVar3);
    iVar26 = FUN_ram_42066472(iVar25,iVar14,uVar2,iVar7);
    if (((iVar26 < 0) || (iVar26 = FUN_ram_420664f0(iVar4,iVar25,uVar2,iVar8), iVar26 < 0)) ||
       ((iVar26 = FUN_ram_42066694(iVar7,iVar8,uVar2,iVar7), iVar26 < 0 ||
        (iVar26 = FUN_ram_42066694(iVar7,uVar5,uVar2,iVar18), iVar26 < 0)))) {
LAB_ram_4205f88e:
      iVar26 = 0;
    }
    else {
      FUN_ram_4205f5d0(iVar18,iVar3);
      iVar26 = FUN_ram_420664f0(iVar9,iVar6,uVar2,iVar7);
      if ((iVar26 < 0) || (iVar26 = FUN_ram_420664f0(iVar7,iVar25,uVar2,iVar17), iVar26 < 0))
      goto LAB_ram_4205f88e;
      FUN_ram_4205f5d0(iVar17,iVar3);
      iVar26 = FUN_ram_42066472(iVar17,iVar14,uVar2,iVar7);
      if ((iVar26 < 0) ||
         (((iVar26 = FUN_ram_420664f0(iVar4,iVar17,uVar2,iVar8), iVar26 < 0 ||
           (iVar26 = FUN_ram_42066694(iVar7,iVar8,uVar2,iVar7), iVar26 < 0)) ||
          (iVar26 = FUN_ram_42066694(iVar7,uVar5,uVar2,iVar19), iVar26 < 0))))
      goto LAB_ram_4205f88e;
      FUN_ram_4205f5d0(iVar19,iVar3);
      iVar26 = FUN_ram_420664b2(uVar2,iVar12,iVar7);
      if (((iVar26 < 0) || (iVar26 = FUN_ram_42066578(iVar7,1,iVar7), iVar26 < 0)) ||
         (iVar26 = FUN_ram_42066472(iVar18,iVar7,uVar2,iVar20), iVar26 < 0)) goto LAB_ram_4205f88e;
      FUN_ram_4205f5d0(iVar7,iVar3);
      uVar21 = FUN_ram_420665b0(iVar20);
      uVar22 = FUN_ram_420665c4(iVar20);
      iVar26 = FUN_ram_420663cc(iVar18,abStack_14d + 1,0x42,iVar3);
      if ((iVar26 < 0) || (iVar26 = FUN_ram_420663cc(iVar19,abStack_109 + 1,0x42,iVar3), iVar26 < 0)
         ) goto LAB_ram_4205f88e;
      uVar1 = FUN_ram_4205f334((uVar21 | uVar22) ^ 1);
      FUN_ram_4205f340(uVar1,abStack_14d + 1,abStack_109 + 1,iVar3,auStack_190);
      iVar26 = FUN_ram_42066328(auStack_190,iVar3);
      if (iVar26 == 0) goto LAB_ram_4205f88e;
      FUN_ram_4205f5d0(iVar26,iVar3);
      iVar24 = FUN_ram_420663cc(iVar25,abStack_14d + 1,0x42,iVar3);
      if ((-1 < iVar24) &&
         (iVar24 = FUN_ram_420663cc(iVar17,abStack_109 + 1,0x42,iVar3), -1 < iVar24)) {
        FUN_ram_4205f340(uVar1,abStack_14d + 1,abStack_109 + 1,iVar3,auStack_c4);
        iVar24 = FUN_ram_42066304();
        if (iVar24 != 0) {
          iVar23 = FUN_ram_42061cd8(param_1,iVar26,iVar24);
          if (-1 < iVar23) {
            FUN_ram_4205f5d0(iVar24,iVar3);
            iVar23 = FUN_ram_420663cc(param_3,abStack_14d + 1,0x42,iVar3);
            if ((-1 < iVar23) &&
               (iVar23 = FUN_ram_420663cc(iVar24,abStack_109 + 1,0x42,iVar3), -1 < iVar23)) {
              uVar1 = FUN_ram_4205f334((abStack_14d[iVar3] ^ abStack_109[iVar3]) & 1);
              iVar23 = FUN_ram_420664b2(uVar2,iVar24,iVar7);
              if (-1 < iVar23) {
                FUN_ram_4205f5d0(iVar7,iVar3);
                iVar23 = FUN_ram_420663cc(iVar24,abStack_14d + 1,0x42,iVar3);
                if ((-1 < iVar23) &&
                   (iVar23 = FUN_ram_420663cc(iVar7,abStack_109 + 1,0x42,iVar3), -1 < iVar23)) {
                  FUN_ram_4205f340(uVar1,abStack_14d + 1,abStack_109 + 1,iVar3,auStack_c4 + iVar3);
                  uVar2 = FUN_ram_4205e586(param_1,auStack_c4);
                  goto LAB_ram_4205fa40;
                }
              }
            }
          }
          uVar2 = 0;
          goto LAB_ram_4205fa40;
        }
      }
    }
  }
  uVar2 = 0;
  iVar24 = 0;
LAB_ram_4205fa40:
  FUN_ram_4206636c(iVar4,0);
  FUN_ram_4206636c(iVar20,0);
  FUN_ram_4206636c(iVar6,1);
  FUN_ram_4206636c(iVar7,1);
  FUN_ram_4206636c(iVar8,1);
  FUN_ram_4206636c(iVar9,0);
  FUN_ram_4206636c(iVar10,1);
  FUN_ram_4206636c(iVar15,1);
  FUN_ram_4206636c(iVar16,1);
  FUN_ram_4206636c(iVar25,1);
  FUN_ram_4206636c(iVar17,1);
  FUN_ram_4206636c(iVar18,1);
  FUN_ram_4206636c(iVar19,1);
  FUN_ram_4206636c(iVar24,1);
  FUN_ram_4206636c(iVar26,1);
  FUN_ram_4206636c(iVar11,0);
  FUN_ram_4206636c(iVar12,0);
  FUN_ram_4206636c(iVar13,0);
  FUN_ram_4206636c(iVar14,0);
  thunk_FUN_ram_420293a6(auStack_190,0x42);
  thunk_FUN_ram_420293a6(abStack_14d + 1,0x42);
  thunk_FUN_ram_420293a6(abStack_109 + 1,0x42);
  thunk_FUN_ram_420293a6(auStack_c4,0x84);
  return uVar2;
}

