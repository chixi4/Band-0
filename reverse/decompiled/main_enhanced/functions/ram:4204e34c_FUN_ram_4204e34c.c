
void FUN_ram_4204e34c(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  while (piVar1 = (int *)*param_1, piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[1];
    if (iVar2 == 0) {
      *param_1 = (int)piVar1;
    }
    else {
      *(int **)(iVar2 + 4) = piVar1;
    }
    if (piVar1 == (int *)0x0) {
      param_1[1] = iVar2;
    }
    else {
      *piVar1 = iVar2;
    }
    param_1[2] = param_1[2] + -1;
    thunk_FUN_ram_40390634();
  }
  return;
}

