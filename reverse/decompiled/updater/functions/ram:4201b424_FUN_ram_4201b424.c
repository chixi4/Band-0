
void FUN_ram_4201b424(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int in_a7;
  
  do {
    iVar6 = param_1 * 2 + 1;
    iVar5 = param_1 * 2 + 2;
    if (*(uint *)(iVar6 * 8 + param_2 + 0x598 + 4) >> 3 <
        *(uint *)(param_2 + 0x598 + iVar5 * 8 + 4) >> 3) {
      iVar5 = iVar6;
    }
    puVar1 = (undefined4 *)(param_1 * 8 + param_2 + 0x598);
    puVar4 = (undefined4 *)(param_2 + 0x598 + iVar5 * 8);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = *puVar4;
    puVar1[1] = puVar4[1];
    *puVar4 = uVar2;
    puVar4[1] = uVar3;
    param_1 = iVar5;
  } while (iVar5 <= in_a7);
  return;
}

