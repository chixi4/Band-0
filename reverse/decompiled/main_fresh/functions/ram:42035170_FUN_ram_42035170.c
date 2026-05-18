
void FUN_ram_42035170(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  uVar2 = 0;
  for (iVar3 = 0; iVar3 < param_4; iVar3 = (iVar3 + 1) * 0x1000000 >> 0x18) {
    uVar1 = *(uint *)(param_2 + iVar4);
    uVar5 = (uVar1 - uVar2) - *(int *)(param_3 + iVar4);
    uVar2 = -(uint)(uVar1 == uVar5) & uVar2 | (uint)(uVar1 < uVar5);
    *(uint *)(param_1 + iVar4) = uVar5;
    iVar4 = iVar4 + 4;
  }
  return;
}

