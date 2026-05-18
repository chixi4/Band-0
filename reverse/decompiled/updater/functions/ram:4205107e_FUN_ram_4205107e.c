
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205107e(char *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  byte bVar12;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  undefined1 uVar16;
  uint uVar17;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0xfffffff0;
  }
  if (param_1 == (char *)0x0) {
    return 0xfffffff0;
  }
  if (*param_1 == '\0') {
    return 0xfffffff0;
  }
  uVar6 = (*(code *)&SUB_ram_400104a8)();
  uVar17 = uVar6 - 1;
  if (param_1[uVar6 - 1] != '.') {
    uVar17 = uVar6;
  }
  if (0xff < uVar17) {
    return 0xfffffff0;
  }
  iVar7 = FUN_ram_4039a06c(param_1,0x3c072f8c);
  if (iVar7 == 0) {
    uVar13 = 0x100007f;
LAB_ram_420510f4:
    *param_2 = uVar13;
    return 0;
  }
  iVar7 = FUN_ram_4205903c(param_1,param_2);
  if (iVar7 != 0) {
    return 0;
  }
  iVar15 = 0x3fcb5828;
  iVar7 = 0x3fcb583a;
  iVar4 = 0x3fcb583a;
  do {
    if ((((*(char *)(iVar4 + -6) == '\x03') &&
         (iVar9 = FUN_ram_42050770(param_1,iVar4,uVar17), iVar9 == 0)) &&
        (*(char *)(iVar4 + uVar17) == '\0')) && (*(char *)(iVar4 + -10) != '\0')) {
      uVar13 = *(undefined4 *)(iVar4 + -0xe);
      goto LAB_ram_420510f4;
    }
    iVar4 = iVar4 + 0x114;
  } while (iVar4 != 0x3fcb5c8a);
  pcVar8 = (char *)(*(code *)&SUB_ram_400104ac)(param_1,0x3c072f98);
  if (pcVar8 == param_1 + (uVar17 - 6)) {
    uVar16 = 1;
  }
  else {
    uVar16 = 0;
    if ((_DAT_ram_3fcb57f0 == 0 && _DAT_ram_3fcb57ec == 0) && _DAT_ram_3fcb57f4 == 0) {
      return 0xfffffffa;
    }
  }
  cVar3 = '\0';
  do {
    if (((*(char *)(iVar7 + -6) == '\x02') &&
        (iVar4 = FUN_ram_42050770(param_1,iVar7,uVar17), iVar4 == 0)) &&
       (*(char *)(iVar7 + uVar17) == '\0')) {
      piVar14 = (int *)&DAT_ram_3fcb57f8;
      iVar4 = 0;
      do {
        if (*piVar14 == 0) {
          iVar4 = iVar4 * 0xc;
          *(undefined4 *)(&DAT_ram_3fcb57f8 + iVar4) = param_3;
          *(undefined4 *)(&DAT_ram_3fcb57fc + iVar4) = param_4;
          (&DAT_ram_3fcb5800)[iVar4] = cVar3;
          return 0xfffffffb;
        }
        iVar4 = iVar4 + 1;
        piVar14 = piVar14 + 3;
      } while (iVar4 != 4);
    }
    cVar1 = DAT_ram_3fcb679c;
    cVar3 = cVar3 + '\x01';
    iVar7 = iVar7 + 0x114;
  } while (cVar3 != '\x04');
  uVar2 = 0;
  bVar10 = 0;
  uVar6 = 4;
  do {
    uVar11 = uVar2 & 0xff;
    if (*(char *)(iVar15 + 0xc) == '\0') {
      iVar7 = uVar2 * 0x114;
      goto LAB_ram_42051222;
    }
    if ((*(char *)(iVar15 + 0xc) == '\x03') &&
       (bVar12 = DAT_ram_3fcb679c - *(char *)(iVar15 + 0x10), bVar10 < bVar12)) {
      uVar6 = uVar11;
      bVar10 = bVar12;
    }
    uVar2 = uVar2 + 1;
    iVar15 = iVar15 + 0x114;
  } while (uVar2 != 4);
  if (uVar6 == 4) {
    return 0xffffffff;
  }
  iVar7 = uVar6 * 0x114;
  uVar11 = uVar6;
  if ((&DAT_ram_3fcb5834)[iVar7] != '\x03') {
    return 0xffffffff;
  }
