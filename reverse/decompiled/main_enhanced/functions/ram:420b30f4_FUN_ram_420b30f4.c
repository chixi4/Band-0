
undefined4 FUN_ram_420b30f4(int *param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  piVar1 = (int *)FUN_ram_4039c08e(1,0xc);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)FUN_ram_4039c08e(1,8);
    if (piVar2 != (int *)0x0) {
      puVar3 = (undefined4 *)*param_1;
      *piVar2 = param_2;
      piVar2[1] = param_3;
      *piVar1 = (int)piVar2;
      if (puVar3 == (undefined4 *)0x0) {
        piVar1[1] = 0;
        *param_1 = (int)piVar1;
      }
      else {
        do {
          puVar4 = puVar3;
          if ((param_5 != 0) && (*(int *)*puVar4 == param_2)) {
            ((int *)*puVar4)[1] = param_3;
            thunk_FUN_ram_40390634(piVar1);
            thunk_FUN_ram_40390634(piVar2);
            return 0;
          }
          puVar3 = (undefined4 *)puVar4[1];
        } while ((undefined4 *)puVar4[1] != (undefined4 *)0x0);
        piVar1[1] = 0;
        puVar4[1] = piVar1;
      }
      if (param_4 != (int *)0x0) {
        *param_4 = (int)piVar2;
      }
      return 0;
    }
    thunk_FUN_ram_40390634(piVar1);
  }
  return 0x101;
}

