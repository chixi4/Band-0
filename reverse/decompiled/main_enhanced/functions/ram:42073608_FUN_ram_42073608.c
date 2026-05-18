
int * FUN_ram_42073608(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_ram_3c0fa408;
  while( true ) {
    if (*piVar1 == 0) {
      return (int *)0x0;
    }
    if ((piVar1[1] == *(int *)(param_1 + 4)) &&
       (iVar2 = FUN_ram_4039c0e0(*piVar1,*(undefined4 *)(param_1 + 8)), iVar2 == 0)) break;
    piVar1 = piVar1 + 6;
  }
  return piVar1;
}

