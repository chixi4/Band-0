
uint FUN_ram_42071872(uint param_1,uint param_2,uint *param_3,int param_4,uint *param_5,
                     code *param_6,undefined4 param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint extraout_a4;
  uint extraout_a4_00;
  uint extraout_a4_01;
  uint extraout_a4_02;
  uint extraout_a4_03;
  uint extraout_a4_04;
  uint extraout_a4_05;
  uint extraout_a4_06;
  uint extraout_a4_07;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iStack_fc;
  uint auStack_d4 [16];
  uint local_94 [24];
  
  *param_5 = 0;
  puVar14 = local_94;
  do {
    *puVar14 = 0;
    puVar14[1] = 0xffffffff;
    puVar14 = puVar14 + 2;
  } while (local_94 + 0x14 != puVar14);
  if (param_3 == (uint *)0x0) {
    uVar5 = 0xffffd800;
    goto LAB_ram_42071c2a;
  }
  if (param_4 == 0) {
LAB_ram_420718be:
    uVar5 = 0;
  }
  else {
    uVar5 = (*(code *)&SUB_ram_400104a8)(param_4);
    iVar6 = param_1 + 0x70;
    if ((*(uint *)(param_1 + 0x158) & 0x20) == 0) {
      do {
        if (((*(int *)(iVar6 + 4) == 3) &&
            (iVar7 = FUN_ram_40399d6c(0x3c072294,*(undefined4 *)(iVar6 + 8),3), iVar7 == 0)) &&
           (iVar7 = FUN_ram_420716e4(iVar6 + 0xc,param_4,uVar5), iVar7 == 0)) goto LAB_ram_420718be;
        iVar6 = *(int *)(iVar6 + 0x18);
      } while (iVar6 != 0);
    }
    else {
      puVar13 = (uint *)(param_1 + 0xf8);
      bVar3 = false;
      bVar2 = false;
      puVar14 = puVar13;
      do {
        uVar11 = *puVar14 & 0x1f;
        if (uVar11 == 6) {
          bVar3 = true;
        }
        else if (uVar11 == 7) {
          bVar2 = true;
        }
        else if ((uVar11 == 2) && (iVar6 = FUN_ram_420716e4(puVar14,param_4,uVar5), iVar6 == 0))
        goto LAB_ram_420718be;
        puVar14 = (uint *)puVar14[3];
      } while (puVar14 != (uint *)0x0);
      if (bVar2) {
        puVar8 = (uint *)FUN_ram_42071830(param_4,auStack_d4);
        puVar14 = puVar13;
        puVar4 = puVar8;
        while (puVar4 != (uint *)0x0) {
          if ((((*puVar14 & 0x1f) == 7) && (puVar8 == (uint *)puVar14[1])) &&
             (iVar6 = FUN_ram_40399d6c(puVar14[2],auStack_d4,puVar8), iVar6 == 0))
          goto LAB_ram_420718be;
          puVar14 = (uint *)puVar14[3];
          puVar4 = puVar14;
        }
      }
      if (bVar3) {
        do {
          if (((*puVar13 & 0x1f) == 6) && (uVar5 == puVar13[1])) {
            iVar7 = FUN_ram_40399d6c(puVar13[2],param_4,uVar5);
            iVar6 = 0;
            if (iVar7 == 0) goto LAB_ram_42071a72;
          }
          puVar13 = (uint *)puVar13[3];
        } while (puVar13 != (uint *)0x0);
        iVar6 = -1;
LAB_ram_42071a72:
        uVar5 = (uint)(iVar6 != 0) << 2;
        goto LAB_ram_420718c0;
      }
    }
    uVar5 = 4;
  }
LAB_ram_420718c0:
  iVar6 = FUN_ram_42066f6e(param_1 + 0xcc);
  if ((iVar6 == 0) || ((1 << (iVar6 - 1U & 0x1f) & param_3[1]) == 0)) {
    uVar5 = uVar5 | 0x8000;
  }
  iVar6 = FUN_ram_42071660(param_3,param_1 + 0xcc);
  if (iVar6 != 0) {
    uVar5 = uVar5 | 0x10000;
  }
  iStack_fc = 0;
  bVar2 = false;
  auStack_d4[0] = extraout_a4;
  puVar14 = local_94;
  uVar11 = 0;
LAB_ram_420718fa:
  *puVar14 = param_1;
  puVar14[1] = 0;
  uVar12 = uVar11 + 1;
  if (!bVar2) {
    if ((*(int *)(param_1 + 0x188) == 0) ||
       ((1 << (*(int *)(param_1 + 0x188) - 1U & 0x1f) & *param_3) == 0)) {
      puVar14[1] = 0x4000;
    }
    if ((*(int *)(param_1 + 0x18c) == 0) ||
       (auStack_d4[0] = param_3[1],
       (1 << (*(int *)(param_1 + 0x18c) - 1U & 0x1f) & auStack_d4[0]) == 0)) {
      auStack_d4[0] = 0x8000;
      puVar14[1] = puVar14[1] | 0x8000;
    }
    if ((uVar12 == 1) &&
       (iVar6 = FUN_ram_420715b4(param_1 + 0x50,param_1 + 0x70), auStack_d4[0] = extraout_a4_00,
       uVar15 = param_2, iVar6 == 0)) {
      for (; uVar15 != 0; uVar15 = *(uint *)(uVar15 + 0x194)) {
        if ((*(int *)(param_1 + 8) == *(int *)(uVar15 + 8)) &&
           (iVar6 = FUN_ram_40399d6c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(uVar15 + 0xc)),
           auStack_d4[0] = extraout_a4_01, iVar6 == 0)) goto LAB_ram_42071adc;
      }
    }
    bVar3 = true;
    uVar15 = param_2;
LAB_ram_42071ac2:
    while (uVar15 == 0) {
      if (!bVar3) {
        local_94[uVar11 * 2 + 1] = local_94[uVar11 * 2 + 1] | 8;
        goto LAB_ram_42071adc;
      }
      bVar3 = false;
      uVar15 = *(uint *)(param_1 + 0x194);
    }
    iVar6 = FUN_ram_420715b4(param_1 + 0x50,uVar15 + 0x70);
    auStack_d4[0] = extraout_a4_02;
    if ((iVar6 == 0) &&
       ((((auStack_d4[0] = extraout_a4_02, bVar3 && (auStack_d4[0] = 2, *(int *)(uVar15 + 0x1c) < 3)
          ) || ((*(int *)(uVar15 + 0x15c) != 0 &&
                (iVar6 = FUN_ram_42071774(uVar15,4), auStack_d4[0] = extraout_a4_03, iVar6 == 0))))
        && (((int)*(uint *)(uVar15 + 0x160) < 1 ||
            (auStack_d4[0] = uVar12 - iStack_fc, uVar12 - iStack_fc <= *(uint *)(uVar15 + 0x160)))))
       )) {
      uVar9 = FUN_ram_42028dc8(*(undefined4 *)(param_1 + 0x188));
      uVar10 = FUN_ram_42029140();
      iVar6 = FUN_ram_420290ee(uVar9,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14)
                               ,auStack_d4);
      auStack_d4[0] = extraout_a4_04;
      if (iVar6 == 0) {
        iVar6 = FUN_ram_42066e6a(uVar15 + 0xcc,*(undefined4 *)(param_1 + 0x18c));
        auStack_d4[0] = extraout_a4_06;
        if (iVar6 != 0) {
          iVar6 = FUN_ram_42066f7e(*(undefined4 *)(param_1 + 0x18c),*(undefined4 *)(param_1 + 400),
                                   uVar15 + 0xcc,*(undefined4 *)(param_1 + 0x188),auStack_d4,uVar10,
                                   *(undefined4 *)(param_1 + 0x184),*(undefined4 *)(param_1 + 0x180)
                                  );
          if (bVar3) {
            bVar2 = true;
            bVar1 = true;
            auStack_d4[0] = extraout_a4_07;
            if (iVar6 != 0) goto LAB_ram_42071abe;
            goto LAB_ram_42071b58;
          }
          goto LAB_ram_42071b52;
        }
      }
      if (!bVar3) goto code_r0x42071b50;
    }
