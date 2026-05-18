
undefined4 FUN_ram_420674ee(int *param_1,uint *param_2,undefined1 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  puVar18 = (uint *)(param_1 + param_1[1] + 2);
  puVar23 = puVar18 + 4;
  iVar19 = *param_1 >> 1;
  bVar8 = false;
  uVar9 = param_2[3] ^ puVar18[3];
  uVar10 = *param_2 ^ *puVar18;
  uVar11 = param_2[2] ^ puVar18[2];
  uVar13 = param_2[1] ^ puVar18[1];
  while( true ) {
    iVar19 = iVar19 + -1;
    uVar20 = *puVar23;
    puVar1 = puVar23 + 1;
    puVar2 = puVar23 + 2;
    puVar3 = puVar23 + 3;
    puVar4 = puVar23 + 4;
    puVar5 = puVar23 + 5;
    puVar6 = puVar23 + 6;
    puVar7 = puVar23 + 7;
    if (iVar19 < 1) break;
    puVar23 = puVar23 + 8;
    uVar12 = *(uint *)(&DAT_ram_3c0f829c + (uVar10 & 0xff) * 4) ^
             *(uint *)(&DAT_ram_3c0f769c + (uVar13 >> 0x18) * 4) ^ uVar20 ^
             *(uint *)(&DAT_ram_3c0f7e9c + (uVar9 >> 6 & 0x3fc)) ^
             *(uint *)(&DAT_ram_3c0f7a9c + (uVar11 >> 0xe & 0x3fc));
    uVar20 = *(uint *)(&DAT_ram_3c0f829c + (uVar13 & 0xff) * 4) ^
             *(uint *)(&DAT_ram_3c0f769c + (uVar11 >> 0x18) * 4) ^ *puVar1 ^
             *(uint *)(&DAT_ram_3c0f7e9c + (uVar10 >> 6 & 0x3fc)) ^
             *(uint *)(&DAT_ram_3c0f7a9c + (uVar9 >> 0xe & 0x3fc));
    uVar14 = *(uint *)(&DAT_ram_3c0f829c + (uVar11 & 0xff) * 4) ^
             *(uint *)(&DAT_ram_3c0f769c + (uVar9 >> 0x18) * 4) ^ *puVar2 ^
             *(uint *)(&DAT_ram_3c0f7e9c + (uVar13 >> 6 & 0x3fc)) ^
             *(uint *)(&DAT_ram_3c0f7a9c + (uVar10 >> 0xe & 0x3fc));
    uVar9 = *(uint *)(&DAT_ram_3c0f7e9c + (uVar11 >> 6 & 0x3fc)) ^
            *(uint *)(&DAT_ram_3c0f829c + (uVar9 & 0xff) * 4) ^
            *(uint *)(&DAT_ram_3c0f769c + (uVar10 >> 0x18) * 4) ^ *puVar3 ^
            *(uint *)(&DAT_ram_3c0f7a9c + (uVar13 >> 0xe & 0x3fc));
    uVar10 = *(uint *)(&DAT_ram_3c0f829c + (uVar12 & 0xff) * 4) ^
             *(uint *)(&DAT_ram_3c0f769c + (uVar20 >> 0x18) * 4) ^ *puVar4 ^
             *(uint *)(&DAT_ram_3c0f7e9c + (uVar9 >> 6 & 0x3fc)) ^
             *(uint *)(&DAT_ram_3c0f7a9c + (uVar14 >> 0xe & 0x3fc));
    uVar13 = *(uint *)(&DAT_ram_3c0f829c + (uVar20 & 0xff) * 4) ^
             *(uint *)(&DAT_ram_3c0f769c + (uVar14 >> 0x18) * 4) ^ *puVar5 ^
             *(uint *)(&DAT_ram_3c0f7e9c + (uVar12 >> 6 & 0x3fc)) ^
             *(uint *)(&DAT_ram_3c0f7a9c + (uVar9 >> 0xe & 0x3fc));
    uVar11 = *(uint *)(&DAT_ram_3c0f829c + (uVar14 & 0xff) * 4) ^
             *(uint *)(&DAT_ram_3c0f769c + (uVar9 >> 0x18) * 4) ^ *puVar6 ^
             *(uint *)(&DAT_ram_3c0f7e9c + (uVar20 >> 6 & 0x3fc)) ^
             *(uint *)(&DAT_ram_3c0f7a9c + (uVar12 >> 0xe & 0x3fc));
    uVar9 = *(uint *)(&DAT_ram_3c0f829c + (uVar9 & 0xff) * 4) ^
            *(uint *)(&DAT_ram_3c0f769c + (uVar12 >> 0x18) * 4) ^ *puVar7 ^
            *(uint *)(&DAT_ram_3c0f7e9c + (uVar14 >> 6 & 0x3fc)) ^
            *(uint *)(&DAT_ram_3c0f7a9c + (uVar20 >> 0xe & 0x3fc));
    bVar8 = true;
  }
  if (!bVar8) {
    uVar9 = param_2[3] ^ puVar18[3];
    uVar10 = *param_2 ^ *puVar18;
    uVar11 = param_2[2] ^ puVar18[2];
    uVar13 = param_2[1] ^ puVar18[1];
  }
  uStack_50 = *(uint *)(&DAT_ram_3c0f829c + (uVar10 & 0xff) * 4) ^
              *(uint *)(&DAT_ram_3c0f769c + (uVar13 >> 0x18) * 4) ^ uVar20 ^
              *(uint *)(&DAT_ram_3c0f7e9c + (uVar9 >> 6 & 0x3fc)) ^
              *(uint *)(&DAT_ram_3c0f7a9c + (uVar11 >> 0xe & 0x3fc));
  uStack_4c = *(uint *)(&DAT_ram_3c0f829c + (uVar13 & 0xff) * 4) ^
              *(uint *)(&DAT_ram_3c0f769c + (uVar11 >> 0x18) * 4) ^ *puVar1 ^
              *(uint *)(&DAT_ram_3c0f7e9c + (uVar10 >> 6 & 0x3fc)) ^
              *(uint *)(&DAT_ram_3c0f7a9c + (uVar9 >> 0xe & 0x3fc));
  uStack_44 = *(uint *)(&DAT_ram_3c0f7e9c + (uVar11 >> 6 & 0x3fc)) ^
              *(uint *)(&DAT_ram_3c0f829c + (uVar9 & 0xff) * 4) ^
              *(uint *)(&DAT_ram_3c0f769c + (uVar10 >> 0x18) * 4) ^ *puVar3 ^
              *(uint *)(&DAT_ram_3c0f7a9c + (uVar13 >> 0xe & 0x3fc));
  uVar12 = (uint)(byte)(&DAT_ram_3c0f869c)[uStack_50 & 0xff] ^ *puVar4;
  uVar20 = (uint)(byte)(&DAT_ram_3c0f869c)[uStack_4c >> 0x18] << 0x18 ^ uVar12;
  uStack_48 = *(uint *)(&DAT_ram_3c0f829c + (uVar11 & 0xff) * 4) ^
              *(uint *)(&DAT_ram_3c0f769c + (uVar9 >> 0x18) * 4) ^ *puVar2 ^
              *(uint *)(&DAT_ram_3c0f7e9c + (uVar13 >> 6 & 0x3fc)) ^
              *(uint *)(&DAT_ram_3c0f7a9c + (uVar10 >> 0xe & 0x3fc));
  uVar9 = uVar20 ^ (uint)(byte)(&DAT_ram_3c0f869c)[uStack_44 >> 8 & 0xff] << 8;
  local_60 = uVar9 ^ (uint)(byte)(&DAT_ram_3c0f869c)[uStack_48 >> 0x10 & 0xff] << 0x10;
  uVar13 = (uint)(byte)(&DAT_ram_3c0f869c)[uStack_4c & 0xff] ^ *puVar5;
  uVar21 = (uint)(byte)(&DAT_ram_3c0f869c)[uStack_48 >> 0x18] << 0x18 ^ uVar13;
  uVar22 = uVar21 ^ (uint)(byte)(&DAT_ram_3c0f869c)[uStack_50 >> 8 & 0xff] << 8;
  uStack_5c = uVar22 ^ (uint)(byte)(&DAT_ram_3c0f869c)[uStack_44 >> 0x10 & 0xff] << 0x10;
  uVar14 = (uint)(byte)(&DAT_ram_3c0f869c)[uStack_48 & 0xff] ^ *puVar6;
  uVar10 = (uint)(byte)(&DAT_ram_3c0f869c)[uStack_44 >> 0x18] << 0x18 ^ uVar14;
  uVar11 = uVar10 ^ (uint)(byte)(&DAT_ram_3c0f869c)[uStack_4c >> 8 & 0xff] << 8;
  uStack_58 = uVar11 ^ (uint)(byte)(&DAT_ram_3c0f869c)[uStack_50 >> 0x10 & 0xff] << 0x10;
  uVar15 = (uint)(byte)(&DAT_ram_3c0f869c)[uStack_44 & 0xff] ^ *puVar7;
  uVar16 = uVar15 ^ (uint)(byte)(&DAT_ram_3c0f869c)[uStack_50 >> 0x18] << 0x18;
  uVar17 = uVar16 ^ (uint)(byte)(&DAT_ram_3c0f869c)[uStack_48 >> 8 & 0xff] << 8;
  uStack_54 = (uint)(byte)(&DAT_ram_3c0f869c)[uStack_4c >> 0x10 & 0xff] << 0x10 ^ uVar17;
  param_3[1] = (char)(uVar9 >> 8);
  param_3[2] = (char)(local_60 >> 0x10);
  param_3[5] = (char)(uVar22 >> 8);
  param_3[6] = (char)(uStack_5c >> 0x10);
  param_3[9] = (char)(uVar11 >> 8);
  param_3[10] = (char)(uStack_58 >> 0x10);
  *param_3 = (char)uVar12;
  param_3[4] = (char)uVar13;
  param_3[8] = (char)uVar14;
  param_3[0xc] = (char)uVar15;
  param_3[0xd] = (char)(uVar17 >> 8);
  param_3[0xb] = (char)(uVar10 >> 0x18);
  param_3[3] = (char)(uVar20 >> 0x18);
  param_3[7] = (char)(uVar21 >> 0x18);
  param_3[0xe] = (char)(uStack_54 >> 0x10);
  param_3[0xf] = (char)(uVar16 >> 0x18);
  FUN_ram_4206d7da(&local_60,0x20);
  return 0;
}

