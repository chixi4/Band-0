
undefined4 FUN_ram_42057858(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int *piVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  
  uVar14 = CONCAT44(param_2,param_1);
  if (param_1 != 0) goto LAB_ram_42057876;
  do {
    do {
      uVar14 = FUN_ram_4039bf1e();
LAB_ram_42057876:
      uVar10 = (uint)((ulonglong)uVar14 >> 0x20);
      iVar6 = (int)uVar14;
      piVar3 = *(int **)(iVar6 + 0x70);
      if (piVar3 == (int *)0x0) {
        return 0xffffffff;
      }
    } while (uVar10 == 0);
    uVar12 = (uint)*(ushort *)(piVar3 + 2);
    if (uVar12 <= uVar10) {
      return 0;
    }
  } while (*(ushort *)(iVar6 + 0x36) < uVar10);
  bVar1 = *(byte *)((int)piVar3 + 10);
  iVar13 = (bVar1 & 1) * 4;
  uVar11 = uVar12 - uVar10 & 0xffff;
  iVar7 = FUN_ram_42053b52(0x36,iVar13 + uVar11 & 0xffff,0x280);
  if (iVar7 != 0) {
    uVar8 = FUN_ram_42053f22(piVar3[1],*(int *)(iVar7 + 4) + iVar13,uVar11,
                             ((uint)*(ushort *)(piVar3[1] + 8) - (uint)*(ushort *)(piVar3 + 2)) +
                             uVar10 & 0xffff);
    if (uVar8 == uVar11) {
      uVar11 = FUN_ram_420523aa(*(undefined2 *)(piVar3[3] + 0xc));
      if ((uVar11 & 8) == 0) {
        uVar11 = uVar11 & 0x3f;
        uVar8 = 0;
      }
      else {
        uVar11 = uVar11 & 0x37;
        uVar8 = 8;
      }
      if ((uVar11 & 1) != 0) {
        uVar11 = uVar11 & 0xfe;
        uVar8 = uVar8 | 1;
      }
      iVar13 = FUN_ram_420523b8(*(undefined4 *)(piVar3[3] + 4));
      piVar9 = (int *)FUN_ram_4205725a(iVar6,iVar7,uVar8,uVar10 + iVar13,(uint)bVar1);
      if (piVar9 != (int *)0x0) {
        sVar4 = FUN_ram_42053d72(piVar3[1]);
        iVar7 = piVar3[1];
        *(short *)(iVar6 + 0x6a) = *(short *)(iVar6 + 0x6a) - sVar4;
        FUN_ram_42053cac(iVar7,(uint)*(ushort *)(iVar7 + 8) + (uVar10 - uVar12 & 0xffff) & 0xffff);
        *(short *)(piVar3 + 2) = (short)((uVar10 - uVar12) * 0x10000 >> 0x10) + (short)piVar3[2];
        uVar2 = *(undefined2 *)(piVar3[3] + 0xc);
        uVar5 = FUN_ram_420523aa(uVar11);
        iVar13 = piVar3[3];
        iVar7 = piVar3[1];
        *(byte *)(iVar13 + 0xc) = (byte)uVar2 | (byte)uVar5;
        *(byte *)(iVar13 + 0xd) = (byte)((ushort)uVar2 >> 8) | (byte)((ushort)uVar5 >> 8);
        sVar4 = FUN_ram_42053d72(iVar7);
        *(short *)(iVar6 + 0x6a) = sVar4 + *(short *)(iVar6 + 0x6a);
        sVar4 = FUN_ram_42053d72(piVar9[1]);
        iVar7 = *piVar3;
        *(short *)(iVar6 + 0x6a) = sVar4 + *(short *)(iVar6 + 0x6a);
        *piVar9 = iVar7;
        *piVar3 = (int)piVar9;
        if (*piVar9 == 0) {
          *(undefined2 *)(iVar6 + 0x6c) = 0;
        }
        return 0;
      }
    }
    else {
      FUN_ram_42053ac4(iVar7);
    }
  }
  return 0xffffffff;
}

