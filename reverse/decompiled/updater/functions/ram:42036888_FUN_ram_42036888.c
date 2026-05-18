
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42036888(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  char *pcVar7;
  int iVar8;
  undefined1 uVar9;
  int *piVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  char cVar13;
  bool bVar14;
  int iVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  char *pcVar19;
  undefined2 uStack_34;
  
  pcVar7 = (char *)FUN_ram_420339fc();
  iVar4 = _DAT_ram_3fcb4f88;
  iVar3 = _DAT_ram_3fcb4f84;
  uStack_34 = 0;
  if (((param_1 != (char *)0x0) && (param_1[1] != '\0')) &&
     (iVar8 = FUN_ram_420435d0(*param_1), iVar8 == 0)) {
    FUN_ram_42033fd8(1,4,2,0x3c07f914);
    param_1[1] = '\0';
  }
  cVar5 = DAT_ram_3fcb51d2;
  iVar8 = _DAT_ram_3fcb4f88;
  if ((_DAT_ram_3fcb4f88 != 0) && (_DAT_ram_3fcb4f84 != 0)) {
    pcVar19 = param_1;
    if (param_1 == (char *)0x0) {
      if ((*(int *)(_DAT_ram_3fcb4f84 + 0xe4) == 0) || (*(int *)(_DAT_ram_3fcb4f84 + 0x98) == 0))
      goto LAB_ram_420368f0;
      pcVar19 = (char *)(*(int *)(_DAT_ram_3fcb4f84 + 0xe4) + 0xab);
    }
    cVar13 = *pcVar19;
    if (0xd < (byte)(cVar13 - 1U)) {
      FUN_ram_42033fd8(1,0x800,1,0x3c07d1b4,0x3c072718,0x881);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    cVar1 = *(char *)(_DAT_ram_3fcb4f88 + 0x12a);
    cVar2 = *(char *)(_DAT_ram_3fcb4f88 + 299);
    if (cVar13 == cVar1) {
      bVar14 = false;
      if (cVar2 != '\0') goto LAB_ram_420369a2;
    }
    else {
      *(char *)(_DAT_ram_3fcb4f88 + 0x12a) = cVar13;
      bVar14 = true;
      if (cVar2 != '\0') {
LAB_ram_420369a2:
        cVar13 = pcVar19[1];
        if (cVar13 == '\0') {
          if (!bVar14) goto LAB_ram_420368f0;
          FUN_ram_420339cc(iVar8 + 0x12a);
        }
        else if (cVar2 == cVar13) {
          if (!bVar14) goto LAB_ram_420368f0;
        }
        else {
          *(char *)(iVar8 + 299) = cVar13;
        }
      }
      FUN_ram_42033fd8(1,0x4000,3,0x3c07e07c,cVar1,cVar2,*(undefined1 *)(iVar8 + 0x12a),
                       *(undefined1 *)(iVar8 + 299));
      if (*(char *)(iVar8 + 0x12a) == '\x0e') {
        *(undefined1 *)(iVar8 + 0x13c) = 1;
        *(undefined1 *)(iVar8 + 299) = 0;
        FUN_ram_42044966(iVar8,1,1);
        FUN_ram_4203614c(iVar8);
        FUN_ram_42039b9c(1,1,1);
      }
      if ((cVar1 == '\x0e') && (cVar5 != '\x01')) {
        *(char *)(iVar8 + 0x13c) = cVar5;
        cVar13 = (0xe < *(byte *)(iVar8 + 0x12a)) + '\x01';
        FUN_ram_42044966(iVar8,cVar13,cVar5);
        if (cVar5 == '\x03') {
          FUN_ram_42035a5e(iVar8);
        }
        if (pcVar19[1] != '\0') {
          *(char *)(iVar8 + 299) = pcVar19[1];
          FUN_ram_42039b9c(1,2,cVar13);
        }
      }
      piVar10 = (int *)(iVar8 + 0xf0);
      bVar16 = *(byte *)(*(int *)(gp + -0x2b8) + 0x3f6);
      for (iVar18 = 1; iVar18 <= (int)(uint)bVar16; iVar18 = iVar18 + 1) {
        iVar15 = *piVar10;
        if ((iVar15 != 0) && (*(short *)(iVar15 + 0x26) != 0)) {
          cVar5 = *(char *)(iVar8 + 0x12a);
          *(char *)(iVar15 + 0xab) = cVar5;
          if (*(char *)(iVar15 + 0xac) == '\x01') {
            bVar17 = cVar5 - 1;
          }
          else {
            if (*(char *)(iVar15 + 0xac) != '\x02') goto LAB_ram_42036a84;
            bVar17 = cVar5 - 5;
          }
          if (bVar17 < 9) {
            *(undefined1 *)(iVar15 + 0xac) = *(undefined1 *)(iVar8 + 299);
          }
        }
LAB_ram_42036a84:
        piVar10 = piVar10 + 1;
      }
    }
  }
LAB_ram_420368f0:
  if (iVar4 != 0) {
    piVar10 = (int *)(iVar4 + 0xf0);
    bVar16 = *(byte *)(*(int *)(gp + -0x2b8) + 0x3f6);
    for (iVar8 = 1; iVar8 <= (int)(uint)bVar16; iVar8 = iVar8 + 1) {
      iVar18 = *piVar10;
      if ((iVar18 != 0) && (*(short *)(iVar18 + 0x26) != 0)) {
        cVar5 = *(char *)(iVar18 + 0xac);
        if (cVar5 == '\x01') {
          bVar17 = *(char *)(iVar18 + 0xab) - 1;
LAB_ram_42036ada:
          if ((bVar17 < 9) && (*(char *)(iVar4 + 299) == '\0')) {
            *(undefined1 *)(iVar18 + 0xac) = 0;
            goto LAB_ram_42036aec;
          }
        }
        else if (cVar5 == '\x02') {
          bVar17 = *(char *)(iVar18 + 0xab) - 5;
          goto LAB_ram_42036ada;
        }
        if (((*(ushort *)(iVar18 + 0x15c) & 2) != 0) && (cVar5 == '\0')) {
          cVar5 = *(char *)(iVar4 + 299);
          if (cVar5 == '\x01') {
            bVar17 = *(char *)(iVar4 + 0x12a) - 1;
          }
          else {
            if (cVar5 != '\x02') goto LAB_ram_42036aec;
            bVar17 = *(char *)(iVar4 + 0x12a) - 5;
          }
          if (bVar17 < 9) {
            *(char *)(iVar18 + 0xac) = cVar5;
          }
        }
      }
LAB_ram_42036aec:
      piVar10 = piVar10 + 1;
    }
  }
  if (iVar4 == 0) {
    if (iVar3 == 0) {
      return;
    }
    uStack_34._0_1_ = *(char *)(iVar3 + 0x12a);
    cVar5 = '\0';
    if (param_1 != (char *)0x0) goto LAB_ram_42036b34;
  }
  else {
    uStack_34._0_1_ = *(char *)(iVar4 + 0x12a);
LAB_ram_42036b34:
    cVar5 = (char)uStack_34;
  }
  uStack_34._1_1_ = '\0';
  iVar8 = FUN_ram_420367d2();
  if (iVar8 == 0) {
    if (param_1 == (char *)0x0) goto LAB_ram_42036b58;
    cVar13 = param_1[1];
    if (cVar13 == '\x01') {
      bVar16 = *param_1 - 1;
    }
    else {
      if (cVar13 != '\x02') goto LAB_ram_42036b58;
      bVar16 = *param_1 - 5;
    }
    if (8 < bVar16) goto LAB_ram_42036b58;
LAB_ram_42036934:
    uStack_34._1_1_ = cVar13;
  }
  else {
    if (iVar4 != 0) {
      cVar13 = *(char *)(iVar4 + 299);
      if (cVar13 == '\x01') {
        bVar16 = *(char *)(iVar4 + 0x12a) - 1;
      }
      else {
        if (cVar13 != '\x02') goto LAB_ram_42036b46;
        bVar16 = *(char *)(iVar4 + 0x12a) - 5;
      }
      if (bVar16 < 9) goto LAB_ram_42036934;
    }
LAB_ram_42036b46:
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0xe4) != 0)) {
      uStack_34._1_1_ = *(char *)(*(int *)(iVar3 + 0xe4) + 0xac);
    }
  }
