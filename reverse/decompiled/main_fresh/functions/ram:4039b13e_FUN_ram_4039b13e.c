
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4039b13e(int *param_1,int param_2,uint param_3)

{
  short sVar1;
  undefined2 uVar2;
  bool bVar3;
  undefined2 uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [6];
  undefined1 auStack_3a [14];
  
  uVar15 = 2;
  if (((param_3 != 0) && (param_3 != 3)) && (uVar15 = 3, 2 < (int)param_3)) {
    uVar15 = (uint)((int)param_3 < 6);
  }
  if ((param_1 == (int *)0x0) || (iVar16 = *param_1, iVar16 == 0)) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe438,&DAT_ram_3c0c4114,0x7d4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  (*(code *)&SUB_ram_40011fd0)(_DAT_ram_3fcc4014 != iVar16,auStack_48);
  iVar17 = *(int *)(param_2 + 4);
  pbVar5 = *(byte **)(iVar17 + 4);
  FUN_ram_4039c11e(auStack_40,pbVar5,0xe);
  puVar9 = *(uint **)(param_2 + 0x24);
  uVar2 = *(undefined2 *)(pbVar5 + 0xc);
  uVar10 = *puVar9;
  uVar13 = uVar10 & 0x8000;
  bVar12 = *pbVar5;
  if (uVar13 == 0) {
    sVar1 = *(short *)(param_2 + 0x16);
    *(byte **)(iVar17 + 4) = pbVar5 + 0xe;
    *(short *)(param_2 + 0x16) = sVar1 + -0xe;
  }
  if ((*(int *)(iVar16 + 0x120) == 1) && ((bVar12 & 1) != 0)) {
    *puVar9 = uVar10 | 2;
  }
  uVar11 = param_1[3];
  uVar10 = *puVar9;
  if (((uVar11 & 2) == 0) || ((uVar10 & 2) != 0)) {
    bVar3 = false;
    uVar15 = 0;
    uVar4 = 0x18;
  }
  else {
    bVar3 = true;
    uVar4 = 0x1a;
  }
  *(undefined2 *)(param_2 + 0x14) = uVar4;
  if (uVar13 == 0) {
    iVar14 = *(int *)(iVar17 + 4);
    sVar1 = *(short *)(param_2 + 0x16);
    *(int *)(iVar17 + 4) = iVar14 + -8;
    *(short *)(param_2 + 0x16) = sVar1 + 8;
    *(undefined1 *)(iVar14 + -7) = 0xaa;
    *(undefined1 *)(iVar14 + -8) = 0xaa;
    *(char *)(iVar14 + -2) = (char)uVar2;
    *(undefined1 *)(iVar14 + -6) = 3;
    *(undefined1 *)(iVar14 + -5) = 0;
    *(undefined1 *)(iVar14 + -4) = 0;
    *(undefined1 *)(iVar14 + -3) = 0;
    *(char *)(iVar14 + -1) = (char)((ushort)uVar2 >> 8);
  }
  pbVar5 = (byte *)0x0;
  if ((*(uint *)(iVar16 + 0xa4) & 0x10) != 0) {
    if ((((char)param_1[9] == '\x01') && ((uVar10 & 4) != 0)) || ((uVar11 & 1) != 0)) {
      pbVar5 = (byte *)(*(code *)&SUB_ram_40011ff4)(param_1,param_2);
    }
    else {
      pbVar5 = (byte *)0x0;
    }
  }
  (*(code *)&SUB_ram_40011fac)(param_2,uVar4);
  puVar6 = *(undefined1 **)(*(int *)(param_2 + 4) + 4);
  *puVar6 = 8;
  iVar17 = *(int *)(iVar16 + 0x120);
  *(undefined2 *)(puVar6 + 2) = 0;
  if (iVar17 == 0) {
    puVar6[1] = 1;
    FUN_ram_4039c11e(puVar6 + 4,param_1 + 1,6);
    FUN_ram_4039c11e(puVar6 + 10,auStack_3a,6);
    puVar7 = auStack_40;
  }
  else {
    if (iVar17 != 1) {
      (*(code *)&SUB_ram_40011fa4)(param_2);
      return 0;
    }
    puVar6[1] = 2;
    FUN_ram_4039c11e(puVar6 + 4,auStack_40,6);
    FUN_ram_4039c11e(puVar6 + 10,auStack_48,6);
    puVar7 = auStack_3a;
  }
  FUN_ram_4039c11e(puVar6 + 0x10,puVar7,6);
  uVar10 = param_3 & 0xff;
  if (bVar3) {
    bVar12 = (byte)param_3 & 0xf;
    puVar6[0x18] = bVar12;
    if (*(char *)((int)param_1 + uVar15 * 7 + 0x8e) != '\0') {
      puVar6[0x18] = bVar12 | 0x20;
    }
    puVar6[0x19] = 0;
    *puVar6 = 0x88;
    if ((**(uint **)(param_2 + 0x24) & 0x8000) != 0) {
      puVar6[0x18] = puVar6[0x18] | 0x80;
    }
    uVar13 = **(uint **)(param_2 + 0x24);
    if (((uVar15 != 0) && ((uVar13 & 0x2000002) == 0)) &&
       (((param_1[3] & 0x800U) != 0 && ((*(uint *)(iVar16 + 300) & 0x100000) != 0)))) {
      iVar17 = param_1[param_3 + 0x91];
      if (iVar17 != 0) {
        if ((*(ushort *)(iVar17 + 0x2c) & 4) != 0) {
          if ((*(byte *)(param_1 + 0x99) >> (param_3 & 0x1f) & 1) != 0) {
            puVar9 = *(uint **)(param_2 + 4);
            **(uint **)(param_2 + 0x24) = uVar13 | 0x40000;
            puVar9[1] = puVar9[1] - 8;
            *(short *)(param_2 + 0x14) = *(short *)(param_2 + 0x14) + 8;
            *puVar9 = ((*puVar9 >> 0xc & 0xfff) + 8 & 0xfff) << 0xc | *puVar9 & 0xff000fff;
            *(char *)(param_2 + 0x1b) = (char)*(undefined2 *)(iVar17 + 0x4a);
          }
          goto LAB_ram_4039b402;
        }
        if ((*(ushort *)(iVar17 + 0x2c) & 0x16) != 0) goto LAB_ram_4039b402;
      }
      iVar17 = FUN_ram_4207c254(param_1,uVar10);
      if ((iVar17 != 0) && (_DAT_ram_3fcc2ff8 != 0)) {
        FUN_ram_4207c272(param_1,uVar10);
      }
    }
  }
LAB_ram_4039b402:
  sVar1 = *(short *)((int)param_1 + param_3 * 2 + 0xae);
  *(short *)((int)param_1 + param_3 * 2 + 0xae) = sVar1 + 1;
  *(short *)(puVar6 + 0x16) = sVar1 << 4;
  puVar9 = *(uint **)(param_2 + 0x24);
  uVar13 = 0;
  if (pbVar5 != (byte *)0x0) {
    puVar6[1] = puVar6[1] | 0x40;
    iVar17 = _DAT_ram_3fcc4018;
    *puVar9 = *puVar9 | 1;
    bVar12 = *pbVar5;
    if (iVar16 == iVar17) {
      bVar12 = bVar12 | 0x40;
    }
    *(byte *)(puVar9 + 4) = bVar12;
    uVar13 = **(uint **)(pbVar5 + 0xa0) & 0xf;
  }
  puVar9[4] = uVar13 << 8 | puVar9[4] & 0xfffff0ff;
  (*(code *)&SUB_ram_40011fc8)(param_1,param_2,uVar10,8,0);
  uVar8 = 10;
  if (((uVar15 != 0) && (uVar8 = 0xb, uVar15 != 1)) && (uVar8 = 0xd, uVar15 != 3)) {
    uVar8 = 0xc;
  }
  (*(code *)&SUB_ram_40012000)(param_2,uVar8);
  if (iVar16 == _DAT_ram_3fcc4018) {
    *(uint *)(*(int *)(param_2 + 0x24) + 0x14) = *(uint *)(*(int *)(param_2 + 0x24) + 0x14) | 0x400;
  }
  return param_2;
}

