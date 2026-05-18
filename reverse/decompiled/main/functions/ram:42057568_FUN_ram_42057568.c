
undefined4 FUN_ram_42057568(int *param_1,int param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int extraout_a5;
  uint uVar6;
  undefined2 uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  ushort uVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  
  if (param_1 != (int *)0x0) {
    uVar11 = (uint)*(ushort *)((int)param_1 + 0x36);
    uVar4 = (uint)(*(ushort *)((int)param_1 + 0x66) >> 1);
    if (uVar11 < uVar4) {
      uVar4 = uVar11;
    }
    if (uVar4 != 0) {
      uVar11 = uVar4;
    }
    if (param_2 != 0) {
      piVar3 = param_1;
      if ((2 < param_1[5] - 2U) && (piVar3 = (int *)0xfffffff5, param_1[5] != 7)) {
        return 0xfffffff5;
      }
      if (param_3 == 0) goto LAB_ram_42057602;
      if ((*(ushort *)(param_1 + 0x1a) < param_3) || (0xf < *(ushort *)((int)param_1 + 0x6a))) {
        *(ushort *)((int)param_1 + 0x1e) = *(ushort *)((int)param_1 + 0x1e) | 0x80;
        return 0xffffffff;
      }
      iVar5 = param_1[0x1d];
      if (*(ushort *)((int)param_1 + 0x6a) == 0) goto LAB_ram_420575fc;
      if (iVar5 != 0) goto LAB_ram_42057602;
      if (param_1[0x1c] != 0) goto LAB_ram_42057602;
LAB_ram_420575f4:
      do {
        do {
          piVar3 = (int *)FUN_ram_4039bf1e(piVar3);
          iVar5 = extraout_a5;
LAB_ram_420575fc:
        } while ((iVar5 != 0) || (param_1[0x1c] != 0));
LAB_ram_42057602:
        piVar9 = (int *)param_1[0x1c];
        uVar12 = *(ushort *)((int)param_1 + 0x6a);
        if (piVar9 != (int *)0x0) {
          do {
            piVar15 = piVar9;
            piVar9 = (int *)*piVar15;
          } while (piVar9 != (int *)0x0);
          uVar4 = *(byte *)((int)piVar15 + 10) & 1;
          if ((uint)*(ushort *)(piVar15 + 2) + uVar4 * 4 <= uVar11) {
            uVar8 = (uint)*(ushort *)(param_1 + 0x1b);
            if (uVar8 == 0) {
              uVar4 = 0;
              goto LAB_ram_42057696;
            }
            uVar6 = (uVar11 - *(ushort *)(piVar15 + 2)) + uVar4 * -4 & 0xffff;
            if (uVar8 <= uVar6) {
              uVar4 = uVar8;
              if (param_3 < uVar8) {
                uVar4 = param_3;
              }
              if (uVar6 < (uVar4 & 0xffff)) {
                uVar4 = uVar6;
              }
              uVar4 = uVar4 & 0xffff;
              uVar7 = (undefined2)(uVar8 - uVar4);
              piVar9 = piVar15;
              if ((uVar8 - uVar4 & 0xffff) == 0) goto LAB_ram_42057696;
              piVar9 = (int *)0x0;
              piVar10 = piVar15;
              if (param_3 == uVar4) goto LAB_ram_4205766e;
            }
          }
          goto LAB_ram_420575f4;
        }
        piVar15 = (int *)0x0;
        uVar4 = 0;
        if ((short)param_1[0x1b] == 0) goto LAB_ram_42057696;
      } while( true );
    }
  }
  return 0xfffffff0;
LAB_ram_42057696:
  piVar3 = piVar9;
  uVar6 = 0;
  piVar9 = (int *)0x0;
  piVar13 = (int *)0x0;
  for (uVar8 = uVar4; uVar7 = (undefined2)uVar6, piVar10 = piVar3, uVar8 < param_3;
      uVar8 = uVar14 + uVar8 & 0xffff) {
    uVar6 = param_3 - uVar8;
    if (uVar11 < (param_3 - uVar8 & 0xffff)) {
      uVar6 = uVar11;
    }
    piVar3 = (int *)FUN_ram_42053b52(0x36,uVar11,0x280);
    uVar14 = uVar6 & 0xffff;
    if (piVar3 == (int *)0x0) {
LAB_ram_42057722:
      *(ushort *)((int)param_1 + 0x1e) = *(ushort *)((int)param_1 + 0x1e) | 0x80;
      if (piVar9 != (int *)0x0) {
        piVar3 = (int *)FUN_ram_420548c6(piVar9);
      }
      if (*(short *)((int)param_1 + 0x6a) == 0) {
        return 0xffffffff;
      }
      if (param_1[0x1d] != 0) {
        return 0xffffffff;
      }
      if (param_1[0x1c] != 0) {
        return 0xffffffff;
      }
      goto LAB_ram_420575f4;
    }
    if (*piVar3 != 0) goto LAB_ram_420575f4;
    uVar1 = *(ushort *)((int)piVar3 + 10);
    *(short *)(piVar3 + 2) = (short)uVar6;
    *(short *)((int)piVar3 + 10) = (short)uVar6;
    FUN_ram_4039c11e(piVar3[1],param_2 + uVar8,uVar14);
    sVar2 = FUN_ram_42053d72(piVar3);
    uVar12 = sVar2 + uVar12;
    uVar6 = uVar1 - uVar14 & 0xffff;
    if (0x10 < uVar12) {
      piVar3 = (int *)FUN_ram_42053ac4(piVar3);
      goto LAB_ram_42057722;
    }
    piVar3 = (int *)FUN_ram_4205725a(param_1,piVar3,0,param_1[0x18] + uVar8,0);
    if (piVar3 == (int *)0x0) goto LAB_ram_42057722;
    piVar10 = piVar3;
    if (piVar9 != (int *)0x0) {
      if (piVar13 == (int *)0x0) goto LAB_ram_420575f4;
      *piVar13 = (int)piVar3;
      piVar10 = piVar9;
    }
    piVar9 = piVar10;
    piVar13 = piVar3;
  }
LAB_ram_4205766e:
  if (uVar4 == 0) {
    *(undefined2 *)(param_1 + 0x1b) = uVar7;
    if (piVar15 == (int *)0x0) {
      param_1[0x1c] = (int)piVar9;
      goto LAB_ram_420577d0;
    }
  }
  else {
    for (piVar13 = (int *)piVar15[1]; sVar2 = (short)uVar4, piVar13 != (int *)0x0;
        piVar13 = (int *)*piVar13) {
      *(short *)(piVar13 + 2) = (short)piVar13[2] + sVar2;
      if (*piVar13 == 0) {
        piVar3 = (int *)FUN_ram_4039c11e(piVar13[1] + (uint)*(ushort *)((int)piVar13 + 10),param_2,
                                         uVar4);
        *(short *)((int)piVar13 + 10) = *(short *)((int)piVar13 + 10) + sVar2;
      }
    }
    *(short *)(piVar15 + 2) = sVar2 + (short)piVar15[2];
    *(undefined2 *)(param_1 + 0x1b) = uVar7;
  }
  *piVar15 = (int)piVar9;
LAB_ram_420577d0:
  *(ushort *)((int)param_1 + 0x6a) = uVar12;
  param_1[0x18] = param_1[0x18] + param_3;
  *(short *)(param_1 + 0x1a) = (short)param_1[0x1a] - (short)param_3;
  if (((uVar12 == 0) || (param_1[0x1d] != 0)) || (param_1[0x1c] != 0)) {
    if (((piVar10 != (int *)0x0) && (piVar10[3] != 0)) && ((param_4 & 2) == 0)) {
      uVar12 = *(ushort *)(piVar10[3] + 0xc);
      uVar4 = FUN_ram_420523aa(8);
      uVar4 = uVar4 | uVar12;
      iVar5 = piVar10[3];
      *(char *)(iVar5 + 0xc) = (char)uVar4;
      *(char *)(iVar5 + 0xd) = (char)(uVar4 >> 8);
    }
    return 0;
  }
  goto LAB_ram_420575f4;
}

