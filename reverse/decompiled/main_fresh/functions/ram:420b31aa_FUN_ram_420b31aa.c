
undefined4
FUN_ram_420b31aa(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar3 = param_1;
  if (param_2 != -1) {
    piVar3 = (int *)0x0;
    piVar7 = (int *)param_1[2];
    piVar1 = piVar7;
    piVar6 = (int *)0x0;
    while (piVar5 = piVar1, piVar5 != (int *)0x0) {
      if (*piVar5 == param_2) {
        piVar3 = piVar5;
      }
      piVar6 = piVar5;
      piVar1 = (int *)piVar5[2];
    }
    if ((piVar6 == (int *)0x0) || (piVar3 == (int *)0x0)) {
      piVar3 = (int *)FUN_ram_4039c08e(1,0xc);
      if (piVar3 != (int *)0x0) {
        *piVar3 = param_2;
        piVar3[1] = 0;
        iVar4 = FUN_ram_420b30f4(piVar3 + 1,param_3,param_4,param_5,param_6);
        if (iVar4 == 0) {
          if (piVar6 == (int *)0x0) {
            piVar3[2] = (int)piVar7;
            param_1[2] = (int)piVar3;
            return 0;
          }
          piVar3[2] = piVar6[2];
          piVar6[2] = (int)piVar3;
          return 0;
        }
        thunk_FUN_ram_40390634(piVar3);
      }
      return 0x101;
    }
  }
  uVar2 = FUN_ram_420b30f4(piVar3 + 1,param_3);
  return uVar2;
}