LAB_ram_42036b58:
  cVar13 = '\0';
  if (cVar5 != '\0') {
    cVar13 = uStack_34._1_1_;
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x1a0))(cVar5,cVar13);
  if (iVar4 == 0) {
    uVar12 = 0xff;
    uVar11 = 0xff;
  }
  else {
    uVar12 = *(undefined1 *)(iVar4 + 0x12a);
    uVar11 = *(undefined1 *)(iVar4 + 299);
  }
  if (iVar3 == 0) {
    uVar9 = 0xff;
    uVar6 = 0xff;
  }
  else {
    uVar9 = *(undefined1 *)(iVar3 + 0x12a);
    uVar6 = *(undefined1 *)(iVar3 + 299);
  }
  FUN_ram_42033fd8(1,4,3,0x3c07e0a0,(char)uStack_34,uStack_34._1_1_,*pcVar7,pcVar7[1],uVar12,uVar11,
                   uVar9,uVar6,*(undefined1 *)(*(int *)(gp + -0x2b8) + 0x3f3),0);
  if (((char)uStack_34 != *pcVar7) || (uStack_34._1_1_ != pcVar7[1])) {
    FUN_ram_42033a0a(&uStack_34);
    if ((DAT_ram_3fcb526a & 1) == 0) {
      FUN_ram_42033b00(&uStack_34);
    }
    else {
      FUN_ram_42033fd8(1,8,3,0x3c07e0ec);
    }
  }
  return;
}

