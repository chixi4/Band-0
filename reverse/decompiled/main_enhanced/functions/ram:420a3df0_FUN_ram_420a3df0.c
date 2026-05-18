
int * FUN_ram_420a3df0(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_ram_3c0fb2f0;
  while( true ) {
    if (*piVar1 == 0) {
      return (int *)0x0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 4;
  }
  return piVar1;
}

