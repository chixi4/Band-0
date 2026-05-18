
undefined4 FUN_ram_420737c6(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0xffffffd2;
  }
  piVar1 = &DAT_ram_3c0fa2b4;
  while( true ) {
    if (*piVar1 == 0) {
      return 0xffffffd2;
    }
    if ((piVar1[1] == *(int *)(param_1 + 4)) &&
       (iVar2 = FUN_ram_4039c0e0(*piVar1,*(undefined4 *)(param_1 + 8)), iVar2 == 0)) break;
    piVar1 = piVar1 + 5;
  }
  *param_2 = piVar1[4];
  return 0;
}

