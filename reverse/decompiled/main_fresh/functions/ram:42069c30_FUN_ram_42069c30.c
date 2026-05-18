
void FUN_ram_42069c30(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = FUN_ram_42069786(param_4);
  iVar2 = 0;
  for (iVar4 = 0; iVar4 != param_3 << 2; iVar4 = iVar4 + 4) {
    uVar3 = *(uint *)(param_1 + iVar4);
    uVar5 = uVar1 & *(uint *)(param_2 + iVar4);
    uVar6 = uVar3 + iVar2;
    uVar7 = uVar6 + uVar5;
    iVar2 = (uint)(uVar7 < uVar5) + (uint)(uVar6 < uVar3);
    *(uint *)(param_1 + iVar4) = uVar7;
  }
  return;
}

