
int FUN_ram_42023438(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  int *piVar11;
  int aiStack_140 [73];
  
  FUN_ram_420231ac(aiStack_140 + 2);
  param_1[1] = 0;
  iVar2 = FUN_ram_420231fe(aiStack_140 + 2,param_2,param_3);
  if (iVar2 == 0) {
    aiStack_140[3] = aiStack_140[2] * 4 + aiStack_140[3];
    iVar8 = aiStack_140[2] + -1;
    param_1[2] = aiStack_140[aiStack_140[3] + 4];
    iVar5 = aiStack_140[aiStack_140[3] + 5];
    *param_1 = aiStack_140[2];
    param_1[3] = iVar5;
    param_1[4] = aiStack_140[aiStack_140[3] + 6];
    param_1[5] = aiStack_140[aiStack_140[3] + 7];
    piVar10 = aiStack_140 + aiStack_140[3];
    piVar11 = param_1 + 6;
    for (iVar5 = iVar8; 0 < iVar5; iVar5 = iVar5 + -1) {
      iVar1 = 0;
      do {
        uVar7 = *(uint *)((int)piVar10 + iVar1);
        puVar9 = (uint *)((int)piVar11 + iVar1);
        iVar1 = iVar1 + 4;
        *puVar9 = *(uint *)((uint)*(byte *)((uVar7 & 0xff) + 0x3c077a38) * 4 + 0x3c076538) ^
                  *(uint *)((uint)*(byte *)((uVar7 >> 0x18) + 0x3c077a38) * 4 + 0x3c075938) ^
                  *(uint *)((uint)*(byte *)((uVar7 >> 8 & 0xff) + 0x3c077a38) * 4 + 0x3c076138) ^
                  *(uint *)((uint)*(byte *)((uVar7 >> 0x10 & 0xff) + 0x3c077a38) * 4 + 0x3c075d38);
      } while (iVar1 != 0x10);
      piVar11 = piVar11 + 4;
      piVar10 = piVar10 + -4;
    }
    puVar6 = (undefined4 *)((-(uint)(0 < aiStack_140[2]) & iVar8 * 0x10) + (int)(param_1 + 6));
    iVar5 = 0;
    if (0 < aiStack_140[2]) {
      iVar5 = iVar8 * -0x10;
    }
    puVar3 = (undefined4 *)((int)(aiStack_140 + aiStack_140[3]) + iVar5);
    *puVar6 = *puVar3;
    puVar6[1] = puVar3[1];
    uVar4 = puVar3[3];
    puVar6[2] = puVar3[2];
    puVar6[3] = uVar4;
  }
  FUN_ram_420293a6(aiStack_140 + 2,0x118);
  return iVar2;
}

