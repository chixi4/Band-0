
void FUN_ram_4201ea2a(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1[1] != 0) {
    *(int **)(param_1[1] + 4) = param_2;
  }
  iVar1 = param_1[1];
  param_2[1] = 0;
  *param_2 = iVar1;
  param_1[1] = (int)param_2;
  if (*param_1 == 0) {
    *param_1 = (int)param_2;
  }
  param_1[2] = param_1[2] + 1;
  return;
}

