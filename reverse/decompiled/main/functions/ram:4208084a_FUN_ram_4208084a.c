
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4208084a(uint *param_1)

{
  undefined2 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  char cVar13;
  undefined1 uVar14;
  short sVar15;
  uint *puVar16;
  undefined *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined1 uStack_55;
  undefined4 uStack_54;
  undefined1 auStack_50 [36];
  
  if (param_1 == (uint *)0x0) {
    return 0x102;
  }
  if (1 < **(byte **)(gp + -0xb4) - 2) {
    return 0x3005;
  }
  iVar8 = FUN_ram_4207e5a8();
  cVar6 = FUN_ram_42098a5e(param_1[0x1e]);
  if (param_1[0x19] - 0xb < 2) {
    FUN_ram_4207a038(1,2,2,&DAT_ram_3c101bec);
    param_1[0x19] = 6;
  }
  iVar22 = iVar8 + 0x36c;
  iVar9 = FUN_ram_4039c0e0(iVar22,param_1,0x20);
  uVar20 = param_1[0x19];
  if ((iVar9 == 0) && (iVar9 = FUN_ram_4039c0e0(iVar8 + 0x484,param_1,0x20), iVar9 == 0)) {
    iVar9 = FUN_ram_4039c0e0(iVar8 + 0x392,param_1 + 8,0x40);
    if ((iVar9 != 0) || (iVar9 = FUN_ram_4039c0e0(iVar8 + 0x4a4,param_1 + 8,0x40), iVar9 != 0))
    goto LAB_ram_42080a20;
    if (*(byte *)(iVar8 + 0x3f4) == uVar20) {
      if ((((((*(char *)(iVar8 + 0x3f3) == *(char *)((int)param_1 + 0x61)) &&
             (*(char *)(iVar8 + 0x3f6) == *(char *)((int)param_1 + 0x69))) &&
            (*(char *)(iVar8 + 0x3f5) == (char)param_1[0x1a])) &&
           ((*(char *)(iVar8 + 0x3fe) == *(char *)((int)param_1 + 0x76) &&
            (*(short *)(iVar8 + 0x3f8) == *(short *)((int)param_1 + 0x6a))))) &&
          ((*(char *)(iVar8 + 0x47c) == cVar6 &&
           ((*(char *)(iVar8 + 0x50c) == (char)param_1[0x1f] &&
            (*(char *)(iVar8 + 0x401) == *(char *)((int)param_1 + 0x7d))))))) &&
         (*(short *)(iVar8 + 0x402) == *(short *)((int)param_1 + 0x82))) {
        if (1 < uVar20) {
          iVar9 = FUN_ram_4207fde2(iVar8 + 0x4e4);
          bVar4 = false;
          bVar2 = false;
          if (iVar9 == 0) goto LAB_ram_42080930;
        }
        uStack_55 = 1;
        uStack_54 = (*(code *)&SUB_ram_40010538)(param_1,0x20);
        FUN_ram_4039c11e(auStack_50,param_1,0x20);
        iVar9 = FUN_ram_4207e7c6(0x17,&uStack_54);
        if ((iVar9 == 0) && (iVar9 = FUN_ram_4207e7c6(0x22,&uStack_55), iVar9 == 0)) {
          return 0;
        }
      }
LAB_ram_42080a0a:
      bVar4 = true;
      bVar2 = false;
    }
    else {
      if (*(byte *)(iVar8 + 0x3f4) != 0) goto LAB_ram_42080a0a;
      if (uVar20 - 2 < 3) goto LAB_ram_42080a20;
      bVar2 = uVar20 - 6 < 2;
      bVar4 = true;
    }
  }
  else {
LAB_ram_42080a20:
    bVar4 = true;
    bVar2 = true;
  }
LAB_ram_42080930:
  cVar13 = DAT_ram_3fcc41d5;
  uVar20 = param_1[0x19];
  if (uVar20 == 6) {
    if ((_DAT_ram_3fcc3018 & 1) == 0) {
      FUN_ram_4207a038(1,3,1,&DAT_ram_3c0fea0c);
      return 0x102;
    }
  }
  else if ((7 < uVar20) || ((uVar20 & 0xfffffffb) == 1)) {
    FUN_ram_4207a038(1,3,1,&DAT_ram_3c0fea4c);
    return 0x102;
  }
  *(char *)(iVar8 + 0x3f4) = (char)uVar20;
  iVar9 = FUN_ram_4207e5e6(0x1b,uVar20,cVar13 == '\0');
  cVar13 = DAT_ram_3fcc41d5;
  if (iVar9 != 0) {
    return iVar9;
  }
  if (1 < param_1[0x19] - 6) {
    cVar6 = '\x04';
  }
  *(char *)(iVar8 + 0x47c) = cVar6;
  iVar9 = FUN_ram_4207e5e6(0x38,cVar6,cVar13 == '\0');
  if (iVar9 != 0) {
    return iVar9;
  }
  if (param_1[0x19] < 2) {
    bVar3 = false;
  }
  else {
    iVar9 = (*(code *)&SUB_ram_40010538)(param_1 + 8,0x40);
    if (iVar9 < 8) {
      puVar17 = &DAT_ram_3c101c4c;
LAB_ram_42080ac0:
      FUN_ram_4207a038(1,2,2,puVar17);
      return 0x300b;
    }
    bVar3 = false;
    if (0x3f < iVar9) {
      iVar9 = FUN_ram_4206071e(param_1 + 8,iVar8 + 0x4e4,0x20);
      bVar3 = true;
      if (iVar9 == -1) {
        puVar17 = &DAT_ram_3c101c64;
        goto LAB_ram_42080ac0;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x61) == '\0') {
    uVar7 = FUN_ram_4208b990(1);
    uVar14 = 0;
  }
  else {
    iVar9 = FUN_ram_4208ba3e(*(char *)((int)param_1 + 0x61));
    if (iVar9 == 0) {
      iVar8 = *(int *)(gp + -0xb4);
      if ((_DAT_ram_3fcc4014 != 0) && (*(int *)(_DAT_ram_3fcc4014 + 0xe4) != 0)) {
        uVar14 = *(undefined1 *)(*(int *)(_DAT_ram_3fcc4014 + 0xe4) + 0xab);
        uVar11 = FUN_ram_42079406(uVar14);
        uVar10 = FUN_ram_4208bdd2();
        uVar7 = *(undefined1 *)((int)param_1 + 0x61);
        uVar11 = FUN_ram_4208bdd2(uVar11);
        FUN_ram_4207a038(1,3,1,&DAT_ram_3c0fea78,uVar14,uVar10,uVar7,uVar11);
        return 0x102;
      }
      iVar9 = FUN_ram_42079406(*(undefined1 *)((int)param_1 + 0x61));
      if (iVar9 != 1) {
        return 0x102;
      }
      uVar14 = *(undefined1 *)((int)param_1 + 0x61);
      uVar11 = FUN_ram_4208b990();
      uVar10 = FUN_ram_4208b944(1);
      FUN_ram_4207a038(1,3,1,&DAT_ram_3c0feae0,uVar14,uVar11,uVar10,*(undefined1 *)(iVar8 + 0x404),
                       *(undefined1 *)(iVar8 + 0x405),*(undefined1 *)(iVar8 + 0x406));
      return 0x102;
    }
    uVar7 = *(undefined1 *)((int)param_1 + 0x61);
    uVar14 = 1;
  }
  cVar6 = DAT_ram_3fcc41d5;
  *(undefined1 *)(iVar8 + 0x3f3) = uVar7;
  *(undefined1 *)(iVar8 + 0x504) = uVar14;
  iVar9 = FUN_ram_4207e5e6(0x43,uVar14,cVar6 == '\0');
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_ram_4207e5e6(0x1a,*(undefined1 *)(iVar8 + 0x3f3),DAT_ram_3fcc41d5 == '\0');
  if (iVar9 != 0) {
    return iVar9;
  }
  FUN_ram_4207e772();
  if (_DAT_ram_3fcc4018 != 0) {
    if (*(code **)(_DAT_ram_3fcdfb24 + 0x284) == (code *)0x0) {
      return 0x102;
    }
    (**(code **)(_DAT_ram_3fcdfb24 + 0x284))();
  }
  pcVar5 = _DAT_ram_3fcc427c;
  if (!bVar4) {
    if (_DAT_ram_3fcc427c != (code *)0x0) {
      iVar21 = iVar8 + 0x484;
      iVar9 = FUN_ram_4039c0e0(iVar22,iVar21,0x20);
      iVar19 = iVar8 + 0x4a4;
      if ((iVar9 != 0) || (iVar9 = FUN_ram_4039c0e0(iVar8 + 0x392,iVar19,0x40), iVar9 != 0)) {
        *(undefined4 *)(iVar8 + 0x480) = *(undefined4 *)(iVar8 + 0x368);
        FUN_ram_4039c11e(iVar21,iVar22,0x20);
        FUN_ram_4039c11e(iVar19,iVar8 + 0x392,0x40);
      }
      (*pcVar5)(iVar19,iVar21,*(undefined4 *)(iVar8 + 0x480),0x1000,iVar8 + 0x4e4,0x20);
      iVar8 = FUN_ram_4207e5e6(0x39,iVar8 + 0x480,DAT_ram_3fcc41d5 == '\0');
      if (iVar8 != 0) {
        return iVar8;
      }
      iVar8 = FUN_ram_4207e5ae();
      if (iVar8 != 0) {
        return iVar8;
      }
    }
    if (_DAT_ram_3fcc4018 == 0) {
      return 0;
    }
    if (*(code **)(_DAT_ram_3fcdfb24 + 0x280) == (code *)0x0) {
      return 0x102;
    }
    (**(code **)(_DAT_ram_3fcdfb24 + 0x280))();
    return 0;
  }
  if ((*param_1 & 0xffff) == 0xffff) {
    FUN_ram_4207e956();
    puVar16 = (uint *)(*(int *)(gp + -0xb4) + 0x36c);
  }
  else {
    uVar20 = (uint)(byte)param_1[0x18];
    if (uVar20 == 0) {
      uVar20 = (*(code *)&SUB_ram_40010538)(param_1,0x20);
      uVar20 = uVar20 & 0xff;
    }
    if (0x20 < uVar20) {
      uVar20 = 0x20;
    }
    *(uint *)(iVar8 + 0x368) = uVar20;
    puVar16 = param_1;
  }
  FUN_ram_4039c11e(iVar22,puVar16,0x20);
  iVar9 = FUN_ram_4207e5e6(0x17,iVar8 + 0x368,DAT_ram_3fcc41d5 == '\0');
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar19 = iVar8 + 0x392;
  FUN_ram_4039c11e(iVar19,param_1 + 8,0x40);
  cVar6 = DAT_ram_3fcc41d5;
  *(undefined1 *)(iVar8 + 0x3d2) = 0;
  iVar9 = FUN_ram_4207e5e6(0x18,iVar19,cVar6 == '\0');
  cVar6 = DAT_ram_3fcc41d5;
  if (iVar9 != 0) {
    return iVar9;
  }
  bVar12 = (byte)param_1[0x1a];
  if (1 < bVar12) {
    bVar12 = 0;
  }
  *(byte *)(iVar8 + 0x3f5) = bVar12;
  iVar9 = FUN_ram_4207e5e6(0x1c,bVar12,cVar6 == '\0');
  if (iVar9 != 0) {
    return iVar9;
  }
  bVar12 = *(byte *)((int)param_1 + 0x69);
  uVar20 = FUN_ram_42080830();
  if ((int)uVar20 < (int)(uint)bVar12) {
    *(char *)(iVar8 + 0x3f6) = (char)uVar20;
    FUN_ram_4207a038(1,3,2,&DAT_ram_3c101c7c,uVar20 & 0xff);
  }
  else {
    *(byte *)(iVar8 + 0x3f6) = bVar12;
  }
  iVar9 = FUN_ram_4207e5e6(0x1d,*(undefined1 *)(iVar8 + 0x3f6),DAT_ram_3fcc41d5 == '\0');
  cVar6 = DAT_ram_3fcc41d5;
  if (iVar9 != 0) {
    return iVar9;
  }
  sVar15 = *(short *)((int)param_1 + 0x6a);
  if (0xe9fc < (ushort)(sVar15 - 100U)) {
    sVar15 = 100;
  }
  *(short *)(iVar8 + 0x3f8) = sVar15;
  iVar9 = FUN_ram_4207e5e6(0x1e,sVar15,cVar6 == '\0');
  cVar6 = DAT_ram_3fcc41d5;
  if (iVar9 != 0) {
    return iVar9;
  }
  *(undefined1 *)(iVar8 + 0x401) = 0;
  iVar9 = FUN_ram_4207e5e6(0x4b,0,cVar6 == '\0');
  cVar6 = DAT_ram_3fcc41d5;
  if (iVar9 != 0) {
    return iVar9;
  }
  uVar1 = *(undefined2 *)((int)param_1 + 0x82);
  *(undefined2 *)(iVar8 + 0x402) = uVar1;
  iVar9 = FUN_ram_4207e5e6(0x4e,uVar1,cVar6 == '\0');
  cVar6 = DAT_ram_3fcc41d5;
  if (iVar9 != 0) {
    return iVar9;
  }
  uVar18 = param_1[0x19];
  uVar20 = 0;
  if (((1 < uVar18) && (uVar20 = 4, 1 < uVar18 - 6)) && (uVar18 != 3)) {
    uVar20 = 5;
    if (param_1[0x1c] - 3 < 3) {
      uVar20 = param_1[0x1c] & 0xff;
    }
  }
  *(char *)(iVar8 + 0x3ff) = (char)uVar20;
  iVar9 = FUN_ram_4207e5e6(0x24,uVar20,cVar6 == '\0');
  cVar6 = DAT_ram_3fcc41d5;
  if (iVar9 != 0) {
    return iVar9;
  }
  uVar20 = param_1[0x1f];
  *(char *)(iVar8 + 0x50c) = (char)uVar20;
  iVar9 = FUN_ram_4207e5e6(0x4a,(char)uVar20,cVar6 == '\0');
  cVar6 = DAT_ram_3fcc41d5;
  if (iVar9 != 0) {
    return iVar9;
  }
  uVar20 = param_1[0x1d];
  *(char *)(iVar8 + 0x400) = (char)uVar20;
  iVar9 = FUN_ram_4207e5e6(0x27,(char)uVar20,cVar6 == '\0');
  if (iVar9 != 0) {
    return iVar9;
  }
  FUN_ram_42094d76((*(ushort *)(iVar8 + 0x3f8) / 100) * 0x19000);
  if (1 < param_1[0x19]) {
    iVar9 = FUN_ram_4207fde2(iVar8 + 0x4e4);
    if (iVar9 == 0) {
      bVar2 = true;
    }
    uVar20 = (*(code *)&SUB_ram_40010538)(iVar19,0x40);
    pcVar5 = _DAT_ram_3fcc427c;
    if (((uVar20 < 0x40) && (bVar2)) && (_DAT_ram_3fcc427c != (code *)0x0)) {
      FUN_ram_4039c11e(iVar8 + 0x484,iVar22,0x20);
      uVar11 = FUN_ram_4039c11e(iVar8 + 0x4a4,iVar19,0x40);
      *(undefined4 *)(iVar8 + 0x480) = *(undefined4 *)(iVar8 + 0x368);
      (*pcVar5)(uVar11,iVar8 + 0x484,*(undefined4 *)(iVar8 + 0x368),0x1000,iVar8 + 0x4e4,0x20);
    }
  }
  uVar20 = param_1[0x19];
  if (uVar20 < 3) {
    if (uVar20 == 0) {
      *(undefined1 *)(iVar8 + 0x3fd) = 0;
      *(undefined1 *)(iVar8 + 0x3fe) = 0;
    }
  }
  else {
    *(undefined1 *)(iVar8 + 0x3fd) = 1;
    cVar6 = *(char *)((int)param_1 + 0x76);
    *(char *)(iVar8 + 0x3fe) = cVar6;
    if (uVar20 == 4) {
      if (cVar6 == '\0') goto LAB_ram_42080f66;
      *(undefined1 *)(iVar8 + 0x3fe) = 0;
      puVar17 = &DAT_ram_3c101cc4;
    }
    else {
      if ((uVar20 != 6) || (cVar6 != '\0')) goto LAB_ram_42080f66;
      *(undefined1 *)(iVar8 + 0x3fe) = 1;
      puVar17 = &DAT_ram_3c101d18;
    }
    FUN_ram_4207a038(1,1,2,puVar17);
  }
LAB_ram_42080f66:
  iVar9 = FUN_ram_4207e5e6(0x22,*(undefined1 *)(iVar8 + 0x3fd),DAT_ram_3fcc41d5 == '\0');
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_ram_4207e5e6(0x23,*(undefined1 *)(iVar8 + 0x3fe),DAT_ram_3fcc41d5 == '\0');
  if (iVar9 != 0) {
    return iVar9;
  }
  if ((bVar2) || (bVar3)) {
    FUN_ram_4039c11e(iVar8 + 0x484,iVar22,0x20);
    FUN_ram_4039c11e(iVar8 + 0x4a4,iVar19,0x40);
    cVar6 = DAT_ram_3fcc41d5;
    *(undefined4 *)(iVar8 + 0x480) = *(undefined4 *)(iVar8 + 0x368);
    iVar9 = FUN_ram_4207e5e6(0x39,iVar8 + 0x480,cVar6 == '\0');
    if (iVar9 != 0) {
      return iVar9;
    }
  }
  cVar13 = DAT_ram_3fcc41d5;
  DAT_ram_3fcc41d4 = 1;
  cVar6 = (char)param_1[0x1b];
  if (cVar6 == '\0') {
    cVar6 = '\x03';
  }
  *(char *)(iVar8 + 0x50a) = cVar6;
  iVar9 = FUN_ram_4207e5e6(0x48,cVar6,cVar13 == '\0');
  cVar6 = DAT_ram_3fcc41d5;
  if (iVar9 == 0) {
    cVar13 = *(char *)((int)param_1 + 0x6d);
    if (cVar13 == '\0') {
      cVar13 = '\x01';
    }
    *(char *)(iVar8 + 0x50b) = cVar13;
    iVar9 = FUN_ram_4207e5e6(0x49,cVar13,cVar6 == '\0');
    cVar6 = DAT_ram_3fcc41d5;
    if (iVar9 != 0) {
      return iVar9;
    }
    uVar1 = *(undefined2 *)((int)param_1 + 0x7e);
    *(undefined2 *)(iVar8 + 0x50e) = uVar1;
    iVar9 = FUN_ram_4207e5e6(0x4c,uVar1,cVar6 == '\0');
    cVar6 = DAT_ram_3fcc41d5;
    if (iVar9 != 0) {
      return iVar9;
    }
    uVar14 = 0;
    if (*(short *)((int)param_1 + 0x7e) != 0) {
      uVar14 = (undefined1)param_1[0x20];
    }
    *(undefined1 *)(iVar8 + 0x510) = uVar14;
    iVar8 = FUN_ram_4207e5e6(0x4d,uVar14,cVar6 == '\0');
    if (iVar8 == 0) {
      iVar8 = FUN_ram_4207e5ae();
      if (iVar8 != 0) {
        return iVar8;
      }
      if (_DAT_ram_3fcc4018 != 0) {
        if (*(code **)(_DAT_ram_3fcdfb24 + 0x280) == (code *)0x0) {
          return 0x102;
        }
                    /* WARNING: Could not recover jumptable at 0x4208107a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar8 = (**(code **)(_DAT_ram_3fcdfb24 + 0x280))();
        return iVar8;
      }
      return 0;
    }
    return iVar8;
  }
  return iVar9;
}

