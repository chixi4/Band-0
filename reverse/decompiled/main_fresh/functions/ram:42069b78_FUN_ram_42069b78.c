
void FUN_ram_42069b78(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = param_3 >> 5;
  uVar2 = param_3 & 0x1f;
  if (0x1f < param_3) {
    puVar4 = (undefined4 *)(param_2 * 4 + param_1);
    for (uVar6 = param_2; puVar4 = puVar4 + -1, uVar3 < uVar6; uVar6 = uVar6 - 1) {
      *puVar4 = puVar4[-uVar3];
    }
    iVar5 = 0;
    if (uVar3 <= param_2) {
      iVar5 = uVar3 - param_2;
    }
    for (iVar5 = (iVar5 + param_2) * 4 + param_1; param_1 != iVar5; iVar5 = iVar5 + -4) {
      *(undefined4 *)(iVar5 + -4) = 0;
    }
  }
  if (uVar2 != 0) {
    puVar1 = (uint *)(param_1 + uVar3 * 4);
    uVar6 = 0;
    for (; uVar3 < param_2; uVar3 = uVar3 + 1) {
      uVar7 = *puVar1;
      *puVar1 = uVar7 << uVar2 | uVar6;
      uVar6 = uVar7 >> (0x20 - uVar2 & 0x1f);
      puVar1 = puVar1 + 1;
    }
  }
  return;
}

