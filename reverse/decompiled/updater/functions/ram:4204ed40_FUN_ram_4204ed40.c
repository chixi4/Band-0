
int * FUN_ram_4204ed40(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_ram_4204e8a0();
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      return piVar1;
    }
    FUN_ram_4204ecbc();
  }
  return (int *)0x0;
}

