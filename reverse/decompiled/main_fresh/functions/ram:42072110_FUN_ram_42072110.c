
int * FUN_ram_42072110(uint param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_ram_3c0fa160;
  while( true ) {
    if (*piVar1 == 0) {
      return (int *)0x0;
    }
    if (*(ushort *)(piVar1 + 1) == param_1) break;
    piVar1 = piVar1 + 3;
  }
  return piVar1;
}

