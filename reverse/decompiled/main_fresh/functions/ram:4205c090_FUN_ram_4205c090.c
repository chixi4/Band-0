
undefined4 FUN_ram_4205c090(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  
  pbVar15 = *(byte **)(param_1 + 4);
  uVar13 = (int)(*(ushort *)(param_2 + 0x30) - 0x14) / 8;
  if (((*pbVar15 & 0xf) == 5) && (0x13 < *(ushort *)(param_1 + 10))) {
    uVar5 = FUN_ram_420523aa(*(undefined2 *)(pbVar15 + 6));
    uVar14 = uVar5 & 0x1fff;
    sVar3 = 0x14;
    for (uVar1 = *(ushort *)(param_1 + 8) - 0x14; uVar1 = uVar1 & 0xffff, uVar1 != 0;
        uVar1 = uVar1 - uVar12) {
      uVar12 = (uVar13 & 0x1fff) << 3;
      if (uVar1 < (uVar13 & 0x1fff) << 3) {
        uVar12 = uVar1;
      }
      piVar7 = (int *)FUN_ram_42053b52(0x22,uVar12,0x280);
      if (piVar7 == (int *)0x0) {
        return 0xffffffff;
      }
      piVar8 = piVar7;
      if (*(short *)((int)piVar7 + 10) == (short)piVar7[2]) goto LAB_ram_4205c15c;
      do {
        piVar8 = (int *)FUN_ram_4039bf1e();
LAB_ram_4205c15c:
      } while (*piVar8 != 0);
      sVar2 = FUN_ram_42053f22(param_1,piVar8[1],uVar12,sVar3);
      sVar3 = sVar2 + sVar3;
      iVar9 = FUN_ram_42053a64(piVar7,0x14);
      if (iVar9 != 0) {
        FUN_ram_42053ac4(piVar7);
        return 0xffffffff;
      }
      FUN_ram_4039c11e(piVar7[1],pbVar15,0x14);
      iVar9 = piVar7[1];
      uVar10 = uVar14 & 0x1fff;
      if (((int)(*(ushort *)(param_2 + 0x30) - 0x13) <= (int)uVar1) || ((uVar5 & 0x2000) != 0)) {
        uVar10 = uVar10 | 0x2000;
      }
      uVar4 = FUN_ram_420523aa(uVar10);
      *(char *)(iVar9 + 6) = (char)uVar4;
      *(char *)(iVar9 + 7) = (char)((ushort)uVar4 >> 8);
      uVar4 = FUN_ram_420523aa(uVar12 + 0x14 & 0xffff);
      *(char *)(iVar9 + 2) = (char)uVar4;
      *(char *)(iVar9 + 3) = (char)((ushort)uVar4 >> 8);
      *(undefined1 *)(iVar9 + 10) = 0;
      *(undefined1 *)(iVar9 + 0xb) = 0;
      uVar4 = FUN_ram_4205e8cc(iVar9,0x14);
      pcVar11 = *(code **)(param_2 + 0x14);
      *(char *)(iVar9 + 10) = (char)uVar4;
      *(char *)(iVar9 + 0xb) = (char)((ushort)uVar4 >> 8);
      (*pcVar11)(param_2,piVar7,param_3);
      FUN_ram_42053ac4(piVar7);
      uVar14 = uVar14 + (uVar13 & 0xffff) & 0xffff;
    }
    uVar6 = 0;
  }
  else {
    uVar6 = 0xfffffffa;
  }
  return uVar6;
}

