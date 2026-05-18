
undefined4 FUN_ram_420363fc(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)0x0;
  for (piVar2 = *(int **)(param_1 + 0x38); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    if (*(ushort *)(piVar2 + 2) == *(ushort *)(param_2 + 2)) {
      return 2;
    }
    if (*(ushort *)(param_2 + 2) < *(ushort *)(piVar2 + 2)) break;
    piVar1 = piVar2;
  }
  if (piVar1 == (int *)0x0) {
    *param_2 = (int)*(int **)(param_1 + 0x38);
    *(int **)(param_1 + 0x38) = param_2;
  }
  else {
    *param_2 = *piVar1;
    *piVar1 = (int)param_2;
  }
  return 0;
}

