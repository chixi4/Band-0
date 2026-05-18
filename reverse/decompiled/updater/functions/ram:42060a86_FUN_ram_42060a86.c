
undefined4
FUN_ram_42060a86(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  undefined1 auStack_280 [3];
  byte bStack_27d;
  undefined4 uStack_27c;
  byte *pbStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined1 auStack_26c [12];
  undefined1 auStack_260 [32];
  byte abStack_240 [524];
  
  if (*(int *)(param_5 + 0x7c) == 0) {
    return 0xffffffff;
  }
  if ((*(int *)(*(int *)(param_5 + 0x7c) + 100) != 0) &&
     (iVar11 = FUN_ram_4205fbb0(param_5,param_1,param_2,param_3,param_4), iVar11 < 0)) {
    return 0xffffffff;
  }
  iVar11 = *(int *)(param_5 + 0x7c);
  if (*(int *)(iVar11 + 0x6c) != 0) {
    iVar12 = *(int *)(iVar11 + 0x68);
    FUN_ram_4206636c(*(undefined4 *)(iVar11 + 0x5c),1);
    iVar14 = iVar12 * 8;
    *(undefined4 *)(*(int *)(param_5 + 0x7c) + 0x5c) = 0;
    iVar12 = iVar12 << 4;
    iVar11 = FUN_ram_40399d1a(1,iVar12);
    iVar6 = FUN_ram_42066304();
    if ((iVar11 != 0) && (iVar6 != 0)) {
      FUN_ram_4205f544(param_1,param_2,auStack_26c);
      pbStack_278 = &bStack_27d;
      uStack_270 = 1;
      uStack_27c = param_3;
      uStack_274 = param_4;
      bVar3 = FUN_ram_42061a14(*(undefined4 *)(param_5 + 0x70));
      bStack_27d = 1;
      bVar15 = 0;
      while( true ) {
        if ((bVar3 < bStack_27d) && (bVar15 != 0)) goto LAB_ram_42060d30;
        if ((200 < bStack_27d) ||
           ((iVar7 = FUN_ram_42021b5c(auStack_26c,0xc,2,&uStack_27c,&uStack_274,auStack_260),
            iVar7 < 0 ||
            (iVar7 = *(int *)(*(int *)(param_5 + 0x7c) + 0x68),
            iVar7 = FUN_ram_4206295e(auStack_260,0x20,0x3c07330c,
                                     *(undefined4 *)
                                      (*(int *)(*(int *)(param_5 + 0x7c) + 0x6c) + 0xc),iVar7,
                                     abStack_240,iVar7 << 3), iVar7 < 0)))) break;
        iVar8 = 0;
        iVar7 = *(int *)(*(int *)(param_5 + 0x7c) + 0x68);
        if (iVar7 != 0) {
          iVar8 = FUN_ram_4205f4f4(abStack_240,
                                   *(undefined4 *)(*(int *)(*(int *)(param_5 + 0x7c) + 0x6c) + 0xc),
                                   iVar7);
        }
        abStack_240[0] = (byte)(iVar8 >> 0x1f) & abStack_240[0];
        iVar7 = FUN_ram_42066328(abStack_240,iVar7);
        if (iVar7 == 0) {
LAB_ram_42060c4a:
          uVar13 = 0xffffffff;
          iVar2 = 0;
        }
        else if ((*(byte *)(*(int *)(*(int *)(param_5 + 0x7c) + 0x6c) + 0x1c) & 1) == 0) {
          auStack_280[0] = 1;
          iVar2 = FUN_ram_42066328(auStack_280);
          if (iVar2 == 0) goto LAB_ram_42060c4a;
          iVar10 = FUN_ram_420664b2(*(undefined4 *)(*(int *)(param_5 + 0x7c) + 0x70),iVar2,iVar2);
          if ((-1 < iVar10) &&
             (iVar10 = FUN_ram_420664d0(iVar2,*(undefined4 *)(*(int *)(param_5 + 0x7c) + 0x74),iVar2
                                       ), -1 < iVar10)) goto LAB_ram_42060cbe;
          uVar13 = 0xffffffff;
        }
        else {
          auStack_280[0] = 2;
          iVar2 = FUN_ram_42066328(auStack_280,1);
          if (iVar2 == 0) goto LAB_ram_42060c4a;
LAB_ram_42060cbe:
          uVar13 = FUN_ram_42066472(iVar7,iVar2,*(undefined4 *)(*(int *)(param_5 + 0x7c) + 0x70),
                                    iVar6);
          if (-1 < (int)uVar13) {
            FUN_ram_420665b0(iVar6);
            uVar13 = FUN_ram_4205f334();
            FUN_ram_420665c4(iVar6);
            uVar9 = FUN_ram_4205f334();
            uVar13 = iVar8 >> 0x1f & 0xffU & uVar13 & uVar9 & 1;
          }
        }
        FUN_ram_4206636c(iVar7,1);
        FUN_ram_4206636c(iVar2,1);
        if ((int)uVar13 < 0) break;
        iVar7 = FUN_ram_420663cc(iVar6,iVar11 + iVar14,iVar14,iVar14);
        if (iVar7 < 0) break;
        FUN_ram_4205f340(bVar15,iVar11,iVar11 + iVar14,iVar14,iVar11);
        bVar1 = bStack_27d;
        bVar4 = FUN_ram_4205f334(uVar13 ^ 1);
        bVar15 = bVar15 | bVar4;
        bStack_27d = bVar1 + 1;
      }
      if (bVar15 != 0) {
LAB_ram_42060d30:
        iVar7 = *(int *)(param_5 + 0x7c);
        uVar5 = FUN_ram_42066328(iVar11,iVar14);
        *(undefined4 *)(iVar7 + 0x5c) = uVar5;
      }
    }
    FUN_ram_4206636c(iVar6,1);
    FUN_ram_42022954(iVar11,iVar12);
    if (*(int *)(*(int *)(param_5 + 0x7c) + 0x5c) == 0) {
      return 0xffffffff;
    }
  }
  *(byte *)(param_5 + 0x7a) = *(byte *)(param_5 + 0x7a) & 0xfc;
  uVar5 = FUN_ram_4205f3c2(param_5);
  return uVar5;
}