LAB_ram_42071abe:
    uVar15 = *(uint *)(uVar15 + 0x194);
    goto LAB_ram_42071ac2;
  }
LAB_ram_42071adc:
  puVar14 = local_94 + uVar12 * 2;
  local_94[1] = local_94[1] | uVar5;
  while( true ) {
    if (uVar12 == 0) {
      return -(uint)(*param_5 != 0) & 0xffffd900;
    }
    uVar12 = uVar12 - 1;
    uVar11 = puVar14[-1];
    if ((param_6 != (code *)0x0) &&
       (uVar5 = auStack_d4[0], auStack_d4[0] = puVar14[-1],
       uVar5 = (*param_6)(param_7,puVar14[-2],uVar12,auStack_d4,uVar5,param_6),
       uVar11 = auStack_d4[0], uVar5 != 0)) break;
    auStack_d4[0] = uVar11;
    puVar14 = puVar14 + -2;
    *param_5 = *param_5 | auStack_d4[0];
  }
  if (uVar5 == 0xffffd900) {
LAB_ram_42071c28:
    uVar5 = 0xffffd000;
  }
LAB_ram_42071c2a:
  *param_5 = 0xffffffff;
  return uVar5;
code_r0x42071b50:
  iVar6 = -1;
LAB_ram_42071b52:
  bVar1 = iVar6 == 0;
  bVar2 = false;
LAB_ram_42071b58:
  if (uVar12 != 1) {
    iVar6 = FUN_ram_420715b4(param_1 + 0x50,param_1 + 0x70);
    iStack_fc = iStack_fc + (uint)(iVar6 == 0);
    if ((!bVar2) && (8 < uVar12)) goto LAB_ram_42071c28;
  }
  if (!bVar1) {
    puVar14[1] = puVar14[1] | 8;
  }
  iVar6 = FUN_ram_42071660(param_3,uVar15 + 0xcc);
  auStack_d4[0] = extraout_a4_05;
  if (iVar6 != 0) {
    auStack_d4[0] = puVar14[1] | 0x10000;
    puVar14[1] = auStack_d4[0];
  }
  puVar14 = puVar14 + 2;
  param_1 = uVar15;
  uVar11 = uVar12;
  goto LAB_ram_420718fa;
}

