
void FUN_ram_42034f50(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  
  uVar3 = 0;
  uVar5 = 0;
  for (iVar1 = 0; (char)iVar1 < param_4; iVar1 = iVar1 + 1) {
    puVar10 = (uint *)(param_3 + iVar1 * 4);
    iVar11 = 0;
    uVar9 = uVar3;
    uVar3 = 0;
    do {
      uVar4 = *(uint *)(iVar11 * 4 + param_2);
      uVar7 = uVar4 * *puVar10;
      uVar4 = (uint)((ulonglong)uVar4 * (ulonglong)*puVar10 >> 0x20);
      uVar5 = uVar5 + uVar7;
      uVar9 = uVar9 + uVar4 + (uint)(uVar5 < uVar7);
      iVar8 = 1;
      if ((uVar4 <= uVar9) && ((uVar4 != uVar9 || (uVar7 <= uVar5)))) {
        iVar8 = 0;
      }
      iVar11 = iVar11 + 1;
      uVar3 = uVar3 + iVar8;
      puVar10 = puVar10 + -1;
    } while (iVar11 * 0x1000000 >> 0x18 <= (int)(char)iVar1);
    *(uint *)(iVar1 * 4 + param_1) = uVar5;
    uVar5 = uVar9;
  }
  for (uVar9 = 1; iVar1 = (int)((uVar9 + param_4 + -1) * 0x1000000) >> 0x18,
      iVar1 < param_4 * 2 + -1; uVar9 = uVar9 + 1 & 0xff) {
    uVar4 = 0;
    uVar7 = uVar3;
    for (iVar11 = (int)(char)uVar9; (char)iVar11 < param_4; iVar11 = iVar11 + 1) {
      uVar6 = *(uint *)(iVar11 * 4 + param_2);
      uVar3 = *(uint *)(iVar1 * 4 + iVar11 * -4 + param_3);
      uVar2 = uVar3 * uVar6;
      uVar3 = (uint)((ulonglong)uVar3 * (ulonglong)uVar6 >> 0x20);
      uVar5 = uVar5 + uVar2;
      uVar7 = (uint)(uVar5 < uVar2) + uVar7 + uVar3;
      iVar8 = 1;
      if ((uVar3 <= uVar7) && ((uVar3 != uVar7 || (uVar2 <= uVar5)))) {
        iVar8 = 0;
      }
      uVar4 = uVar4 + iVar8;
    }
    *(uint *)(iVar1 * 4 + param_1) = uVar5;
    uVar3 = uVar4;
    uVar5 = uVar7;
  }
  *(uint *)(param_1 + param_4 * 8 + -4) = uVar5;
  return;
}

