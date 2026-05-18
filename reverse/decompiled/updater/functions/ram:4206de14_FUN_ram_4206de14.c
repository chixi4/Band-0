
void FUN_ram_4206de14(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x9c) + 5;
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0x9c) + 3;
  *(int *)(param_1 + 0xa4) = iVar1;
  *(int *)(param_1 + 0xa8) = iVar1;
  if (param_2 != 0) {
    *(int *)(param_1 + 0xa8) = iVar1 + (*(int *)(param_2 + 4) - *(int *)(param_2 + 8));
  }
  return;
}

