
undefined4 FUN_ram_4203194e(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_ram_3c078878;
  while( true ) {
    if (*piVar1 == 0) {
      return 0xffffffd2;
    }
    if (piVar1[4] == param_1) break;
    piVar1 = piVar1 + 5;
  }
  iVar2 = piVar1[1];
  *param_2 = *piVar1;
  *param_3 = iVar2;
  return 0;
}

