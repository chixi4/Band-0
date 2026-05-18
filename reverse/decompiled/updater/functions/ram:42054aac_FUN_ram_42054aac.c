
undefined4 FUN_ram_42054aac(int param_1,int param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  int *piVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  ushort uVar13;
  int *piVar14;
  
  if (param_1 == 0) {
    return 0xfffffff0;
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0x36);
  uVar4 = (uint)(*(ushort *)(param_1 + 0x66) >> 1);
  if (uVar10 < uVar4) {
    uVar4 = uVar10;
  }
  if (uVar4 != 0) {
    uVar10 = uVar4;
  }
  if (param_2 == 0) {
    return 0xfffffff0;
  }
  if ((2 < *(int *)(param_1 + 0x14) - 2U) && (*(int *)(param_1 + 0x14) != 7)) {
    return 0xfffffff5;
  }
  if ((param_3 != 0) &&
     ((*(ushort *)(param_1 + 0x68) < param_3 || (0xf < *(ushort *)(param_1 + 0x6a))))) {
    *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 0x80;
    return 0xffffffff;
  }
  piVar2 = *(int **)(param_1 + 0x70);
  uVar13 = *(ushort *)(param_1 + 0x6a);
  if (piVar2 == (int *)0x0) {
    piVar14 = (int *)0x0;
    uVar4 = 0;
    uVar7 = 0;
  }
  else {
    do {
      piVar14 = piVar2;
      piVar2 = (int *)*piVar14;
    } while (piVar2 != (int *)0x0);
    uVar6 = (uint)*(ushort *)(param_1 + 0x6c);
    uVar7 = 0;
    uVar4 = 0;
    if (uVar6 != 0) {
      uVar7 = (uVar10 - *(ushort *)(piVar14 + 2)) + (*(byte *)((int)piVar14 + 10) & 1) * -4;
      uVar4 = uVar6;
      if (param_3 < uVar6) {
        uVar4 = param_3;
      }
      if ((uVar4 & 0xffff) < (uVar7 & 0xffff)) {
        uVar7 = uVar4;
      }
      uVar7 = uVar7 & 0xffff;
      uVar4 = uVar6 - uVar7 & 0xffff;
      piVar2 = piVar14;
    }
  }
  piVar9 = (int *)0x0;
  piVar12 = (int *)0x0;
  for (uVar6 = uVar7; uVar6 < param_3; uVar6 = uVar11 + uVar6 & 0xffff) {
    uVar4 = param_3 - uVar6;
    if (uVar10 < (param_3 - uVar6 & 0xffff)) {
      uVar4 = uVar10;
    }
    iVar5 = FUN_ram_42051d86(0x36,uVar10,0x280);
    uVar11 = uVar4 & 0xffff;
    if (iVar5 == 0) {
LAB_ram_42054c0c:
      *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 0x80;
      if (piVar9 == (int *)0x0) {
        return 0xffffffff;
      }
      FUN_ram_4205278a(piVar9);
      return 0xffffffff;
    }
    uVar1 = *(ushort *)(iVar5 + 10);
    *(short *)(iVar5 + 8) = (short)uVar4;
    *(short *)(iVar5 + 10) = (short)uVar4;
    FUN_ram_40399daa(*(undefined4 *)(iVar5 + 4),param_2 + uVar6,uVar11);
    sVar3 = FUN_ram_42051f4e(iVar5);
    uVar13 = sVar3 + uVar13;
    uVar4 = uVar1 - uVar11 & 0xffff;
    if (0x10 < uVar13) {
      FUN_ram_42051d02(iVar5);
      goto LAB_ram_42054c0c;
    }
    piVar2 = (int *)FUN_ram_420547d2(param_1,iVar5,0,*(int *)(param_1 + 0x60) + uVar6,0);
    if (piVar2 == (int *)0x0) goto LAB_ram_42054c0c;
    piVar8 = piVar2;
    if (piVar9 != (int *)0x0) {
      *piVar12 = (int)piVar2;
      piVar8 = piVar9;
    }
    piVar9 = piVar8;
    piVar12 = piVar2;
  }
  if (uVar7 == 0) {
    *(short *)(param_1 + 0x6c) = (short)uVar4;
    if (piVar14 == (int *)0x0) {
      *(int **)(param_1 + 0x70) = piVar9;
      goto LAB_ram_42054cbe;
    }
  }
  else {
    for (piVar12 = (int *)piVar14[1]; sVar3 = (short)uVar7, piVar12 != (int *)0x0;
        piVar12 = (int *)*piVar12) {
      *(short *)(piVar12 + 2) = (short)piVar12[2] + sVar3;
      if (*piVar12 == 0) {
        FUN_ram_40399daa(piVar12[1] + (uint)*(ushort *)((int)piVar12 + 10),param_2,uVar7);
        *(short *)((int)piVar12 + 10) = *(short *)((int)piVar12 + 10) + sVar3;
      }
    }
    *(short *)(piVar14 + 2) = sVar3 + (short)piVar14[2];
    *(short *)(param_1 + 0x6c) = (short)uVar4;
  }
  *piVar14 = (int)piVar9;
LAB_ram_42054cbe:
  *(ushort *)(param_1 + 0x6a) = uVar13;
  *(uint *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + param_3;
  *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) - (short)param_3;
  if (((piVar2 != (int *)0x0) && (piVar2[3] != 0)) && ((param_4 & 2) == 0)) {
    uVar13 = *(ushort *)(piVar2[3] + 0xc);
    uVar4 = FUN_ram_4205073e(8);
    uVar4 = uVar4 | uVar13;
    iVar5 = piVar2[3];
    *(char *)(iVar5 + 0xc) = (char)uVar4;
    *(char *)(iVar5 + 0xd) = (char)(uVar4 >> 8);
  }
  return 0;
}

