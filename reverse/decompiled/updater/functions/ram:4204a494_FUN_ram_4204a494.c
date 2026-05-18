
short FUN_ram_4204a494(int param_1)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  undefined1 auStack_a0 [12];
  uint local_94;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  undefined1 local_79;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [16];
  
  local_88 = (uint)*(ushort *)(param_1 + 0x16);
  local_68 = 0;
  local_64 = 0;
  uVar3 = (uint)*(ushort *)(gp + 0x5c8);
  if (3 < local_88 / uVar3) {
    uVar3 = 0x200;
  }
  puVar18 = *(uint **)(param_1 + 0x24);
  uVar16 = *puVar18;
  iVar13 = *(int *)(*(int *)(param_1 + 4) + 4);
  if ((uVar16 & 0x40000) != 0) {
    iVar13 = iVar13 + 8;
  }
  local_84 = (*(code *)&SUB_ram_40011c58)(iVar13);
  uVar10 = puVar18[4] >> 8 & 0xf;
  if (uVar10 < 4) {
    uVar14 = (uint)*(byte *)(uVar10 + 0x3c079178);
    uVar10 = (uint)*(byte *)(uVar10 + 0x3c07917c);
    *(byte *)(iVar13 + 1) = *(byte *)(iVar13 + 1) | 4;
    uVar7 = *(ushort *)(param_1 + 0x14);
    *puVar18 = uVar16 | 0x80;
    iVar19 = uVar14 + local_84;
    iVar17 = uVar3 + iVar19;
    local_8c = 0xf00;
    local_90 = uVar14 + 8;
    iVar15 = 0;
    iVar4 = param_1;
    for (uVar16 = ((uVar7 + local_88) - uVar10) - iVar17;
        uVar9 = *(uint *)(*(int *)(param_1 + 0x24) + 0x10) & local_8c, 0 < (int)uVar16;
        uVar16 = uVar16 - uVar5) {
      uVar5 = uVar3;
      if (uVar16 < uVar3) {
        uVar5 = uVar16;
      }
      uVar11 = uVar14;
      if ((uVar9 == 0x200) && (uVar16 <= uVar3)) {
        uVar11 = local_90;
      }
      iVar15 = FUN_ram_4039cf38(0,10,uVar11 + uVar5);
      if (iVar15 == 0) goto LAB_ram_4204a642;
      FUN_ram_40399daa(*(int *)(*(int *)(iVar15 + 4) + 4) + uVar14,
                       *(int *)(*(int *)(param_1 + 4) + 4) + iVar17,uVar5);
      *(int *)(iVar4 + 0x20) = iVar15;
      *(undefined4 *)(iVar15 + 0x20) = 0;
      iVar17 = iVar17 + uVar5;
      iVar4 = iVar15;
    }
    if (uVar9 == 0x200) {
      local_79 = 0;
      local_78 = 0;
      local_74 = 0;
      local_8c = (((uint)*(ushort *)(param_1 + 0x16) + (uint)*(ushort *)(param_1 + 0x14)) -
                 (uVar14 + uVar10)) - local_84;
      iVar17 = local_8c + 0x10;
      local_70 = 0;
      local_6c = 0;
      uVar5 = (*(code *)&SUB_ram_40011ff0)(local_8c + 0x15,4);
      iVar4 = -(uVar5 + 0xf & 0xfffffff0);
      local_90 = (uVar5 - iVar17) - 1;
      FUN_ram_4204a3e6(iVar13,auStack_a0 + iVar4);
      FUN_ram_40399daa((int)&local_90 + iVar4,iVar13 + iVar19,local_8c);
      uVar9 = local_8c;
      uVar16 = local_90;
      *(undefined1 *)((int)&local_90 + iVar17 + iVar4 + -0x10) = 0x5a;
      for (uVar11 = 0; uVar11 < uVar16; uVar11 = uVar11 + 1 & 0xff) {
        *(undefined1 *)((int)&local_90 + uVar9 + uVar11 + iVar4 + 1) = 0;
      }
      iVar17 = FUN_ram_42049a8c(&local_79,&local_78,&local_74,&local_70,
                                *(byte *)(*(int *)(param_1 + 0x24) + 0x10) & 0xbf,auStack_60,0x20);
      if (iVar17 != 0) goto LAB_ram_4204a642;
      uVar16 = FUN_ram_4204a118(auStack_48);
      uVar9 = FUN_ram_4204a118(auStack_44);
      uVar11 = 0;
      while (uVar11 < uVar5) {
        local_8c = uVar11;
        uVar11 = FUN_ram_4204a118(auStack_a0 + uVar11 + iVar4);
        uVar16 = uVar16 ^ uVar11;
        uVar9 = (uVar16 >> 0xf | uVar16 << 0x11) ^ uVar9;
        iVar17 = uVar16 + uVar9;
        uVar16 = FUN_ram_4204a152(iVar17);
        uVar9 = uVar9 ^ uVar16;
        uVar16 = iVar17 + uVar9;
        uVar9 = (uVar16 * 8 | uVar16 >> 0x1d) ^ uVar9;
        uVar16 = uVar16 + uVar9;
        uVar9 = (uVar16 >> 2 | uVar16 * 0x40000000) ^ uVar9;
        uVar16 = uVar16 + uVar9;
        uVar11 = local_8c + 4;
      }
      FUN_ram_4204a136(&local_68,uVar16);
      FUN_ram_4204a136(&local_64,uVar9);
      uVar10 = uVar10 - 8 & 0xff;
    }
    local_8c = local_84 & 0xffff;
    iVar17 = 0;
    uVar7 = 0;
    local_90 = 0xfffff0ff;
    uVar16 = 0;
    for (iVar4 = *(int *)(param_1 + 0x20); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x20)) {
      local_94 = uVar16;
      if (uVar14 != 0) {
        FUN_ram_40399daa(*(undefined4 *)(*(int *)(iVar4 + 4) + 4),
                         *(int *)(*(int *)(param_1 + 4) + 4) + local_84,uVar14);
        uVar16 = *(uint *)(*(int *)(param_1 + 0x24) + 0x10) & 0xf00;
        if (uVar16 == 0x300) {
          pbVar6 = *(byte **)(*(int *)(iVar4 + 4) + 4);
          local_94 = local_94 + 1 & 0xff;
          uVar9 = (uint)pbVar6[1] << 8 | (uint)pbVar6[4] << 0x10 | (uint)*pbVar6 |
                  (uint)pbVar6[5] << 0x18;
          uVar16 = uVar9 + local_94;
          iVar15 = (uint)(uVar16 < uVar9) + (uint)*(ushort *)(pbVar6 + 6);
          *pbVar6 = (byte)uVar16;
          pbVar6[1] = (byte)(uVar16 >> 8);
          pbVar6[6] = (byte)iVar15;
          pbVar6[4] = (byte)(uVar16 >> 0x10);
          pbVar6[5] = (byte)(uVar16 >> 0x18);
          pbVar6[7] = (byte)((uint)iVar15 >> 8);
        }
        else if (uVar16 == 0x200) {
          pbVar6 = *(byte **)(*(int *)(iVar4 + 4) + 4);
          local_94 = local_94 + 1 & 0xff;
          uVar9 = (uint)*pbVar6 << 8 | (uint)pbVar6[4] << 0x10 | (uint)pbVar6[2] |
                  (uint)pbVar6[5] << 0x18;
          uVar16 = uVar9 + local_94;
          iVar15 = (uint)(uVar16 < uVar9) + (uint)*(ushort *)(pbVar6 + 6);
          bVar2 = (byte)(uVar16 >> 8);
          *pbVar6 = bVar2;
          pbVar6[1] = bVar2 & 0x7f | 0x20;
          pbVar6[2] = (byte)uVar16;
          pbVar6[6] = (byte)iVar15;
          pbVar6[4] = (byte)(uVar16 >> 0x10);
          pbVar6[5] = (byte)(uVar16 >> 0x18);
          pbVar6[7] = (byte)((uint)iVar15 >> 8);
        }
      }
      iVar17 = *(int *)(*(int *)(iVar4 + 4) + 4) - local_84;
      *(int *)(*(int *)(iVar4 + 4) + 4) = iVar17;
      if ((**(uint **)(iVar4 + 0x24) & 0x40000) != 0) {
        iVar17 = iVar17 + 8;
      }
      FUN_ram_40399daa(iVar17,iVar13,local_84);
      uVar7 = uVar7 + 1;
      puVar12 = *(uint **)(param_1 + 0x24);
      *(short *)(iVar4 + 0x14) = (short)local_8c;
      *(ushort *)(iVar17 + 0x16) = uVar7 & 0xf | *(ushort *)(iVar17 + 0x16);
      puVar18 = *(uint **)(iVar4 + 0x24);
      uVar16 = *puVar18;
      *(char *)(puVar18 + 4) = (char)puVar12[4];
      uVar8 = puVar18[4] & local_90;
      uVar9 = (puVar12[4] >> 8 & 0xf) << 8;
      puVar18[4] = uVar8 | uVar9;
      *puVar18 = uVar16 | 0x80;
      *puVar18 = *puVar12 | uVar16 | 0x80;
      *(char *)(puVar18 + 3) = (char)puVar12[3];
      puVar18[6] = puVar12[6];
      uVar5 = puVar12[4] & 0xf00000;
      puVar18[4] = uVar8 & 0xff0fffff | uVar9 | uVar5;
      uVar16 = puVar12[1];
      uVar11 = puVar18[1];
      puVar18[1] = uVar11 & 0xffffff0f | uVar16 & 0xf0;
      puVar18[1] = uVar11 & 0xffffff00 | uVar16 & 0xf0 | puVar12[1] & 0xf;
      uVar16 = puVar12[4];
      puVar18[4] = uVar8 & 0xff0f0fff | uVar9 | uVar5 | uVar16 & 0xf000;
      puVar18[4] = uVar8 & 0xff0e0fff | uVar9 | uVar5 | uVar16 & 0xf000 |
                   (*(ushort *)((int)puVar12 + 0x12) & 1) << 0x10;
      *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
      FUN_ram_4039b45c();
      puVar18 = *(uint **)(iVar4 + 8);
      *puVar18 = *puVar18 | 0x40000000;
      *puVar18 = *puVar18 & 0xff000fff | ((*puVar18 >> 0xc & 0xfff) + uVar10 & 0xfff) << 0xc;
      puVar18 = *(uint **)(iVar4 + 4);
      uVar1 = *(ushort *)(iVar4 + 0x14);
      uVar16 = *(ushort *)(iVar4 + 0x16) + uVar10;
      *(short *)(iVar4 + 0x16) = (short)(uVar16 * 0x10000 >> 0x10);
      *puVar18 = *puVar18 | 0x80000000;
      *puVar18 = *puVar18 | 0x40000000;
      *puVar18 = *puVar18 & 0xdfffffff;
      *puVar18 = *puVar18 & 0xff000fff | ((uVar16 & 0xffff) + (uint)uVar1 & 0xfff) << 0xc;
      uVar16 = local_94;
      iVar15 = iVar4;
    }
    uVar3 = uVar3 + uVar14 + uVar10;
    puVar18 = *(uint **)(param_1 + 4);
    uVar1 = *(ushort *)(param_1 + 0x14);
    *(short *)(param_1 + 0x16) = (short)(uVar3 * 0x10000 >> 0x10);
    *puVar18 = *puVar18 | 0x80000000;
    *puVar18 = *puVar18 | 0x40000000;
    *puVar18 = *puVar18 & 0xdfffffff;
    *puVar18 = *puVar18 & 0xff000fff | ((uVar3 & 0xffff) + (uint)uVar1 & 0xfff) << 0xc;
    if ((iVar15 != 0) && (iVar17 != 0)) {
      *(byte *)(iVar17 + 1) = *(byte *)(iVar17 + 1) & 0xfb;
      **(uint **)(iVar15 + 0x24) = **(uint **)(iVar15 + 0x24) | 0xc0;
      iVar13 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar15 + 0x20) = 0;
      if ((*(uint *)(iVar13 + 0x10) & 0xf00) == 0x200) {
        FUN_ram_40399daa(*(int *)(*(int *)(iVar15 + 4) + 4) +
                         (((uint)*(ushort *)(iVar15 + 0x16) + (uint)*(ushort *)(iVar15 + 0x14)) -
                         uVar10) + -8,&local_68,8);
      }
      return uVar7 + 1;
    }
  }
LAB_ram_4204a642:
  iVar15 = *(int *)(param_1 + 0x20);
  while (iVar15 != 0) {
    iVar4 = *(int *)(iVar15 + 0x20);
    *(undefined4 *)(iVar15 + 0x20) = 0;
    FUN_ram_4039bab0();
    iVar15 = iVar4;
  }
  *(byte *)(iVar13 + 1) = *(byte *)(iVar13 + 1) & 0xfb;
  **(uint **)(param_1 + 0x24) = **(uint **)(param_1 + 0x24) & 0xffffff7f;
  uVar7 = *(ushort *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(short *)(param_1 + 0x16) = (short)local_88;
  puVar18 = *(uint **)(param_1 + 4);
  *puVar18 = *puVar18 | 0x80000000;
  *puVar18 = *puVar18 | 0x40000000;
  *puVar18 = *puVar18 & 0xdfffffff;
  *puVar18 = *puVar18 & 0xff000fff | (local_88 + uVar7 & 0xfff) << 0xc;
  return 0;
}

