
int * FUN_ram_4202f8e8(uint param_1)

{
  int *piVar1;
  
  piVar1 = (int *)&DAT_ram_3c0786e0;
  while( true ) {
    if (*piVar1 == 0) {
      return (int *)0x0;
    }
    if (*(ushort *)(piVar1 + 1) == param_1) break;
    piVar1 = piVar1 + 3;
  }
  return piVar1;
}

