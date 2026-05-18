
undefined4 FUN_ram_42079802(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  piVar7 = *(int **)(*param_1 + 0x14);
  do {
    while( true ) {
      piVar2 = piVar7;
      if (piVar2 == (int *)0x0) {
        return 0x105;
      }
      iVar6 = param_1[1];
      piVar7 = (int *)piVar2[2];
      iVar5 = param_1[2];
      if ((iVar6 == 0x3c071420) && (iVar5 == -1)) break;
      piVar8 = (int *)piVar2[1];
      while (piVar1 = piVar8, piVar1 != (int *)0x0) {
        piVar8 = (int *)piVar1[3];
        if (iVar6 == *piVar1) {
          if (iVar5 == -1) {
            iVar3 = FUN_ram_42079790(piVar1 + 1);
            if (iVar3 == 0) goto LAB_ram_420798c6;
          }
          else {
            piVar9 = (int *)piVar1[2];
            while (piVar4 = piVar9, piVar4 != (int *)0x0) {
              piVar9 = (int *)piVar4[2];
              if ((iVar5 == *piVar4) && (iVar3 = FUN_ram_42079790(piVar4 + 1), iVar3 == 0)) {
                if (piVar4[1] == 0) {
                  piVar7 = (int *)piVar1[2];
                  if (piVar4 == (int *)piVar1[2]) {
                    piVar1[2] = piVar4[2];
                  }
                  else {
                    do {
                      piVar8 = piVar7;
                      piVar7 = (int *)piVar8[2];
                    } while (piVar4 != piVar7);
                    piVar8[2] = piVar4[2];
                  }
                  thunk_FUN_ram_40390608(piVar4);
                }
                goto LAB_ram_420798c6;
              }
            }
          }
        }
      }
    }
    iVar5 = FUN_ram_42079790(piVar2);
  } while (iVar5 != 0);
LAB_ram_42079854:
  if ((piVar2[1] == 0) && (*piVar2 == 0)) {
    piVar7 = *(int **)(*param_1 + 0x14);
    if (piVar7 == piVar2) {
      *(int *)(*param_1 + 0x14) = piVar2[2];
    }
    else {
      do {
        piVar8 = piVar7;
        piVar7 = (int *)piVar8[2];
      } while (piVar7 != piVar2);
      piVar8[2] = piVar2[2];
    }
    thunk_FUN_ram_40390608(piVar2);
  }
  return 0;
LAB_ram_420798c6:
  if ((piVar1[1] == 0) && (piVar1[2] == 0)) {
    piVar7 = (int *)piVar2[1];
    if (piVar1 == (int *)piVar2[1]) {
      piVar2[1] = piVar1[3];
    }
    else {
      do {
        piVar8 = piVar7;
        piVar7 = (int *)piVar8[3];
      } while (piVar1 != piVar7);
      piVar8[3] = piVar1[3];
    }
    thunk_FUN_ram_40390608(piVar1);
  }
  goto LAB_ram_42079854;
}

