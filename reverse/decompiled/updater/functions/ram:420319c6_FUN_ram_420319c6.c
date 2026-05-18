
undefined4 FUN_ram_420319c6(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0xffffffd2;
  }
  piVar1 = (int *)&DAT_ram_3c0787b8;
  while( true ) {
    if (*piVar1 == 0) {
      return 0xffffffd2;
    }
    if ((piVar1[1] == *(int *)(param_1 + 4)) &&
       (iVar2 = FUN_ram_40399d6c(*piVar1,*(undefined4 *)(param_1 + 8)), iVar2 == 0)) break;
    piVar1 = piVar1 + 6;
  }
  *param_2 = piVar1[4];
  *param_3 = piVar1[5];
  return 0;
}

