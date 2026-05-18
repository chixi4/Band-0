
int * FUN_ram_42019372(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 6;
  if ((char)param_1[6] == '\0') {
    piVar2 = (int *)0x0;
  }
  iVar1 = FUN_ram_420192d6(param_1[1],param_1[2],piVar2);
  while( true ) {
    if (iVar1 == 0) {
      return (int *)0x0;
    }
    piVar2 = *(int **)(iVar1 + 0x10);
    if ((((*piVar2 == *param_1) && (piVar2[3] == param_1[3])) && (param_1[4] == piVar2[4])) &&
       (*(char *)((int)param_1 + 0x29) == *(char *)((int)piVar2 + 0x29))) break;
    iVar1 = FUN_ram_42019248();
  }
  thunk_FUN_ram_40390608();
  return piVar2;
}

