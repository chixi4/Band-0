
int FUN_ram_4206810c(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  
  iVar3 = FUN_ram_420680a2(param_1,*(undefined2 *)((int)param_2 + 6));
  if (iVar3 == 0) {
    uVar4 = FUN_ram_4206805c(param_3);
    uVar1 = *(undefined2 *)((int)param_2 + 6);
    uVar5 = *param_2;
    *(ushort *)(param_1 + 1) =
         ((short)param_1[1] + 1U & ~(ushort)uVar4 | *(short *)(param_2 + 1) + 1U & (ushort)uVar4) -
         1;
    FUN_ram_42069910(*param_1,uVar5,uVar1,uVar4);
    uVar2 = *(ushort *)((int)param_1 + 6);
    for (uVar7 = (uint)*(ushort *)((int)param_2 + 6); uVar7 < uVar2; uVar7 = uVar7 + 1) {
      puVar6 = (uint *)(*param_1 + uVar7 * 4);
      *puVar6 = *puVar6 & ~uVar4;
    }
  }
  return iVar3;
}

