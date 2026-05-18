
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42020da0(int param_1)

{
  int *piVar1;
  
  piVar1 = _DAT_ram_3fcb6748;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return 1;
}

