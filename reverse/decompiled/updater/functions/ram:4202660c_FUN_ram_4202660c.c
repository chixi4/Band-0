
void FUN_ram_4202660c(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  for (iVar3 = 0; iVar3 != param_4 << 2; iVar3 = iVar3 + 4) {
    uVar2 = *(uint *)(param_2 + iVar3) - uVar1;
    uVar1 = (uint)(uVar2 < *(uint *)(param_3 + iVar3)) + (uint)(*(uint *)(param_2 + iVar3) < uVar1);
    *(uint *)(param_1 + iVar3) = uVar2 - *(uint *)(param_3 + iVar3);
  }
  return;
}

