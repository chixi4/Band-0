
void FUN_ram_4204f108(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = param_2;
  }
  *param_2 = iVar1;
  iVar1 = *param_1;
  param_2[1] = 0;
  param_1[1] = (int)param_2;
  if (iVar1 == 0) {
    *param_1 = (int)param_2;
  }
  param_1[2] = param_1[2] + 1;
  return;
}

