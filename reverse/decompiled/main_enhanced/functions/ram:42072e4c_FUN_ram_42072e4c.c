
void FUN_ram_42072e4c(undefined4 *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  iVar3 = FUN_ram_420680a2(param_1,0x11);
  if (iVar3 == 0) {
    puVar11 = (uint *)*param_1;
    uVar15 = puVar11[8];
    uVar2 = puVar11[9];
    uVar12 = puVar11[0xb];
    uVar5 = *puVar11 + uVar15;
    uVar13 = uVar2 + uVar5;
    uVar4 = puVar11[0xc];
    uVar7 = puVar11[0xd];
    uVar16 = puVar11[0xe];
    uVar17 = (uVar13 - uVar12) - uVar4;
    uVar19 = uVar17 - uVar7;
    uVar5 = (((((uint)(uVar5 < *puVar11) + (uint)(uVar13 < uVar2)) - (uint)(uVar13 < uVar12)) -
             (uint)(uVar13 - uVar12 < uVar4)) - (uint)(uVar17 < uVar7)) - (uint)(uVar19 < uVar16);
    *puVar11 = uVar19 - uVar16;
    uVar13 = puVar11[1];
    if ((int)uVar5 < 0) {
      uVar17 = -(uint)(uVar13 < -uVar5);
      uVar5 = uVar13 + uVar5;
    }
    else {
      uVar5 = (uVar5 & 0xff) + uVar13;
      uVar17 = (uint)(uVar5 < uVar13);
    }
    uVar14 = puVar11[10];
    uVar18 = uVar5 + uVar2 + uVar14;
    uVar19 = puVar11[0xf];
    uVar13 = (uVar18 - uVar4) - uVar7;
    uVar20 = uVar13 - uVar16;
    uVar13 = ((((((uVar5 + uVar2 < uVar2) + uVar17 & 0xff) + (uint)(uVar18 < uVar14)) -
               (uint)(uVar18 < uVar4)) - (uint)(uVar18 - uVar4 < uVar7)) - (uint)(uVar13 < uVar16))
             - (uint)(uVar20 < uVar19);
    iVar3 = (int)(uVar13 * 0x1000000) >> 0x18;
    puVar11[1] = uVar20 - uVar19;
    uVar5 = puVar11[2];
    if (iVar3 < 0) {
      uVar17 = -(uint)(uVar5 < (uint)-iVar3);
      uVar13 = iVar3 + uVar5;
    }
    else {
      uVar13 = uVar5 + (uVar13 & 0xff);
      uVar17 = (uint)(uVar13 < uVar5);
    }
    uVar5 = uVar13 + uVar14 + uVar12;
    uVar18 = (uVar5 - uVar7) - uVar16;
    uVar13 = (((((uVar13 + uVar14 < uVar14) + uVar17 & 0xff) + (uint)(uVar5 < uVar12)) -
              (uint)(uVar5 < uVar7)) - (uint)(uVar5 - uVar7 < uVar16)) - (uint)(uVar18 < uVar19);
    iVar3 = (int)(uVar13 * 0x1000000) >> 0x18;
    puVar11[2] = uVar18 - uVar19;
    uVar5 = puVar11[3];
    if (iVar3 < 0) {
      uVar17 = -(uint)(uVar5 < (uint)-iVar3);
      uVar13 = uVar5 + iVar3;
    }
    else {
      uVar13 = (uVar13 & 0xff) + uVar5;
      uVar17 = (uint)(uVar13 < uVar5);
    }
    uVar5 = uVar13 + uVar12 + uVar12;
    uVar18 = uVar5 + uVar4;
    uVar20 = uVar18 + uVar4;
    uVar9 = uVar20 + uVar7;
    uVar21 = (uVar9 - uVar19) - uVar15;
    uVar13 = (((((uVar13 + uVar12 < uVar12) + uVar17 + (uint)(uVar5 < uVar12) +
                 (uint)(uVar18 < uVar4) + (uint)(uVar20 < uVar4) & 0xff) + (uint)(uVar9 < uVar7)) -
              (uint)(uVar9 < uVar19)) - (uint)(uVar9 - uVar19 < uVar15)) - (uint)(uVar21 < uVar2);
    iVar3 = (int)(uVar13 * 0x1000000) >> 0x18;
    puVar11[3] = uVar21 - uVar2;
    uVar5 = puVar11[4];
    if (iVar3 < 0) {
      uVar17 = -(uint)(uVar5 < (uint)-iVar3);
      uVar13 = uVar5 + iVar3;
    }
    else {
      uVar13 = (uVar13 & 0xff) + uVar5;
      uVar17 = (uint)(uVar13 < uVar5);
    }
    uVar5 = uVar13 + uVar4 + uVar4;
    uVar18 = uVar5 + uVar7;
    uVar20 = uVar18 + uVar7;
    uVar9 = uVar20 + uVar16;
    uVar13 = ((((uVar13 + uVar4 < uVar4) + uVar17 + (uint)(uVar5 < uVar4) + (uint)(uVar18 < uVar7) +
                (uint)(uVar20 < uVar7) & 0xff) + (uint)(uVar9 < uVar16)) - (uint)(uVar9 < uVar2)) -
             (uint)(uVar9 - uVar2 < uVar14);
    iVar3 = (int)(uVar13 * 0x1000000) >> 0x18;
    puVar11[4] = (uVar9 - uVar2) - uVar14;
    uVar5 = puVar11[5];
    if (iVar3 < 0) {
      uVar17 = -(uint)(uVar5 < (uint)-iVar3);
      uVar13 = uVar5 + iVar3;
    }
    else {
      uVar13 = (uVar13 & 0xff) + uVar5;
      uVar17 = (uint)(uVar13 < uVar5);
    }
    uVar5 = uVar13 + uVar7 + uVar7;
    uVar18 = uVar5 + uVar16;
    uVar20 = uVar18 + uVar16;
    uVar9 = uVar20 + uVar19;
    uVar13 = ((((uVar13 + uVar7 < uVar7) + uVar17 + (uint)(uVar5 < uVar7) + (uint)(uVar18 < uVar16)
                + (uint)(uVar20 < uVar16) & 0xff) + (uint)(uVar9 < uVar19)) - (uint)(uVar9 < uVar14)
             ) - (uint)(uVar9 - uVar14 < uVar12);
    iVar3 = (int)(uVar13 * 0x1000000) >> 0x18;
    puVar11[5] = (uVar9 - uVar14) - uVar12;
    uVar5 = puVar11[6];
    if (iVar3 < 0) {
      uVar17 = -(uint)(uVar5 < (uint)-iVar3);
      uVar13 = uVar5 + iVar3;
    }
    else {
      uVar13 = (uVar13 & 0xff) + uVar5;
      uVar17 = (uint)(uVar13 < uVar5);
    }
    uVar5 = uVar13 + uVar16 + uVar16;
    uVar18 = uVar5 + uVar19;
    uVar20 = uVar18 + uVar19;
    uVar9 = uVar20 + uVar16;
    uVar21 = uVar9 + uVar7;
    uVar5 = ((((uint)(uVar9 < uVar16) +
               (uVar13 + uVar16 < uVar16) + uVar17 + (uint)(uVar5 < uVar16) +
               (uint)(uVar18 < uVar19) + (uint)(uVar20 < uVar19) & 0xff) + (uint)(uVar21 < uVar7)) -
            (uint)(uVar21 < uVar15)) - (uint)(uVar21 - uVar15 < uVar2);
    iVar3 = (int)(uVar5 * 0x1000000) >> 0x18;
    puVar11[6] = (uVar21 - uVar15) - uVar2;
    uVar2 = puVar11[7];
    if (iVar3 < 0) {
      uVar13 = -(uint)(uVar2 < (uint)-iVar3);
      uVar5 = iVar3 + uVar2;
    }
    else {
      uVar5 = uVar2 + (uVar5 & 0xff);
      uVar13 = (uint)(uVar5 < uVar2);
    }
    uVar2 = uVar19 + uVar5 + uVar19;
    uVar16 = uVar2 + uVar19;
    uVar18 = uVar15 + uVar16;
    uVar20 = (uVar18 - uVar14) - uVar12;
    uVar17 = uVar20 - uVar4;
    iVar10 = (int)((((((((uVar19 + uVar5 < uVar19) + uVar13 + (uint)(uVar2 < uVar19) +
                         (uint)(uVar16 < uVar19) & 0xff) + (uint)(uVar18 < uVar15)) -
                      (uint)(uVar18 < uVar14)) - (uint)(uVar18 - uVar14 < uVar12)) -
                    (uint)(uVar20 < uVar4)) - (uint)(uVar17 < uVar7)) * 0x1000000) >> 0x18;
    puVar11[7] = uVar17 - uVar7;
    iVar3 = iVar10;
    if (iVar10 < 0) {
      iVar3 = 0;
    }
    uVar1 = *(ushort *)((int)param_1 + 6);
    puVar11[8] = (int)(char)iVar3;
    uVar2 = 8;
    while (uVar2 = uVar2 + 1, uVar2 < uVar1) {
      puVar11[uVar2] = 0;
    }
    if (iVar10 < 0) {
      puVar6 = puVar11;
      do {
        *puVar6 = ~*puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar11;
      } while (puVar11 + 9 != puVar6);
      do {
        uVar2 = *puVar8;
        *puVar8 = uVar2 + 1;
        if (uVar2 + 1 != 0) break;
        puVar8 = puVar8 + 1;
      } while (puVar11 + 9 != puVar8);
      *(undefined2 *)(param_1 + 1) = 0xffff;
      puVar11[8] = puVar11[8] - iVar10;
    }
  }
  return;
}

