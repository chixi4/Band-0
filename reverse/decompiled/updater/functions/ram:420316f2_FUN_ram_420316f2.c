
int * FUN_ram_420316f2(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_ram_3c078a1c;
  while( true ) {
    if (*piVar1 == 0) {
      return (int *)0x0;
    }
    if ((piVar1[1] == *(int *)(param_1 + 4)) &&
       (iVar2 = FUN_ram_40399d6c(*piVar1,*(undefined4 *)(param_1 + 8)), iVar2 == 0)) break;
    piVar1 = piVar1 + 6;
  }
  return piVar1;
}

