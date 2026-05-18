
void FUN_ram_42065810(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_3 + iVar1;
    FUN_ram_40399daa(*(int *)(param_1 + 8) + iVar1);
    return;
  }
  return;
}

