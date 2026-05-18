
void FUN_ram_42034ee8(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar2 = 0;
  for (iVar4 = 0; iVar4 < param_4; iVar4 = (iVar4 + 1) * 0x1000000 >> 0x18) {
    uVar1 = *(uint *)(param_2 + iVar5);
    uVar3 = *(int *)(param_3 + iVar5) + uVar1 + uVar2;
    uVar2 = -(uint)(uVar1 == uVar3) & uVar2 | (uint)(uVar3 < uVar1);
    *(uint *)(param_1 + iVar5) = uVar3;
    iVar5 = iVar5 + 4;
  }
  return;
}

