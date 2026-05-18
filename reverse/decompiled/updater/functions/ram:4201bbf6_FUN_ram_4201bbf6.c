
void FUN_ram_4201bbf6(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)&SUB_ram_40010918)(param_1[2]);
  iVar2 = param_1[1];
  if (*(int **)(iVar2 + 0x30) == param_1) {
    *(undefined4 *)(iVar2 + 0x30) = 0;
  }
  fence();
  *(undefined4 *)(iVar2 + (iVar1 + 2) * 4) = 0;
  fence();
  if (*param_1 != 0) {
    FUN_ram_4207b6ba();
  }
  thunk_FUN_ram_40390608(param_1);
  return;
}

