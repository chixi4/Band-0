
undefined4 FUN_ram_420295fc(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined8 uVar23;
  uint uStack_310;
  int iStack_30c;
  uint uStack_308;
  int iStack_304;
  uint auStack_300 [165];
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  puVar7 = (uint *)(param_1 + 0x10);
  puVar15 = &uStack_310;
  FUN_ram_40399daa(auStack_300 + 0xa0,puVar7,0x40);
  iVar2 = 0;
  puVar6 = puVar15;
  do {
    uVar23 = (*(code *)&SUB_ram_400108c8)
                       (*(undefined4 *)(param_2 + iVar2),((undefined4 *)(param_2 + iVar2))[1]);
    *(undefined8 *)(puVar6 + 4) = uVar23;
    iVar2 = iVar2 + 8;
    puVar6 = puVar6 + 2;
  } while (iVar2 != 0x80);
  puVar6 = puVar15;
  do {
    uVar3 = puVar6[0x21];
    uVar4 = puVar6[0x20];
    uVar16 = puVar6[7];
    uVar8 = (uVar3 << 0xd | uVar4 >> 0x13) ^ (uVar3 >> 0x1d | uVar4 << 3) ^
            (uVar4 >> 6 | uVar3 << 0x1a);
    uVar5 = puVar6[4] + puVar6[0x16];
    uVar1 = puVar6[6];
    uVar19 = uVar8 + uVar5;
    uVar9 = ((uVar16 << 0x1f | uVar1 >> 1) ^ (uVar16 << 0x18 | uVar1 >> 8) ^
            (uVar1 >> 7 | uVar16 << 0x19)) + uVar19;
    puVar6[0x24] = uVar9;
    puVar6[0x25] = (uint)(uVar9 < uVar19) +
                   (uVar16 >> 7 ^ (uVar1 << 0x1f | uVar16 >> 1) ^ (uVar1 << 0x18 | uVar16 >> 8)) +
                   (uint)(uVar19 < uVar8) +
                   ((uVar4 << 0xd | uVar3 >> 0x13) ^ (uVar4 >> 0x1d | uVar3 << 3) ^ uVar3 >> 6) +
                   (uint)(uVar5 < puVar6[0x16]) + puVar6[0x17] + puVar6[5];
    puVar6 = puVar6 + 2;
  } while (auStack_300 + 0x7c != puVar6);
  puVar12 = (uint *)&DAT_ram_3c077f60;
  puVar6 = puVar15;
  do {
    uVar5 = (uStack_5c << 0x12 | uStack_60 >> 0xe) ^ (uStack_5c << 0xe | uStack_60 >> 0x12) ^
            (uStack_5c >> 9 | uStack_60 << 0x17);
    uVar3 = puVar6[4] + *puVar12;
    uVar4 = uVar3 + uVar5;
    uVar1 = ((uStack_50 ^ uStack_58) & uStack_60 ^ uStack_50) + uVar4;
    uStack_48 = uStack_48 + uVar1;
    uStack_68 = uStack_68 + uStack_48;
    iVar2 = (uint)(uStack_48 < uVar1) +
            (uint)(uVar1 < uVar4) +
            (uint)(uVar4 < uVar5) +
            ((uStack_60 << 0x12 | uStack_5c >> 0xe) ^ (uStack_60 << 0xe | uStack_5c >> 0x12) ^
            (uStack_60 >> 9 | uStack_5c << 0x17)) +
            puVar12[1] + puVar6[5] + (uint)(uVar3 < *puVar12) +
            ((uStack_4c ^ uStack_54) & uStack_5c ^ uStack_4c) + uStack_44;
    uVar19 = (uint)(uStack_68 < uStack_48) + iVar2 + uStack_64;
    uVar1 = (auStack_300[0xa1] << 4 | auStack_300[0xa0] >> 0x1c) ^
            (auStack_300[0xa1] >> 2 | auStack_300[0xa0] << 0x1e) ^
            (auStack_300[0xa1] >> 7 | auStack_300[0xa0] << 0x19);
    uStack_48 = uStack_48 + uVar1;
    uVar9 = ((auStack_300[0xa0] | auStack_300[0xa2]) & auStack_300[0xa4] |
            auStack_300[0xa0] & auStack_300[0xa2]) + uStack_48;
    uVar20 = (uint)(uStack_48 < uVar1) +
             ((auStack_300[0xa0] << 4 | auStack_300[0xa1] >> 0x1c) ^
              (auStack_300[0xa0] >> 2 | auStack_300[0xa1] << 0x1e) ^
             (auStack_300[0xa0] >> 7 | auStack_300[0xa1] << 0x19)) + iVar2 +
             ((auStack_300[0xa1] | auStack_300[0xa3]) & uStack_6c |
             auStack_300[0xa1] & auStack_300[0xa3]) + (uint)(uVar9 < uStack_48);
    uVar3 = puVar6[6] + puVar12[2];
    uStack_50 = uStack_50 + uVar3;
    uVar4 = ((uStack_60 ^ uStack_58) & uStack_68 ^ uStack_58) + uStack_50;
    uVar1 = ((uVar19 * 0x40000 | uStack_68 >> 0xe) ^ (uVar19 * 0x4000 | uStack_68 >> 0x12) ^
            (uVar19 >> 9 | uStack_68 * 0x800000)) + uVar4;
    auStack_300[0xa4] = auStack_300[0xa4] + uVar1;
    iVar2 = (uint)(uVar1 < uVar4) +
            (uint)(uVar4 < uStack_50) +
            (uint)(uVar3 < puVar12[2]) + puVar12[3] + puVar6[7] + uStack_4c +
            (uint)(uStack_50 < uVar3) + ((uStack_5c ^ uStack_54) & uVar19 ^ uStack_54) +
            ((uStack_68 * 0x40000 | uVar19 >> 0xe) ^ (uStack_68 * 0x4000 | uVar19 >> 0x12) ^
            (uStack_68 >> 9 | uVar19 * 0x800000));
    uVar8 = uStack_6c + iVar2 + (uint)(auStack_300[0xa4] < uVar1);
    uVar3 = (uVar20 * 0x10 | uVar9 >> 0x1c) ^ (uVar20 >> 2 | uVar9 * 0x40000000) ^
            (uVar20 >> 7 | uVar9 * 0x2000000);
    uVar1 = uVar1 + uVar3;
    uVar14 = ((uVar9 | auStack_300[0xa0]) & auStack_300[0xa2] | uVar9 & auStack_300[0xa0]) + uVar1;
    uVar10 = (uint)(uVar14 < uVar1) +
             (uint)(uVar1 < uVar3) +
             iVar2 + ((uVar9 * 0x10 | uVar20 >> 0x1c) ^ (uVar9 >> 2 | uVar20 * 0x40000000) ^
                     (uVar9 >> 7 | uVar20 * 0x2000000)) +
             ((uVar20 | auStack_300[0xa1]) & auStack_300[0xa3] | uVar20 & auStack_300[0xa1]);
    uVar1 = puVar6[8] + puVar12[4];
    uStack_58 = uVar1 + uStack_58;
    uVar4 = ((uStack_60 ^ uStack_68) & auStack_300[0xa4] ^ uStack_60) + uStack_58;
    uVar3 = ((uVar8 * 0x40000 | auStack_300[0xa4] >> 0xe) ^
             (uVar8 * 0x4000 | auStack_300[0xa4] >> 0x12) ^
            (uVar8 >> 9 | auStack_300[0xa4] * 0x800000)) + uVar4;
    uVar11 = auStack_300[0xa2] + uVar3;
    iVar2 = (uint)(uVar3 < uVar4) +
            (uint)(uVar4 < uStack_58) +
            (uint)(uStack_58 < uVar1) +
            (uint)(uVar1 < puVar12[4]) + puVar12[5] + puVar6[9] + uStack_54 +
            ((uStack_5c ^ uVar19) & uVar8 ^ uStack_5c) +
            ((auStack_300[0xa4] * 0x40000 | uVar8 >> 0xe) ^
             (auStack_300[0xa4] * 0x4000 | uVar8 >> 0x12) ^
            (auStack_300[0xa4] >> 9 | uVar8 * 0x800000));
    uVar5 = (uint)(uVar11 < auStack_300[0xa2]) + auStack_300[0xa3] + iVar2;
    uVar1 = (uVar10 * 0x10 | uVar14 >> 0x1c) ^ (uVar10 >> 2 | uVar14 * 0x40000000) ^
            (uVar10 >> 7 | uVar14 * 0x2000000);
    uVar3 = uVar3 + uVar1;
    uVar13 = ((uVar9 | uVar14) & auStack_300[0xa0] | uVar9 & uVar14) + uVar3;
    uVar4 = (uint)(uVar13 < uVar3) +
            (uint)(uVar3 < uVar1) +
            iVar2 + ((uVar14 * 0x10 | uVar10 >> 0x1c) ^ (uVar14 >> 2 | uVar10 * 0x40000000) ^
                    (uVar14 >> 7 | uVar10 * 0x2000000)) +
            ((uVar20 | uVar10) & auStack_300[0xa1] | uVar20 & uVar10);
    uVar3 = puVar6[10] + puVar12[6];
    uStack_60 = uStack_60 + uVar3;
    uVar1 = ((uStack_68 ^ auStack_300[0xa4]) & uVar11 ^ uStack_68) + uStack_60;
    uVar17 = ((uVar5 * 0x40000 | uVar11 >> 0xe) ^ (uVar5 * 0x4000 | uVar11 >> 0x12) ^
             (uVar5 >> 9 | uVar11 * 0x800000)) + uVar1;
    iVar2 = (uint)(uVar17 < uVar1) +
            (uint)(uVar1 < uStack_60) +
            (uint)(uStack_60 < uVar3) +
            (uint)(uVar3 < puVar12[6]) + puVar12[7] + puVar6[0xb] + uStack_5c +
            ((uVar19 ^ uVar8) & uVar5 ^ uVar19) +
            ((uVar11 * 0x40000 | uVar5 >> 0xe) ^ (uVar11 * 0x4000 | uVar5 >> 0x12) ^
            (uVar11 >> 9 | uVar5 * 0x800000));
    uVar22 = auStack_300[0xa0] + uVar17;
    uVar3 = (uint)(uVar22 < auStack_300[0xa0]) + auStack_300[0xa1] + iVar2;
    uVar1 = (uVar4 * 0x10 | uVar13 >> 0x1c) ^ (uVar4 >> 2 | uVar13 * 0x40000000) ^
            (uVar4 >> 7 | uVar13 * 0x2000000);
    uVar17 = uVar17 + uVar1;
    uVar16 = ((uVar14 | uVar13) & uVar9 | uVar14 & uVar13) + uVar17;
    uVar18 = (uint)(uVar16 < uVar17) +
             (uint)(uVar17 < uVar1) +
             iVar2 + ((uVar13 * 0x10 | uVar4 >> 0x1c) ^ (uVar13 >> 2 | uVar4 * 0x40000000) ^
                     (uVar13 >> 7 | uVar4 * 0x2000000)) +
             ((uVar10 | uVar4) & uVar20 | uVar10 & uVar4);
    uVar21 = puVar6[0xc] + puVar12[8];
    uStack_68 = uStack_68 + uVar21;
    uVar1 = ((auStack_300[0xa4] ^ uVar11) & uVar22 ^ auStack_300[0xa4]) + uStack_68;
    uVar17 = ((uVar3 * 0x40000 | uVar22 >> 0xe) ^ (uVar3 * 0x4000 | uVar22 >> 0x12) ^
             (uVar3 >> 9 | uVar22 * 0x800000)) + uVar1;
    uStack_48 = uVar9 + uVar17;
    iVar2 = (uint)(uVar17 < uVar1) +
            (uint)(uVar1 < uStack_68) +
            (uint)(uStack_68 < uVar21) +
            (uint)(uVar21 < puVar12[8]) + puVar12[9] + puVar6[0xd] + uVar19 +
            ((uVar8 ^ uVar5) & uVar3 ^ uVar8) +
            ((uVar22 * 0x40000 | uVar3 >> 0xe) ^ (uVar22 * 0x4000 | uVar3 >> 0x12) ^
            (uVar22 >> 9 | uVar3 * 0x800000));
    uStack_44 = (uint)(uStack_48 < uVar9) + uVar20 + iVar2;
    uVar1 = (uVar18 * 0x10 | uVar16 >> 0x1c) ^ (uVar18 >> 2 | uVar16 * 0x40000000) ^
            (uVar18 >> 7 | uVar16 * 0x2000000);
    uVar17 = uVar17 + uVar1;
    uStack_68 = ((uVar13 | uVar16) & uVar14 | uVar13 & uVar16) + uVar17;
    uStack_64 = (uint)(uStack_68 < uVar17) +
                ((uVar16 * 0x10 | uVar18 >> 0x1c) ^ (uVar16 >> 2 | uVar18 * 0x40000000) ^
                (uVar16 >> 7 | uVar18 * 0x2000000)) + iVar2 + (uint)(uVar17 < uVar1) +
                ((uVar4 | uVar18) & uVar10 | uVar4 & uVar18);
    uVar9 = puVar6[0xe] + puVar12[10];
    auStack_300[0xa4] = auStack_300[0xa4] + uVar9;
    uVar19 = ((uVar11 ^ uVar22) & uStack_48 ^ uVar11) + auStack_300[0xa4];
    uVar1 = ((uStack_44 * 0x40000 | uStack_48 >> 0xe) ^ (uStack_44 * 0x4000 | uStack_48 >> 0x12) ^
            (uStack_44 >> 9 | uStack_48 * 0x800000)) + uVar19;
    uStack_50 = uVar14 + uVar1;
    iVar2 = (uint)(uVar1 < uVar19) +
            (uint)(uVar19 < auStack_300[0xa4]) +
            (uint)(auStack_300[0xa4] < uVar9) +
            (uint)(uVar9 < puVar12[10]) + puVar12[0xb] + puVar6[0xf] + uVar8 +
            ((uVar5 ^ uVar3) & uStack_44 ^ uVar5) +
            ((uStack_48 * 0x40000 | uStack_44 >> 0xe) ^ (uStack_48 * 0x4000 | uStack_44 >> 0x12) ^
            (uStack_48 >> 9 | uStack_44 * 0x800000));
    uStack_4c = uVar10 + iVar2 + (uint)(uStack_50 < uVar14);
    uVar8 = (uStack_64 * 0x10 | uStack_68 >> 0x1c) ^ (uStack_64 >> 2 | uStack_68 * 0x40000000) ^
            (uStack_64 >> 7 | uStack_68 * 0x2000000);
    uVar1 = uVar1 + uVar8;
    auStack_300[0xa4] = ((uVar16 | uStack_68) & uVar13 | uVar16 & uStack_68) + uVar1;
    uStack_6c = (uint)(auStack_300[0xa4] < uVar1) +
                ((uStack_68 * 0x10 | uStack_64 >> 0x1c) ^ (uStack_68 >> 2 | uStack_64 * 0x40000000)
                ^ (uStack_68 >> 7 | uStack_64 * 0x2000000)) + iVar2 + (uint)(uVar1 < uVar8) +
                ((uVar18 | uStack_64) & uVar4 | uVar18 & uStack_64);
    uVar9 = puVar6[0x10] + puVar12[0xc];
    uVar11 = uVar11 + uVar9;
    uVar1 = ((uVar22 ^ uStack_48) & uStack_50 ^ uVar22) + uVar11;
    uVar8 = ((uStack_4c * 0x40000 | uStack_50 >> 0xe) ^ (uStack_4c * 0x4000 | uStack_50 >> 0x12) ^
            (uStack_4c >> 9 | uStack_50 * 0x800000)) + uVar1;
    uStack_58 = uVar13 + uVar8;
    iVar2 = (uint)(uVar8 < uVar1) +
            (uint)(uVar1 < uVar11) +
            (uint)(uVar11 < uVar9) +
            (uint)(uVar9 < puVar12[0xc]) + puVar12[0xd] + puVar6[0x11] + uVar5 +
            ((uVar3 ^ uStack_44) & uStack_4c ^ uVar3) +
            ((uStack_50 * 0x40000 | uStack_4c >> 0xe) ^ (uStack_50 * 0x4000 | uStack_4c >> 0x12) ^
            (uStack_50 >> 9 | uStack_4c * 0x800000));
    uStack_54 = uVar4 + iVar2 + (uint)(uStack_58 < uVar13);
    uVar1 = (uStack_6c * 0x10 | auStack_300[0xa4] >> 0x1c) ^
            (uStack_6c >> 2 | auStack_300[0xa4] * 0x40000000) ^
            (uStack_6c >> 7 | auStack_300[0xa4] * 0x2000000);
    uVar8 = uVar8 + uVar1;
    auStack_300[0xa2] =
         ((uStack_68 | auStack_300[0xa4]) & uVar16 | uStack_68 & auStack_300[0xa4]) + uVar8;
    auStack_300[0xa3] =
         (uint)(auStack_300[0xa2] < uVar8) +
         (uint)(uVar8 < uVar1) +
         iVar2 + ((auStack_300[0xa4] * 0x10 | uStack_6c >> 0x1c) ^
                  (auStack_300[0xa4] >> 2 | uStack_6c * 0x40000000) ^
                 (auStack_300[0xa4] >> 7 | uStack_6c * 0x2000000)) +
         ((uStack_64 | uStack_6c) & uVar18 | uStack_64 & uStack_6c);
    uVar1 = puVar6[0x12] + puVar12[0xe];
    uVar22 = uVar22 + uVar1;
    uVar4 = ((uStack_48 ^ uStack_50) & uStack_58 ^ uStack_48) + uVar22;
    uStack_310 = ((uStack_54 * 0x40000 | uStack_58 >> 0xe) ^
                  (uStack_54 * 0x4000 | uStack_58 >> 0x12) ^ (uStack_54 >> 9 | uStack_58 * 0x800000)
                 ) + uVar4;
    iStack_30c = (uint)(uStack_310 < uVar4) +
                 (uint)(uVar4 < uVar22) +
                 (uint)(uVar22 < uVar1) +
                 (uint)(uVar1 < puVar12[0xe]) + puVar12[0xf] + puVar6[0x13] + uVar3 +
                 ((uStack_44 ^ uStack_4c) & uStack_54 ^ uStack_44) +
                 ((uStack_58 * 0x40000 | uStack_54 >> 0xe) ^
                  (uStack_58 * 0x4000 | uStack_54 >> 0x12) ^ (uStack_58 >> 9 | uStack_54 * 0x800000)
                 );
    uVar1 = (auStack_300[0xa3] * 0x10 | auStack_300[0xa2] >> 0x1c) ^
            (auStack_300[0xa3] >> 2 | auStack_300[0xa2] * 0x40000000) ^
            (auStack_300[0xa3] >> 7 | auStack_300[0xa2] * 0x2000000);
    uStack_308 = ((auStack_300[0xa4] | auStack_300[0xa2]) & uStack_68 |
                 auStack_300[0xa4] & auStack_300[0xa2]) + uVar1;
    uStack_60 = uVar16 + uStack_310;
    iStack_304 = (uint)(uStack_308 < uVar1) +
                 ((auStack_300[0xa2] * 0x10 | auStack_300[0xa3] >> 0x1c) ^
                  (auStack_300[0xa2] >> 2 | auStack_300[0xa3] * 0x40000000) ^
                 (auStack_300[0xa2] >> 7 | auStack_300[0xa3] * 0x2000000)) +
                 ((uStack_6c | auStack_300[0xa3]) & uStack_64 | uStack_6c & auStack_300[0xa3]);
    auStack_300[0xa0] = uStack_310 + uStack_308;
    uStack_5c = (uint)(uStack_60 < uVar16) + uVar18 + iStack_30c;
    puVar6 = puVar6 + 0x10;
    auStack_300[0xa1] = (uint)(auStack_300[0xa0] < uStack_310) + iStack_30c + iStack_304;
    puVar12 = puVar12 + 0x10;
  } while (auStack_300 + 0x9c != puVar6);
  do {
    uVar4 = *puVar7;
    uVar1 = puVar15[0xa5];
    uVar3 = puVar15[0xa4] + uVar4;
    *puVar7 = uVar3;
    puVar7[1] = (uint)(uVar3 < uVar4) + puVar7[1] + uVar1;
    puVar7 = puVar7 + 2;
    puVar15 = puVar15 + 2;
  } while ((uint *)(param_1 + 0x50) != puVar7);
  FUN_ram_420293a6(&uStack_310,0x2d0);
  return 0;
}

