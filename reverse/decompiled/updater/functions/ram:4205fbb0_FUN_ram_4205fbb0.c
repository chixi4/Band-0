
uint FUN_ram_4205fbb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte bStack_23d;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  int iStack_234;
  byte *pbStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined1 auStack_224 [12];
  undefined1 auStack_218 [68];
  undefined1 auStack_1d4 [68];
  undefined1 auStack_190 [68];
  undefined1 auStack_14c [68];
  undefined1 auStack_108 [67];
  byte abStack_c5 [32];
  byte bStack_a5;
  undefined1 auStack_82 [78];
  
  uStack_23c = 0;
  uStack_238 = 0;
  (*(code *)&SUB_ram_40010488)(auStack_1d4,0,0x42);
  iVar4 = thunk_FUN_ram_4039047a(param_5);
  iVar5 = thunk_FUN_ram_4039047a(param_5);
  pbVar9 = abStack_c5 + 1;
  if (((iVar4 != 0) && (iVar5 != 0)) && (iVar13 = FUN_ram_420221fe(iVar4,param_5), -1 < iVar13)) {
    iVar8 = *(int *)(*(int *)(param_1 + 0x7c) + 0x68);
    iVar13 = FUN_ram_420663cc(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x70),auStack_218,0x42,
                              iVar8);
    if (((-1 < iVar13) &&
        (iVar13 = FUN_ram_42061a4a(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x70),&uStack_23c,
                                   &uStack_238), -1 < iVar13)) &&
       ((iVar13 = FUN_ram_420663cc(uStack_23c,auStack_14c,0x42,iVar8), -1 < iVar13 &&
        (iVar13 = FUN_ram_420663cc(uStack_238,auStack_108,0x42,iVar8), -1 < iVar13)))) {
      FUN_ram_4205f544(param_2,param_3,auStack_224);
      pbStack_230 = &bStack_23d;
      uStack_228 = 1;
      iStack_234 = iVar5;
      uStack_22c = param_5;
      bVar2 = FUN_ram_42061a14(*(undefined4 *)(param_1 + 0x70));
      uVar12 = 0;
      bStack_23d = 1;
      uVar10 = 0;
      uVar1 = 0xffffffff;
      do {
        if ((bVar2 < bStack_23d) && (uVar12 != 0)) {
LAB_ram_4205fe3e:
          iVar13 = FUN_ram_42066328(auStack_1d4,iVar8);
          if (iVar13 == 0) break;
          iVar11 = FUN_ram_4205e6a6(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 100),iVar13);
          if ((((iVar11 != 0) &&
               (iVar6 = FUN_ram_42061cd8(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 100),iVar11,
                                         iVar11), -1 < iVar6)) &&
              (iVar6 = FUN_ram_420663cc(iVar11,pbVar9,0x42,iVar8), -1 < iVar6)) &&
             ((iVar6 = FUN_ram_420664b2(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x70),iVar11,
                                        iVar11), -1 < iVar6 &&
              (iVar6 = FUN_ram_420663cc(iVar11,auStack_82,0x42,iVar8), -1 < iVar6)))) {
            uVar3 = FUN_ram_4205f334(abStack_c5[iVar8] & 1 ^ uVar10);
            FUN_ram_4205f340(uVar3,pbVar9,auStack_82,iVar8,pbVar9 + iVar8);
            FUN_ram_40399daa(pbVar9,auStack_1d4,iVar8);
            FUN_ram_4205e51c(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x58),1);
            iVar6 = *(int *)(param_1 + 0x7c);
            uVar7 = FUN_ram_4205e586(*(undefined4 *)(iVar6 + 100),pbVar9);
            iVar8 = *(int *)(param_1 + 0x7c);
            *(undefined4 *)(iVar6 + 0x58) = uVar7;
            if (*(int *)(iVar8 + 0x58) == 0) {
              uVar1 = 0xffffffff;
            }
          }
          goto LAB_ram_4205fc2c;
        }
        if (200 < bStack_23d) {
LAB_ram_4205fe3a:
          if (uVar12 != 0) goto LAB_ram_4205fe3e;
          break;
        }
        FUN_ram_4205f340(uVar12,iVar4,param_4,param_5,iVar5);
        iVar13 = FUN_ram_42021b5c(auStack_224,0xc,2,&iStack_234,&uStack_22c,pbVar9);
        if (iVar13 < 0) goto LAB_ram_4205fe3a;
        uVar1 = FUN_ram_4205e4bc(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 100));
        iVar13 = FUN_ram_4206295e(pbVar9,0x20,0x3c07330c,auStack_218,
                                  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x68),auStack_190,uVar1
                                 );
        if (iVar13 < 0) {
LAB_ram_4205fd8c:
          uVar1 = 0xffffffff;
        }
        else {
          if ((uVar1 & 7) != 0) {
            FUN_ram_4202262e(auStack_190,*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x68),
                             8 - (uVar1 & 7));
          }
          iVar11 = 0;
          iVar13 = *(int *)(*(int *)(param_1 + 0x7c) + 0x68);
          if (iVar13 != 0) {
            iVar11 = FUN_ram_4205f4f4(auStack_190,auStack_218,iVar13);
          }
          iVar13 = FUN_ram_42066328(auStack_190,iVar13);
          if (iVar13 == 0) goto LAB_ram_4205fd8c;
          iVar6 = FUN_ram_4205e6a6(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 100),iVar13);
          FUN_ram_4206636c(iVar13,1);
          if (iVar6 == 0) goto LAB_ram_4205fd8c;
          uVar1 = FUN_ram_42061af2(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 100),auStack_14c,
                                   auStack_108,iVar6);
          FUN_ram_4206636c(iVar6,1);
          if (-1 < (int)uVar1) {
            uVar1 = uVar1 & iVar11 >> 0x1f;
          }
        }
        FUN_ram_4205f340(uVar12,auStack_1d4,auStack_190,iVar8);
        uVar10 = bStack_a5 & 1 ^ uVar12 & (bStack_a5 & 1 ^ uVar10);
        if ((int)uVar1 < 0) goto LAB_ram_4205fc28;
        uVar12 = uVar12 | -uVar1 & 0xff;
        bStack_23d = bStack_23d + 1;
      } while( true );
    }
  }
  uVar1 = 0xffffffff;
LAB_ram_4205fc28:
  iVar11 = 0;
  iVar13 = 0;
LAB_ram_4205fc2c:
  thunk_FUN_ram_420293a6(pbVar9,0x84);
  FUN_ram_4206636c(uStack_23c,0);
  FUN_ram_4206636c(uStack_238,0);
  FUN_ram_4206636c(iVar11,1);
  thunk_FUN_ram_40390608(iVar4);
  FUN_ram_42022954(iVar5,param_5);
  FUN_ram_4206636c(iVar13,1);
  return uVar1;
}

