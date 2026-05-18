
void FUN_ram_42026644(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  uVar6 = param_2;
  if (param_4 < param_2) {
    uVar6 = param_4;
  }
  iVar2 = param_2 - uVar6;
  uVar1 = 0;
  puVar7 = param_1;
  puVar11 = param_3;
  uVar14 = uVar6 >> 3;
  while (uVar14 = uVar14 - 1, uVar14 != 0xffffffff) {
    uVar9 = *puVar11;
    uVar5 = *puVar7;
    uVar3 = uVar9 * param_5 + uVar1;
    uVar4 = uVar3 + uVar5;
    *puVar7 = uVar4;
    uVar12 = puVar7[1];
    uVar10 = puVar11[1];
    uVar9 = (uint)(uVar4 < uVar5) +
            (uint)(uVar3 < uVar1) + (int)((ulonglong)uVar9 * (ulonglong)param_5 >> 0x20);
    uVar5 = uVar10 * param_5 + uVar9;
    uVar4 = uVar5 + uVar12;
    puVar7[1] = uVar4;
    uVar1 = puVar11[2];
    uVar3 = puVar7[2];
    uVar4 = (uint)(uVar4 < uVar12) +
            (int)((ulonglong)uVar10 * (ulonglong)param_5 >> 0x20) + (uint)(uVar5 < uVar9);
    uVar9 = uVar1 * param_5 + uVar4;
    uVar10 = uVar9 + uVar3;
    puVar7[2] = uVar10;
    uVar12 = puVar7[3];
    uVar5 = puVar11[3];
    uVar10 = (uint)(uVar10 < uVar3) +
             (uint)(uVar9 < uVar4) + (int)((ulonglong)uVar1 * (ulonglong)param_5 >> 0x20);
    uVar4 = uVar5 * param_5 + uVar10;
    uVar9 = uVar4 + uVar12;
    puVar7[3] = uVar9;
    uVar3 = puVar7[4];
    uVar1 = puVar11[4];
    uVar4 = (uint)(uVar9 < uVar12) +
            (uint)(uVar4 < uVar10) + (int)((ulonglong)uVar5 * (ulonglong)param_5 >> 0x20);
    uVar9 = uVar1 * param_5 + uVar4;
    uVar10 = uVar9 + uVar3;
    puVar7[4] = uVar10;
    uVar12 = puVar7[5];
    uVar5 = puVar11[5];
    uVar4 = (uint)(uVar10 < uVar3) +
            (uint)(uVar9 < uVar4) + (int)((ulonglong)uVar1 * (ulonglong)param_5 >> 0x20);
    uVar9 = uVar5 * param_5 + uVar4;
    uVar10 = uVar9 + uVar12;
    puVar7[5] = uVar10;
    uVar3 = puVar7[6];
    uVar1 = puVar11[6];
    uVar9 = (uint)(uVar10 < uVar12) +
            (uint)(uVar9 < uVar4) + (int)((ulonglong)uVar5 * (ulonglong)param_5 >> 0x20);
    uVar12 = uVar1 * param_5 + uVar9;
    uVar4 = uVar12 + uVar3;
    puVar7[6] = uVar4;
    uVar5 = puVar11[7];
    uVar12 = (uint)(uVar4 < uVar3) +
             (uint)(uVar12 < uVar9) + (int)((ulonglong)uVar1 * (ulonglong)param_5 >> 0x20);
    uVar3 = uVar12 + uVar5 * param_5;
    uVar1 = puVar7[7];
    uVar4 = uVar3 + uVar1;
    puVar7[7] = uVar4;
    uVar1 = (uint)(uVar4 < uVar1) +
            (uint)(uVar3 < uVar12) + (int)((ulonglong)uVar5 * (ulonglong)param_5 >> 0x20);
    puVar7 = puVar7 + 8;
    puVar11 = puVar11 + 8;
  }
  iVar13 = (uVar6 >> 3) * 0x20;
  iVar8 = 0;
  while( true ) {
    puVar7 = (uint *)((int)param_1 + iVar8 + iVar13);
    if (iVar8 == (uVar6 & 7) << 2) break;
    uVar12 = *(uint *)((int)param_3 + iVar8 + iVar13);
    iVar8 = iVar8 + 4;
    uVar14 = uVar12 * param_5 + uVar1;
    uVar5 = uVar14 + *puVar7;
    uVar1 = (uint)(uVar14 < uVar1) + (int)((ulonglong)uVar12 * (ulonglong)param_5 >> 0x20) +
            (uint)(uVar5 < *puVar7);
    *puVar7 = uVar5;
  }
  while (iVar2 = iVar2 + -1, iVar2 != -1) {
    uVar6 = *puVar7;
    uVar1 = uVar1 + uVar6;
    *puVar7 = uVar1;
    uVar1 = (uint)(uVar1 < uVar6);
    puVar7 = puVar7 + 1;
  }
  return;
}

