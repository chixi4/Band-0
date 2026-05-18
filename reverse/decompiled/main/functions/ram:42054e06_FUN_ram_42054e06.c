
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42054e06(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    FUN_ram_42054dd4(param_1,_DAT_ram_3fcc52f0);
    FUN_ram_42054dd4(param_1,_DAT_ram_3fcc52f8);
    if ((param_2 != (int *)0x0) && (piVar1 = _DAT_ram_3fcc52f4, *param_2 != 0)) {
      for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3]) {
        if (*piVar1 == *param_1) {
          *piVar1 = *param_2;
        }
      }
    }
  }
  return;
}

