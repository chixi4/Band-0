
int FUN_ram_420658ce(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = param_2 + iVar1;
  return *(int *)(param_1 + 8) + iVar1;
}

