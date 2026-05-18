
void FUN_ram_4206a34e(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 != param_4 << 2; iVar2 = iVar2 + 4) {
    uVar1 = *(uint *)(param_2 + iVar2) - param_3;
    param_3 = (uint)(*(uint *)(param_2 + iVar2) < uVar1);
    *(uint *)(param_1 + iVar2) = uVar1;
  }
  return;
}

