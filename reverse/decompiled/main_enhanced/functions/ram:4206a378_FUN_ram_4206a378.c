
void FUN_ram_4206a378(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  for (iVar2 = 0; iVar2 != param_2; iVar2 = iVar2 + 1) {
    uVar1 = uVar1 | *(uint *)(iVar2 * 4 + param_1);
  }
  FUN_ram_42069786(uVar1);
  return;
}

