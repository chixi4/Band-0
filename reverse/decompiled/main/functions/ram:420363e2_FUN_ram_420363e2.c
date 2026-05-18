
int FUN_ram_420363e2(int param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x38);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)(piVar1 + 2) == param_2) break;
    if (param_2 < *(ushort *)(piVar1 + 2)) {
      return 0;
    }
    piVar1 = (int *)*piVar1;
  }
  return (int)piVar1;
}

