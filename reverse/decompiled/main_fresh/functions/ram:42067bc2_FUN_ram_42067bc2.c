
undefined4
FUN_ram_42067bc2(int param_1,uint param_2,uint param_3,undefined4 param_4,byte *param_5,
                byte *param_6)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  int iVar10;
  uint *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint *puVar20;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  byte local_50 [16];
  byte abStack_40 [12];
  
  if (param_2 < 2) {
    uVar7 = param_3 & 0xf;
    if (param_3 - 0x10 < 0xfffff1) {
      FUN_ram_42066f34(param_1 + 0x118,param_4,&local_70);
      iVar10 = (param_3 >> 4) - 1;
      pbVar17 = local_50;
      puVar16 = &local_60;
      iVar15 = iVar10;
      pbVar18 = param_5;
      pbVar19 = param_6;
      uVar3 = local_70;
      uVar4 = uStack_6c;
      uVar5 = uStack_68;
      uVar6 = uStack_64;
      do {
        local_70 = uVar3;
        uStack_6c = uVar4;
        uStack_68 = uVar5;
        uStack_64 = uVar6;
        if (((uVar7 != 0) && (param_2 != 1)) && (iVar15 == 0)) {
          uVar14 = 0x87 >> (((int)uVar6 >> 0x1f) * 8 + 8U & 0x1f);
          uStack_6c = (int)uVar14 >> 0x1f ^ (uVar4 << 1 | uVar3 >> 0x1f);
          uStack_5c = uVar4;
          local_70 = uVar14 ^ uVar3 << 1;
          local_60 = uVar3;
          uStack_68 = uVar4 >> 0x1f | uVar5 << 1;
          uStack_58 = uVar5;
          uStack_64 = uVar5 >> 0x1f | uVar6 << 1;
          uStack_54 = uVar6;
        }
        uVar6 = uStack_64;
        uVar5 = uStack_68;
        uVar4 = uStack_6c;
        uVar3 = local_70;
        puVar20 = &local_70;
        pbVar9 = pbVar18;
        puVar11 = puVar20;
        pbVar13 = pbVar17;
        do {
          bVar2 = *pbVar9;
          uVar14 = *puVar11;
          puVar11 = (uint *)((int)puVar11 + 1);
          pbVar9 = pbVar9 + 1;
          *pbVar13 = bVar2 ^ (byte)uVar14;
          pbVar13 = pbVar13 + 1;
        } while (puVar16 != puVar11);
        pbVar9 = pbVar19;
        if (param_2 == 0) {
          FUN_ram_420674ee();
          pbVar13 = pbVar17;
        }
        else {
          FUN_ram_42066f34(param_1,pbVar17,pbVar17);
          pbVar13 = pbVar17;
        }
        do {
          uVar14 = *puVar20;
          pbVar12 = pbVar13 + 1;
          puVar20 = (uint *)((int)puVar20 + 1);
          *pbVar9 = *pbVar13 ^ (byte)uVar14;
          pbVar9 = pbVar9 + 1;
          pbVar13 = pbVar12;
        } while (abStack_40 != pbVar12);
        uVar14 = 0x87 >> (((int)uVar6 >> 0x1f) * 8 + 8U & 0x1f);
        uStack_64 = uVar5 >> 0x1f | uVar6 << 1;
        uStack_68 = uVar4 >> 0x1f | uVar5 << 1;
        uStack_6c = (int)uVar14 >> 0x1f ^ (uVar4 << 1 | uVar3 >> 0x1f);
        local_70 = uVar14 ^ uVar3 << 1;
        pbVar19 = pbVar19 + 0x10;
        pbVar18 = pbVar18 + 0x10;
        bVar1 = iVar15 != 0;
        iVar15 = iVar15 + -1;
        uVar3 = local_70;
        uVar4 = uStack_6c;
        uVar5 = uStack_68;
        uVar6 = uStack_64;
      } while (bVar1);
      if (uVar7 != 0) {
        if (param_2 != 0) {
          puVar16 = &local_70;
        }
        iVar10 = iVar10 * 0x10;
        pbVar19 = param_6 + iVar10;
        param_5 = param_5 + iVar10;
        FUN_ram_4039c1f2(param_6 + iVar10 + 0x10,pbVar19,uVar7);
        pbVar18 = param_5 + 0x10;
        do {
          pbVar9 = pbVar18 + 1;
          pbVar18[(int)&local_60 - (int)param_5] =
               *(byte *)((int)puVar16 + (int)(pbVar18 + (-0x10 - (int)param_5))) ^ *pbVar18;
          pbVar18 = pbVar9;
        } while (param_5 + uVar7 + 0x10 != pbVar9);
        pbVar18 = pbVar19 + uVar7;
        do {
          iVar15 = (int)pbVar18 - (int)pbVar19;
          bVar2 = *pbVar18;
          pbVar18 = pbVar18 + 1;
          pbVar17[iVar15] = *(byte *)((int)puVar16 + iVar15) ^ bVar2;
        } while (pbVar19 + 0x10 != pbVar18);
        if (param_2 == 0) {
          FUN_ram_420674ee(param_1,pbVar17,pbVar17);
        }
        else {
          FUN_ram_42066f34();
        }
        iVar15 = (int)pbVar19 - (int)pbVar17;
        do {
          bVar2 = *pbVar17;
          pbVar18 = pbVar17 + iVar15;
          pbVar17 = pbVar17 + 1;
          *pbVar18 = bVar2 ^ (byte)*puVar16;
          puVar16 = (uint *)((int)puVar16 + 1);
        } while (abStack_40 != pbVar17);
      }
      uVar8 = 0;
    }
    else {
      uVar8 = 0xffffffde;
    }
  }
  else {
    uVar8 = 0xffffffdf;
  }
  return uVar8;
}

