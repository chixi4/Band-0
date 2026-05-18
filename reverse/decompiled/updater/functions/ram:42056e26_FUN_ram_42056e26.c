
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42056e26(void)

{
  byte bVar1;
  int unaff_s0;
  int *unaff_s1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *unaff_s2;
  int iVar11;
  int unaff_s3;
  uint unaff_s5;
  int unaff_s6;
  uint uVar12;
  int *piVar13;
  uint unaff_s9;
  char *pcVar14;
  int iStack00000008;
  uint in_stack_0000002c;
  
  uVar3 = unaff_s5;
  for (piVar13 = unaff_s1; piVar13 != (int *)0x0; piVar13 = (int *)*piVar13) {
    uVar8 = (uint)*(ushort *)((int)piVar13 + 10);
    if (uVar3 < uVar8) {
      iStack00000008 = piVar13[1];
      goto LAB_ram_42056e42;
    }
    uVar3 = uVar3 - uVar8 & 0xffff;
    unaff_s9 = unaff_s9 - uVar8 & 0xffff;
  }
code_r0x42056ece:
  FUN_ram_42051d02();
  return;
LAB_ram_42056e42:
  iVar5 = _DAT_ram_3fcb5cf8;
  if (unaff_s9 <= uVar3) goto LAB_ram_42056e58;
  bVar1 = *(byte *)(iStack00000008 + uVar3);
  if (bVar1 == 0xff) goto LAB_ram_42056e58;
  uVar8 = uVar3 + 2 & 0xffff;
  if (uVar8 < uVar3) goto code_r0x42056ece;
  uVar9 = uVar3 + 1;
  if ((int)uVar9 < (int)(uint)*(ushort *)((int)piVar13 + 10)) {
    bVar7 = ((byte *)(iStack00000008 + uVar3))[1];
LAB_ram_42056f2a:
    uVar12 = (uint)bVar7;
    uVar10 = uVar12;
    if (bVar1 == 0x33) {
      if (uVar12 != 4) goto code_r0x42056ece;
      uVar9 = 3;
    }
    else if (bVar1 < 0x34) {
      if (bVar1 == 1) {
        if (uVar12 == 4) {
          uVar9 = 6;
          goto LAB_ram_42057004;
        }
        goto code_r0x42056ece;
      }
      if (bVar1 < 2) goto LAB_ram_42056fba;
      if (bVar1 != 3) {
        if (bVar1 != 6) goto LAB_ram_42056f4c;
        if ((bVar7 & 3) == 0) goto LAB_ram_42057094;
        goto code_r0x42056ece;
      }
      if (uVar12 < 4) goto code_r0x42056ece;
      uVar10 = 4;
      uVar9 = 7;
    }
    else if (bVar1 == 0x36) {
      if (uVar12 != 4) goto code_r0x42056ece;
      uVar9 = 2;
    }
    else if (bVar1 < 0x37) {
      uVar6 = 1;
      if (bVar1 == 0x34) {
        if ((uVar12 != 1) || (unaff_s5 != 0xf0)) goto code_r0x42056ece;
        uVar9 = 0;
      }
      else {
LAB_ram_420570c4:
        uVar9 = uVar12;
        if (uVar12 != uVar6) goto code_r0x42056ece;
      }
    }
    else {
      if (bVar1 == 0x3a) {
        uVar6 = 4;
        goto LAB_ram_420570c4;
      }
      if (bVar1 != 0x3b) goto LAB_ram_42056f4c;
      if (uVar12 != 4) goto code_r0x42056ece;
      uVar9 = 5;
    }
  }
  else {
    if (*piVar13 != 0) {
      bVar7 = **(byte **)(*piVar13 + 4);
      goto LAB_ram_42056f2a;
    }
    if (bVar1 == 0x34) goto code_r0x42056ece;
    if (bVar1 < 0x35) {
      if (bVar1 == 3) goto code_r0x42056ece;
      if (3 < bVar1) {
        if (bVar1 != 6) {
          bVar7 = 0x33;
          goto LAB_ram_42057200;
        }
        uVar12 = 0;
LAB_ram_42057094:
        uVar10 = uVar12;
        if (0xc < uVar12) {
          uVar10 = 0xc;
        }
        uVar9 = 8;
        goto LAB_ram_42057004;
      }
      if (bVar1 != 0) {
        bVar7 = 1;
        goto LAB_ram_42057200;
      }
      goto LAB_ram_42056fba;
    }
    if (bVar1 == 0x3a) goto code_r0x42056ece;
    if (bVar1 < 0x3b) {
      if (bVar1 == 0x35) goto code_r0x42056ece;
      bVar7 = 0x36;
    }
    else {
      bVar7 = 0x3b;
    }
LAB_ram_42057200:
    if (bVar1 == bVar7) goto code_r0x42056ece;
    uVar12 = 0;
LAB_ram_42056f4c:
    FUN_ram_420595fc();
    uVar10 = 0;
    uVar9 = 0xffffffff;
  }
LAB_ram_42057004:
  if (0xfffd < (int)(uVar3 + uVar12)) goto code_r0x42056ece;
  if (uVar10 != 0) {
    in_stack_0000002c = 0;
    pcVar14 = unaff_s2 + uVar9;
    uVar3 = uVar8;
    while (*pcVar14 == '\0') {
      uVar6 = uVar10;
      if (4 < uVar10) {
        uVar6 = 4;
      }
      uVar2 = FUN_ram_420520b2(piVar13,&stack0x0000002c);
      if (uVar6 != uVar2) goto code_r0x42056ece;
      if (uVar10 < 5) {
        if (uVar10 == 4) {
          uVar3 = FUN_ram_4205074c(in_stack_0000002c);
        }
        else {
          uVar3 = in_stack_0000002c & 0xff;
        }
        unaff_s2[uVar9] = '\x01';
        *(uint *)(&DAT_ram_3fcb5cf8 + uVar9 * 4) = uVar3;
        break;
      }
      if ((uVar10 & 3) != 0) goto code_r0x42056ece;
      *pcVar14 = '\x01';
      uVar4 = FUN_ram_4205074c(in_stack_0000002c);
      *(undefined4 *)(&DAT_ram_3fcb5cf8 + uVar9 * 4) = uVar4;
      uVar6 = uVar3 + 4 & 0xffff;
      uVar10 = uVar10 - 4 & 0xff;
      pcVar14 = pcVar14 + 1;
      if (uVar6 < uVar3) goto code_r0x42056ece;
      uVar9 = uVar9 + 1;
      uVar3 = uVar6;
    }
  }
  uVar9 = uVar12 + uVar8;
LAB_ram_42056fba:
  uVar8 = (uint)*(ushort *)((int)piVar13 + 10);
  uVar3 = uVar9 & 0xffff;
  if (uVar8 <= uVar3) {
    uVar3 = uVar3 - uVar8 & 0xffff;
    unaff_s9 = unaff_s9 - uVar8 & 0xffff;
    if ((unaff_s9 <= uVar3) || (piVar13 = (int *)*piVar13, piVar13 == (int *)0x0))
    goto code_r0x42056ece;
    iStack00000008 = piVar13[1];
  }
  goto LAB_ram_42056e42;
LAB_ram_42056e58:
  if (*unaff_s2 != '\0') {
    *unaff_s2 = '\0';
    if (iVar5 == 1) {
LAB_ram_4205712c:
      FUN_ram_42056e26();
      return;
    }
    if (iVar5 == 2) goto LAB_ram_42057118;
    if (iVar5 == 3) goto LAB_ram_4205712c;
  }
  uVar4 = _DAT_ram_3fcb5d00;
  if (unaff_s6 != 0) {
LAB_ram_42057118:
    FUN_ram_42056e26();
    return;
  }
  if (unaff_s2[1] != '\0') {
    iVar5 = unaff_s1[1];
    if (DAT_ram_3fcb5cfc == '\x05') {
      if ((*(byte *)(unaff_s3 + 5) & 0xfd) == 1) {
        FUN_ram_42056a52(*(undefined4 *)(unaff_s0 + 0x20));
        if ((*(byte *)(unaff_s0 + 0x39) & 8) != 0) {
          FUN_ram_420561aa(*(undefined4 *)(unaff_s0 + 0x20),8);
          FUN_ram_42059c32();
          FUN_ram_42056ece();
          return;
        }
      }
      else {
        if (1 < (byte)(*(byte *)(unaff_s3 + 5) - 4)) goto code_r0x42056ece;
        FUN_ram_42056a52(*(undefined4 *)(unaff_s0 + 0x20));
      }
      FUN_ram_420563c8();
      FUN_ram_42056ece();
      return;
    }
    if (DAT_ram_3fcb5cfc == '\x06') {
      if (((byte)(*(char *)(unaff_s3 + 5) - 3U) < 3) || (*(char *)(unaff_s3 + 5) == '\x01')) {
        FUN_ram_420561aa(*(undefined4 *)(unaff_s0 + 0x20),0xc);
        FUN_ram_42051808();
        FUN_ram_42056786();
        FUN_ram_42056ece();
        return;
      }
    }
    else if (((DAT_ram_3fcb5cfc == '\x02') && (*(char *)(unaff_s3 + 5) == '\x06')) &&
            (unaff_s2[2] != '\0')) {
      iVar11 = *(int *)(unaff_s0 + 0x20);
      *(undefined4 *)(iVar11 + 0xc) = 0;
      uVar4 = FUN_ram_4205074c(uVar4);
      *(undefined4 *)(iVar11 + 0x28) = uVar4;
      *(undefined4 *)(iVar11 + 0x2c) = *(undefined4 *)(iVar5 + 0x10);
      FUN_ram_42056b56();
      FUN_ram_42056ece();
      return;
    }
  }
  goto code_r0x42056ece;
}