LAB_ram_42051222:
  piVar14 = (int *)&DAT_ram_3fcb57f8;
  iVar4 = 0;
  while (*piVar14 != 0) {
    iVar4 = iVar4 + 1;
    piVar14 = piVar14 + 3;
    if (iVar4 == 4) {
      return 0xffffffff;
    }
  }
  iVar15 = iVar4 * 0xc;
  (&DAT_ram_3fcb5834)[iVar7] = 1;
  (&DAT_ram_3fcb5838)[iVar7] = cVar1;
  *(undefined1 *)(iVar7 + 0x3fcb5830) = 0;
  *(undefined4 *)(&DAT_ram_3fcb57fc + iVar15) = param_4;
  (&DAT_ram_3fcb5800)[iVar15] = (char)uVar11;
  *(undefined4 *)(&DAT_ram_3fcb57f8 + iVar15) = param_3;
  FUN_ram_40399daa(iVar7 + 0x3fcb583a,param_1,uVar17);
  piVar14 = (int *)&DAT_ram_3fcb5c78;
  *(undefined1 *)(uVar17 + iVar7 + 0x3fcb583a) = 0;
  uVar17 = 0;
  do {
    if (*piVar14 == 0) {
      iVar15 = thunk_FUN_ram_4205614a(0x2e);
      if (iVar15 != 0) goto LAB_ram_420513ba;
      *(undefined4 *)(&DAT_ram_3fcb5c78 + uVar17 * 4) = 0;
      break;
    }
    uVar17 = uVar17 + 1 & 0xff;
    piVar14 = piVar14 + 1;
  } while (uVar17 != 4);
LAB_ram_42051294:
  uVar17 = (uint)DAT_ram_3fcb679d;
  cVar3 = '\x04';
  while( true ) {
    uVar17 = uVar17 + 1 & 0xff;
    if (3 < uVar17) {
      uVar17 = 0;
    }
    if (*(int *)(&DAT_ram_3fcb5c78 + uVar17 * 4) != 0) break;
    cVar3 = cVar3 + -1;
    if (cVar3 == '\0') {
      (&DAT_ram_3fcb5839)[iVar7] = 4;
      (&DAT_ram_3fcb5834)[iVar7] = 0;
      *(undefined1 *)(iVar7 + 0x3fcb5830) = 0;
      *(undefined4 *)(&DAT_ram_3fcb57f8 + iVar4 * 0xc) = 0;
      return 0xffffffff;
    }
  }
LAB_ram_42051354:
  DAT_ram_3fcb679d = (byte)uVar17;
  (&DAT_ram_3fcb5839)[iVar7] = DAT_ram_3fcb679d;
  DAT_ram_3fcb679c = DAT_ram_3fcb679c + '\x01';
  *(undefined1 *)(iVar7 + 0x3fcb593a) = uVar16;
  FUN_ram_42050a5c(uVar11);
  if (DAT_ram_3fcb679e == '\0') {
    FUN_ram_4205598a(1000,0x4204107a,0);
    DAT_ram_3fcb679e = '\x01';
  }
  return 0xfffffffb;
LAB_ram_420513ba:
  do {
    do {
      uVar5 = FUN_ram_40391b64();
    } while (uVar5 < 0x400);
    iVar9 = FUN_ram_42055d82(iVar15,&DAT_ram_3c0793d4);
  } while (iVar9 == -8);
  if (iVar9 == 0) {
    FUN_ram_42056112(iVar15,0x42040bf4,0);
    *(int *)(&DAT_ram_3fcb5c78 + uVar17 * 4) = iVar15;
    goto LAB_ram_42051354;
  }
  FUN_ram_4205611a(iVar15);
  *(undefined4 *)(&DAT_ram_3fcb5c78 + uVar17 * 4) = 0;
  goto LAB_ram_42051294;
}

