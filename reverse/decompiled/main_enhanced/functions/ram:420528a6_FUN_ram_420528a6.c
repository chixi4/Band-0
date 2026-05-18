
void FUN_ram_420528a6(void)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int unaff_s1;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int *unaff_s4;
  int *piVar13;
  byte bVar14;
  byte *pbVar15;
  byte *pbVar16;
  short sStack00000010;
  short sStack00000012;
  undefined4 in_stack_00000014;
  undefined2 uStack00000018;
  char cStack0000001a;
  byte bStack0000001b;
  undefined2 uStack0000001c;
  undefined2 uStack0000001e;
  short sStack00000024;
  short sStack00000026;
  undefined4 in_stack_00000028;
  short in_stack_0000002c;
  
  iVar5 = FUN_ram_42053f22();
  if (iVar5 == 0xc) {
    uVar12 = 0;
    uVar6 = FUN_ram_420523aa(uStack00000018);
    iVar5 = 0x3fcc207c;
    do {
      if ((*(char *)(iVar5 + 0xc) == '\x02') && (*(ushort *)(iVar5 + 10) == uVar6)) {
        iVar5 = FUN_ram_420523aa(uStack0000001c);
        uVar6 = FUN_ram_420523aa(uStack0000001e);
        if (((cStack0000001a < '\0') && (iVar5 == 1)) &&
           ((*(char *)(uVar12 * 0x114 + 0x3fcc218e) != '\0' ||
            (*unaff_s4 ==
             *(int *)(&DAT_ram_3fcc2040 + (uint)*(byte *)(uVar12 * 0x114 + 0x3fcc2089) * 4))))) {
          iVar5 = uVar12 * 0x114;
          pbVar15 = (byte *)(iVar5 + 0x3fcc208e);
          uVar4 = 0xc;
          goto LAB_ram_42052948;
        }
        break;
      }
      uVar12 = uVar12 + 1;
      iVar5 = iVar5 + 0x114;
    } while (uVar12 != 4);
  }
  goto LAB_ram_420529fc;
  while( true ) {
    pbVar16 = pbVar15 + uVar7;
    for (; uVar4 = uVar4 + 1 & 0xffff, pbVar15 != pbVar16; pbVar15 = pbVar15 + 1) {
      uVar7 = FUN_ram_420540d0();
      if ((int)uVar7 < 0) goto LAB_ram_420529fc;
      uVar9 = (uint)*pbVar15;
      if (((&DAT_ram_3c0fb899)[uVar9] & 3) == 1) {
        uVar9 = uVar9 + 0x20;
      }
      uVar7 = uVar7 & 0xff;
      if (((&DAT_ram_3c0fb899)[uVar7] & 3) == 1) {
        uVar7 = uVar7 + 0x20;
      }
      if ((uVar9 != uVar7) || (uVar4 == 0xffff)) goto LAB_ram_420529fc;
    }
    pbVar15 = pbVar15 + 1;
    iVar8 = FUN_ram_420540d0();
    if (iVar8 < 0) goto LAB_ram_420529fc;
    if (iVar8 == 0) break;
LAB_ram_42052948:
    uVar7 = FUN_ram_420540d0();
    if ((((int)uVar7 < 0) || (uVar4 == 0xffff)) || ((uVar7 & 0xc0) == 0xc0)) goto LAB_ram_420529fc;
  }
  if (((uVar4 != 0xffff) && (uVar7 = uVar4 + 1 & 0xffff, uVar7 != 0xffff)) &&
     ((iVar8 = FUN_ram_42053f22(), iVar8 == 4 &&
      (((sStack00000012 == 0x100 && (sStack00000010 == 0x100)) && (uVar7 < 0xfffc)))))) {
    uVar7 = uVar12 & 0xff;
    bVar14 = bStack0000001b & 0xf;
    if ((_uStack00000018 & 0xf000000) == 0) {
      iVar8 = uVar12 * 0x114;
      bVar1 = *(byte *)(iVar8 + 0x3fcc2084);
      for (uVar4 = uVar4 + 5;
          (uVar4 = uVar4 & 0xffff, uVar6 != 0 && (uVar4 < *(ushort *)(unaff_s1 + 8)));
          uVar4 = uVar4 + iVar10) {
        do {
          uVar4 = uVar4 + 1 & 0xffff;
          uVar9 = FUN_ram_420540d0();
          if (((int)uVar9 < 0) || (uVar4 == 0)) goto LAB_ram_420529fc;
          if ((uVar9 & 0xc0) == 0xc0) break;
          if ((int)(uint)*(ushort *)(unaff_s1 + 8) <= (int)(uVar4 + uVar9)) goto LAB_ram_420529fc;
          uVar4 = uVar4 + uVar9 & 0xffff;
          iVar10 = FUN_ram_420540d0();
          if (iVar10 < 0) goto LAB_ram_420529fc;
        } while (iVar10 != 0);
        if (((uVar4 == 0xffff) || (uVar9 = uVar4 + 1 & 0xffff, uVar9 == 0xffff)) ||
           ((iVar10 = FUN_ram_42053f22(), iVar10 != 10 || (0xfff5 < uVar9)))) goto LAB_ram_420529fc;
        uVar4 = uVar4 + 0xb & 0xffff;
        if ((((sStack00000026 == 0x100) && (*(char *)(iVar8 + 0x3fcc2084) == '\0')) &&
            (sStack00000024 == 0x100)) && (in_stack_0000002c == 0x400)) {
          iVar10 = FUN_ram_42053f22();
          if (iVar10 != 4) goto LAB_ram_420529fc;
          iVar10 = ((uint)*(byte *)(iVar8 + 0x3fcc2084) + uVar12 * 0x45) * 4;
          *(undefined4 *)(iVar10 + 0x3fcc2080) = in_stack_00000014;
          uVar11 = FUN_ram_420523b8(in_stack_00000028);
          *(undefined4 *)(iVar10 + 0x3fcc207c) = uVar11;
          bVar3 = *(byte *)(iVar8 + 0x3fcc2084);
          if (0x93a80 < *(uint *)((uVar12 * 0x45 + (uint)bVar3) * 4 + 0x3fcc207c)) {
            *(undefined4 *)((uVar12 * 0x45 + (uint)bVar3) * 4 + 0x3fcc207c) = 0x93a80;
          }
          *(byte *)(uVar12 * 0x114 + 0x3fcc2084) = bVar3 + 1;
        }
        iVar10 = FUN_ram_420523aa(in_stack_0000002c);
        if (0xffff < (int)(iVar10 + uVar4)) goto LAB_ram_420529fc;
        iVar10 = FUN_ram_420523aa(in_stack_0000002c);
        uVar6 = uVar6 - 1 & 0xffff;
      }
      iVar8 = uVar12 * 0x114;
      if (bVar1 < *(byte *)(iVar8 + 0x3fcc2084)) {
        FUN_ram_42053ac4();
        (&DAT_ram_3fcc2088)[iVar8] = 3;
        FUN_ram_42052446(uVar7,iVar5 + 0x3fcc2080);
        bVar1 = *(byte *)(iVar8 + 0x3fcc2084);
        piVar13 = (int *)(iVar5 + 0x3fcc207c);
        for (; cVar2 = *(char *)(iVar8 + 0x3fcc2084), bVar1 != bVar14; bVar14 = bVar14 + 1) {
          if (*piVar13 == 0) {
            piVar13[1] = 0;
            *(char *)(iVar8 + 0x3fcc2084) = cVar2 + -1;
          }
          piVar13 = piVar13 + 1;
        }
        if (cVar2 != '\0') {
          return;
        }
        if ((&DAT_ram_3fcc2088)[iVar8] != '\x03') {
          return;
        }
        (&DAT_ram_3fcc2088)[iVar8] = 0;
        return;
      }
    }
    else {
      iVar5 = FUN_ram_4205241e(iVar5 + 0x3fcc207c);
      if (iVar5 != 0) {
        *(undefined **)(uVar12 * 0x114 + 0x3fcc208a) = &misa;
        FUN_ram_420526da(uVar7);
        goto LAB_ram_420529fc;
      }
    }
    FUN_ram_42053ac4();
    FUN_ram_42052446(uVar7,0);
    (&DAT_ram_3fcc2088)[uVar12 * 0x114] = 0;
    *(undefined1 *)(uVar12 * 0x114 + 0x3fcc2084) = 0;
    return;
  }
LAB_ram_420529fc:
  FUN_ram_42053ac4();
  return;
}

