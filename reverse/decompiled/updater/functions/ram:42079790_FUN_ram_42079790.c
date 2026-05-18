
undefined4 FUN_ram_42079790(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  piVar3 = piVar4;
  do {
    while( true ) {
      piVar1 = piVar3;
      if (piVar1 == (int *)0x0) {
        return 0x105;
      }
      piVar3 = (int *)piVar1[1];
      piVar2 = (int *)*piVar1;
      if (param_3 != 0) break;
      if (piVar2 == param_2) {
        if (piVar1 == piVar4) {
          *param_1 = (int)piVar3;
        }
        else {
          do {
            piVar2 = piVar4;
            piVar4 = (int *)piVar2[1];
          } while (piVar4 != piVar1);
          piVar2[1] = (int)piVar3;
        }
LAB_ram_420797c4:
        thunk_FUN_ram_40390608(param_2);
        thunk_FUN_ram_40390608(piVar1);
        return 0;
      }
    }
  } while (*piVar2 != *param_2);
  param_2 = piVar2;
  if (piVar1 == piVar4) {
    *param_1 = (int)piVar3;
  }
  else {
    do {
      piVar2 = piVar4;
      piVar4 = (int *)piVar2[1];
    } while (piVar4 != piVar1);
    piVar2[1] = (int)piVar3;
  }
  goto LAB_ram_420797c4;
}

