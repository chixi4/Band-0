
undefined4 FUN_ram_420b2f52(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  
  piVar8 = *(int **)(*param_1 + 0x14);
  do {
    while( true ) {
      piVar2 = piVar8;
      if (piVar2 == (int *)0x0) {
        return 0x105;
      }
      pcVar7 = (char *)param_1[1];
      piVar8 = (int *)piVar2[2];
      iVar6 = param_1[2];
      if ((pcVar7 == "scope, not add features.") && (iVar6 == -1)) break;
      puVar9 = (undefined4 *)piVar2[1];
      while (puVar1 = puVar9, puVar1 != (undefined4 *)0x0) {
        puVar9 = (undefined4 *)puVar1[3];
        if (pcVar7 == (char *)*puVar1) {
          if (iVar6 == -1) {
            iVar3 = FUN_ram_420b2ee0(puVar1 + 1);
            if (iVar3 == 0) goto LAB_ram_420b3016;
          }
          else {
            piVar10 = (int *)puVar1[2];
            while (piVar5 = piVar10, piVar5 != (int *)0x0) {
              piVar10 = (int *)piVar5[2];
              if ((iVar6 == *piVar5) && (iVar3 = FUN_ram_420b2ee0(piVar5 + 1), iVar3 == 0)) {
                if (piVar5[1] == 0) {
                  piVar8 = (int *)puVar1[2];
                  if (piVar5 == (int *)puVar1[2]) {
                    puVar1[2] = piVar5[2];
                  }
                  else {
                    do {
                      piVar10 = piVar8;
                      piVar8 = (int *)piVar10[2];
                    } while (piVar5 != piVar8);
                    piVar10[2] = piVar5[2];
                  }
                  thunk_FUN_ram_40390634(piVar5);
                }
                goto LAB_ram_420b3016;
              }
            }
          }
        }
      }
    }
    iVar6 = FUN_ram_420b2ee0(piVar2);
  } while (iVar6 != 0);
LAB_ram_420b2fa4:
  if ((piVar2[1] == 0) && (*piVar2 == 0)) {
    piVar8 = *(int **)(*param_1 + 0x14);
    if (piVar8 == piVar2) {
      *(int *)(*param_1 + 0x14) = piVar2[2];
    }
    else {
      do {
        piVar10 = piVar8;
        piVar8 = (int *)piVar10[2];
      } while (piVar8 != piVar2);
      piVar10[2] = piVar2[2];
    }
    thunk_FUN_ram_40390634(piVar2);
  }
  return 0;
LAB_ram_420b3016:
  if ((puVar1[1] == 0) && (puVar1[2] == 0)) {
    puVar9 = (undefined4 *)piVar2[1];
    if (puVar1 == (undefined4 *)piVar2[1]) {
      piVar2[1] = puVar1[3];
    }
    else {
      do {
        puVar4 = puVar9;
        puVar9 = (undefined4 *)puVar4[3];
      } while (puVar1 != puVar9);
      puVar4[3] = puVar1[3];
    }
    thunk_FUN_ram_40390634(puVar1);
  }
  goto LAB_ram_420b2fa4;
}

