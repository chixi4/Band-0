
int * FUN_ram_4206d416(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)&DAT_ram_3c07a158;
  while( true ) {
    if (*piVar1 == 0) {
      return (int *)0x0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 4;
  }
  return piVar1;
}

