
undefined4 FUN_ram_42012cf2(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar1 = FUN_ram_42012bde();
  if (iVar1 == 0) {
    return 2;
  }
  piVar2 = (int *)FUN_ram_403989cc(0,0);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_ram_4039c08e(1,4);
    if (piVar2 != (int *)0x0) {
      FUN_ram_40399014(0,0,piVar2,0x42002c18);
      goto LAB_ram_42012d4c;
    }
LAB_ram_42012d26:
    uVar3 = 0xc;
  }
  else {
LAB_ram_42012d4c:
    piVar6 = (int *)*piVar2;
    for (piVar4 = piVar6; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
      if (param_1 == *piVar4) {
        if (param_2 == 0) {
          if (piVar6 == piVar4) {
            *piVar2 = piVar4[2];
          }
          else {
            do {
              piVar2 = piVar6;
              piVar6 = (int *)piVar2[2];
            } while (piVar6 != piVar4);
            piVar2[2] = piVar4[2];
          }
          thunk_FUN_ram_40390634(piVar4);
        }
        else {
          piVar4[1] = param_2;
        }
        goto LAB_ram_42012d8a;
      }
    }
    if (param_2 != 0) {
      piVar4 = (int *)thunk_FUN_ram_403904a6(0xc);
      if (piVar4 == (int *)0x0) goto LAB_ram_42012d26;
      iVar5 = *piVar2;
      *piVar4 = param_1;
      piVar4[1] = param_2;
      iVar1 = 0;
      for (iVar7 = iVar5; iVar7 != 0; iVar7 = *(int *)(iVar7 + 8)) {
        iVar1 = iVar7;
      }
      if (iVar1 == 0) {
        piVar4[2] = iVar5;
        *piVar2 = (int)piVar4;
      }
      else {
        piVar4[2] = *(int *)(iVar1 + 8);
        *(int **)(iVar1 + 8) = piVar4;
      }
    }
LAB_ram_42012d8a:
    uVar3 = 0;
  }
  return uVar3;
}

