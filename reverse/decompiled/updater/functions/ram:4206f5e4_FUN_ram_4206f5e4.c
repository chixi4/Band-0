
int FUN_ram_4206f5e4(int *param_1)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  char *pcVar8;
  code *pcVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 uStack_144;
  char acStack_140 [32];
  undefined1 auStack_120 [236];
  
  pcVar2 = (char *)param_1[0xe];
  if (*(char *)(*(int *)(pcVar2 + 0xc) + 9) == '\n') {
    pcVar7 = (code *)0x4205eb00;
    pcVar9 = (code *)0x4205ed38;
    uVar10 = 0x4205ec72;
  }
  else {
    pcVar7 = FUN_ram_4205eab0;
    pcVar9 = FUN_ram_4205ed42;
    uVar10 = 0x4205ec54;
  }
  *(undefined4 *)(pcVar2 + 0x18) = uVar10;
  uStack_144 = 0x40;
  *(code **)(pcVar2 + 0x1c) = pcVar7;
  *(code **)(pcVar2 + 0x14) = pcVar9;
  iVar14 = param_1[0xd];
  if (*pcVar2 == '\0') {
    if (pcVar2[8] == '\x01') {
      (*pcVar9)(param_1,acStack_140,&uStack_144);
      pcVar8 = acStack_140;
      uVar10 = 0x3c074554;
    }
    else {
      pcVar8 = pcVar2 + 0x1b0;
      uVar10 = 0x3c074544;
    }
    iVar14 = (**(code **)(pcVar2 + 0x1c))
                       (pcVar2 + 0x1f0,*(undefined4 *)(pcVar2 + 0x220),uVar10,pcVar8,uStack_144,
                        iVar14 + 0x30,0x30,*(code **)(pcVar2 + 0x1c));
    if (iVar14 != 0) {
      return iVar14;
    }
    FUN_ram_420293a6(pcVar2 + 0x1f0,0x30);
  }
  iVar14 = param_1[0xe];
  FUN_ram_40399daa(acStack_140,iVar14 + 0x1b0,0x40);
  FUN_ram_40399daa(iVar14 + 0x1b0,auStack_120,0x20);
  FUN_ram_40399daa(param_1[0xe] + 0x1d0,acStack_140,0x20);
  FUN_ram_420293a6(acStack_140,0x40);
  iVar11 = param_1[0xd];
  iVar18 = param_1[0xe];
  puVar3 = (uint *)param_1[0x12];
  uVar10 = *(undefined4 *)(iVar11 + 8);
  uVar15 = *(uint *)(iVar11 + 0x68);
  uVar20 = param_1[2];
  pcVar7 = *(code **)(iVar18 + 0x1c);
  cVar1 = *(char *)(*param_1 + 8);
  puVar3[0x13] = uVar15;
  puVar3[0x14] = uVar20;
  iVar14 = FUN_ram_4206d416(uVar10);
  if (iVar14 == 0) {
    return -0x7100;
  }
  iVar4 = FUN_ram_4206eed4(uVar15,iVar14);
  if (iVar4 == 3) {
    puVar3[4] = (uint)((*(byte *)(iVar14 + 0xb) & 2) == 0) * 8 + 8;
  }
  iVar5 = FUN_ram_420272ca(*(undefined1 *)(iVar14 + 8));
  if (iVar5 == 0) {
    return -0x7100;
  }
  iVar14 = FUN_ram_42028dc8(*(undefined1 *)(iVar14 + 9));
  if (iVar14 == 0) {
    return -0x7100;
  }
  iVar6 = (*pcVar7)(iVar11 + 0x30,0x30,0x3c07456c,iVar18 + 0x1b0,0x40,acStack_140,0x100);
  if (iVar6 != 0) {
    return iVar6;
  }
  uVar15 = *(uint *)(iVar5 + 4);
  if (iVar4 == 3) {
    puVar3[3] = 0;
    puVar3[1] = 0xc;
    uVar20 = 4;
    if ((uVar15 >> 0xc & 0xf) == 0xb) {
      uVar20 = 0xc;
    }
    puVar3[2] = uVar20;
    uVar16 = 0;
    uVar12 = (puVar3[4] + 0xc) - uVar20;
    goto LAB_ram_4206f816;
  }
  iVar6 = FUN_ram_42028f3c(puVar3 + 0xd,iVar14,1);
  if ((iVar6 != 0) || (iVar6 = FUN_ram_42028f3c(puVar3 + 0x10,iVar14,1), iVar6 != 0))
  goto LAB_ram_4206f978;
  uVar16 = FUN_ram_42029140(iVar14);
  uVar12 = *(uint *)(iVar5 + 4);
  puVar3[3] = uVar16;
  uVar13 = uVar12 >> 3 & 0x1c;
  puVar3[1] = uVar13;
  uVar12 = uVar16;
  if (iVar4 == 0) {
LAB_ram_4206f816:
    *puVar3 = uVar12;
    if (cVar1 == '\0') {
      uVar20 = puVar3[2];
      iVar14 = (uVar15 >> 8 & 0xf) * 8;
      pcVar2 = acStack_140 + iVar14 + uVar16 * 2;
      if (uVar20 == 0) {
        uVar20 = puVar3[1];
      }
      FUN_ram_40399daa(puVar3 + 5,pcVar2 + iVar14);
      FUN_ram_40399daa(puVar3 + 9,pcVar2 + iVar14 + uVar20);
      if ((code *)param_1[0x33] != (code *)0x0) {
        iVar14 = 1;
        if (pcVar7 != (code *)0x4205eb00) {
          iVar14 = (uint)(pcVar7 == FUN_ram_4205eab0) << 1;
        }
        (*(code *)param_1[0x33])
                  (param_1[0x34],0,iVar11 + 0x30,0x30,iVar18 + 0x1d0,iVar18 + 0x1b0,iVar14);
      }
      puVar19 = puVar3 + 0x15;
      iVar6 = FUN_ram_42027380(puVar19,iVar5);
      if (iVar6 == 0) {
        puVar17 = puVar3 + 0x26;
        iVar6 = FUN_ram_42027380(puVar17,iVar5);
        if (((((iVar6 == 0) &&
              (iVar6 = FUN_ram_420273d8(puVar19,acStack_140 + uVar16 * 2,
                                        *(uint *)(iVar5 + 4) >> 2 & 0x3c0,1), iVar6 == 0)) &&
             (iVar14 = FUN_ram_420273d8(puVar17,pcVar2,*(uint *)(iVar5 + 4) >> 2 & 0x3c0,0),
             iVar6 = iVar14, iVar14 == 0)) &&
            (((*(uint *)(iVar5 + 4) >> 0xc & 0xf) != 2 ||
             ((iVar6 = FUN_ram_420278ce(puVar19,4), iVar6 == 0 &&
              (iVar6 = FUN_ram_420278ce(puVar17,4), iVar6 == 0)))))) &&
           ((iVar6 = iVar14, uVar16 != 0 &&
            (iVar6 = FUN_ram_4202915c(puVar3 + 0xd,acStack_140,uVar16), iVar6 == 0)))) {
          iVar6 = FUN_ram_4202915c(puVar3 + 0x10,acStack_140 + uVar16,uVar16);
        }
      }
      goto LAB_ram_4206f978;
    }
  }
  else {
    uVar12 = (uVar15 & 0x1f) + uVar16;
    if (iVar4 != 2) {
      uVar12 = uVar12 - uVar16 % (uVar15 & 0x1f);
    }
    *puVar3 = uVar12;
    if (uVar20 == 0x303) {
      uVar12 = uVar13 + uVar12;
      goto LAB_ram_4206f816;
    }
  }
  iVar6 = -0x6c00;
LAB_ram_4206f978:
  FUN_ram_420293a6(acStack_140,0x100);
  if (iVar6 == 0) {
    FUN_ram_420293a6(param_1[0xe] + 0x1b0,0x40);
    return 0;
  }
  return iVar6;
}

