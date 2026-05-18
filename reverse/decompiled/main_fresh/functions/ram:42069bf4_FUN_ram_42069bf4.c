
void FUN_ram_42069bf4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 != param_4 << 2; iVar2 = iVar2 + 4) {
    uVar3 = *(uint *)(param_2 + iVar2) + iVar1;
    uVar4 = uVar3 + *(uint *)(param_3 + iVar2);
    iVar1 = (uint)(uVar4 < *(uint *)(param_3 + iVar2)) + (uint)(uVar3 < *(uint *)(param_2 + iVar2));
    *(uint *)(param_1 + iVar2) = uVar4;
  }
  return;
}

