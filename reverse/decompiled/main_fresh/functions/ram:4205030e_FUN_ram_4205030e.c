
int * FUN_ram_4205030e(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_ram_420500ca();
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      return piVar1;
    }
    FUN_ram_4205027e();
  }
  return (int *)0x0;
}

