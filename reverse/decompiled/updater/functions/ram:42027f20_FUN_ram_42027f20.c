
int FUN_ram_42027f20(int *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_24 [4];
  
  if (param_1 == (int *)0x0) {
    return -0x6100;
  }
  iVar3 = -0x6100;
  if (((*param_1 != 0) && (param_2 != 0)) && (pbVar1 = (byte *)param_1[0x10], pbVar1 != (byte *)0x0)
     ) {
    iVar3 = *(int *)(pbVar1 + 0x20);
    uVar2 = *(uint *)(*param_1 + 4) & 0x1f;
    if ((iVar3 != 0) && (uVar2 - iVar3 < param_3)) {
      FUN_ram_40399daa(pbVar1 + iVar3 + 0x10);
      for (pbVar4 = pbVar1; pbVar4 != pbVar1 + uVar2; pbVar4 = pbVar4 + 1) {
        *pbVar4 = pbVar4[0x10] ^ *pbVar4;
      }
      iVar3 = FUN_ram_420274c2(param_1,pbVar1,uVar2,pbVar1,auStack_24);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = *(int *)(pbVar1 + 0x20);
      pbVar1[0x20] = 0;
      pbVar1[0x21] = 0;
      pbVar1[0x22] = 0;
      pbVar1[0x23] = 0;
      param_2 = param_2 + (uVar2 - iVar3);
      param_3 = (iVar3 + param_3) - uVar2;
    }
    uVar6 = (uVar2 - 1) + param_3;
    for (uVar7 = 1; uVar7 < uVar6 / uVar2; uVar7 = uVar7 + 1) {
      for (uVar5 = 0; uVar5 < uVar2; uVar5 = uVar5 + 1) {
        pbVar1[uVar5] = *(byte *)(param_2 + uVar5) ^ pbVar1[uVar5];
      }
      iVar3 = FUN_ram_420274c2(param_1,pbVar1,uVar2,pbVar1,auStack_24);
      if (iVar3 != 0) {
        return iVar3;
      }
      param_3 = param_3 - uVar2;
      param_2 = param_2 + uVar2;
    }
    if (param_3 != 0) {
      FUN_ram_40399daa(pbVar1 + *(int *)(pbVar1 + 0x20) + 0x10,param_2,param_3);
      *(uint *)(pbVar1 + 0x20) = *(int *)(pbVar1 + 0x20) + param_3;
    }
    iVar3 = 0;
  }
  return iVar3;
}

