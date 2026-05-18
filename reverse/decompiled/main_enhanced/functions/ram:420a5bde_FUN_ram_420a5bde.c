
int FUN_ram_420a5bde(int *param_1)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  code *pcVar16;
  uint *puVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 uStack_144;
  char acStack_140 [32];
  undefined1 auStack_120 [236];
  
  pcVar2 = (char *)param_1[0xe];
  *(code **)(pcVar2 + 0x1c) = FUN_ram_420953c4;
  pcVar2[0x14] = 'N';
  pcVar2[0x15] = 'U';
  pcVar2[0x16] = '\t';
  pcVar2[0x17] = 'B';
  pcVar2[0x18] = '\x12';
  pcVar2[0x19] = 'S';
  pcVar2[0x1a] = '\t';
  pcVar2[0x1b] = 'B';
  uStack_144 = 0x40;
  iVar13 = param_1[0xd];
  if (*pcVar2 == '\0') {
    if (pcVar2[8] == '\x01') {
      FUN_ram_420a554e(param_1,acStack_140,&uStack_144);
      pcVar9 = acStack_140;
      pcVar8 = ".";
    }
    else {
      pcVar9 = pcVar2 + 0x18c;
      pcVar8 = "en emotions rise.";
    }
    iVar13 = (**(code **)(pcVar2 + 0x1c))
                       (pcVar2 + 0x1cc,*(undefined4 *)(pcVar2 + 0x1ec),pcVar8,pcVar9,uStack_144,
                        iVar13 + 0x30,0x30,*(code **)(pcVar2 + 0x1c));
    if (iVar13 != 0) {
      return iVar13;
    }
    FUN_ram_4206d7da(pcVar2 + 0x1cc,0x20);
  }
  iVar13 = param_1[0xe];
  FUN_ram_4039c11e(acStack_140,iVar13 + 0x18c,0x40);
  FUN_ram_4039c11e(iVar13 + 0x18c,auStack_120,0x20);
  FUN_ram_4039c11e(param_1[0xe] + 0x1ac,acStack_140,0x20);
  FUN_ram_4206d7da(acStack_140,0x40);
  iVar12 = param_1[0xd];
  iVar18 = param_1[0xe];
  puVar3 = (uint *)param_1[0x12];
  uVar4 = *(undefined4 *)(iVar12 + 8);
  uVar14 = *(uint *)(iVar12 + 0x70);
  uVar20 = param_1[2];
  pcVar16 = *(code **)(iVar18 + 0x1c);
  cVar1 = *(char *)(*param_1 + 8);
  puVar3[0x13] = uVar14;
  puVar3[0x14] = uVar20;
  iVar13 = FUN_ram_420a3df0(uVar4);
  if (iVar13 == 0) {
    return -0x7100;
  }
  iVar5 = FUN_ram_420a56bc(uVar14,iVar13);
  if (iVar5 == 3) {
    puVar3[4] = (uint)((*(byte *)(iVar13 + 0xb) & 2) == 0) * 8 + 8;
  }
  iVar6 = FUN_ram_4206a944(*(undefined1 *)(iVar13 + 8));
  if (iVar6 == 0) {
    return -0x7100;
  }
  iVar13 = FUN_ram_4206c444(*(undefined1 *)(iVar13 + 9));
  if (iVar13 == 0) {
    return -0x7100;
  }
  iVar7 = (*pcVar16)(iVar12 + 0x30,0x30,&DAT_ram_3c0c5414,iVar18 + 0x18c,0x40,acStack_140,0x100);
  if (iVar7 != 0) {
    return iVar7;
  }
  uVar14 = *(uint *)(iVar6 + 4);
  if (iVar5 == 3) {
    puVar3[3] = 0;
    puVar3[1] = 0xc;
    uVar20 = 4;
    if ((uVar14 >> 0xc & 0xf) == 0xb) {
      uVar20 = 0xc;
    }
    puVar3[2] = uVar20;
    uVar15 = 0;
    uVar10 = (puVar3[4] + 0xc) - uVar20;
    goto LAB_ram_420a5de8;
  }
  iVar7 = FUN_ram_4206c572(puVar3 + 0xd,iVar13,1);
  if ((iVar7 != 0) || (iVar7 = FUN_ram_4206c572(puVar3 + 0x10,iVar13,1), iVar7 != 0))
  goto LAB_ram_420a5f36;
  uVar15 = FUN_ram_4206c71c(iVar13);
  uVar10 = *(uint *)(iVar6 + 4);
  puVar3[3] = uVar15;
  uVar11 = uVar10 >> 3 & 0x1c;
  puVar3[1] = uVar11;
  uVar10 = uVar15;
  if (iVar5 == 0) {
LAB_ram_420a5de8:
    *puVar3 = uVar10;
    if (cVar1 == '\0') {
      uVar20 = puVar3[2];
      iVar13 = (uVar14 >> 8 & 0xf) * 8;
      pcVar2 = acStack_140 + iVar13 + uVar15 * 2;
      if (uVar20 == 0) {
        uVar20 = puVar3[1];
      }
      FUN_ram_4039c11e(puVar3 + 5,pcVar2 + iVar13);
      FUN_ram_4039c11e(puVar3 + 9,pcVar2 + iVar13 + uVar20);
      if ((code *)param_1[0x33] != (code *)0x0) {
        (*(code *)param_1[0x33])
                  (param_1[0x34],0,iVar12 + 0x30,0x30,iVar18 + 0x1ac,iVar18 + 0x18c,
                   (uint)(pcVar16 == FUN_ram_420953c4) << 1);
      }
      puVar19 = puVar3 + 0x15;
      iVar7 = FUN_ram_4206a9fa(puVar19,iVar6);
      if (iVar7 == 0) {
        puVar17 = puVar3 + 0x26;
        iVar7 = FUN_ram_4206a9fa(puVar17,iVar6);
        if (((((iVar7 == 0) &&
              (iVar7 = FUN_ram_4206aa52(puVar19,acStack_140 + uVar15 * 2,
                                        *(uint *)(iVar6 + 4) >> 2 & 0x3c0,1), iVar7 == 0)) &&
             (iVar13 = FUN_ram_4206aa52(puVar17,pcVar2,*(uint *)(iVar6 + 4) >> 2 & 0x3c0,0),
             iVar7 = iVar13, iVar13 == 0)) &&
            (((*(uint *)(iVar6 + 4) >> 0xc & 0xf) != 2 ||
             ((iVar7 = FUN_ram_4206af48(puVar19,4), iVar7 == 0 &&
              (iVar7 = FUN_ram_4206af48(puVar17,4), iVar7 == 0)))))) &&
           ((iVar7 = iVar13, uVar15 != 0 &&
            (iVar7 = FUN_ram_4206c738(puVar3 + 0xd,acStack_140,uVar15), iVar7 == 0)))) {
          iVar7 = FUN_ram_4206c738(puVar3 + 0x10,acStack_140 + uVar15,uVar15);
        }
      }
      goto LAB_ram_420a5f36;
    }
  }
  else {
    uVar10 = (uVar14 & 0x1f) + uVar15;
    if (iVar5 != 2) {
      uVar10 = uVar10 - uVar15 % (uVar14 & 0x1f);
    }
    *puVar3 = uVar10;
    if (uVar20 == 0x303) {
      uVar10 = uVar10 + uVar11;
      goto LAB_ram_420a5de8;
    }
  }
  iVar7 = -0x6c00;
LAB_ram_420a5f36:
  FUN_ram_4206d7da(acStack_140,0x100);
  if (iVar7 == 0) {
    FUN_ram_4206d7da(param_1[0xe] + 0x18c,0x40);
    return 0;
  }
  return iVar7;
}

