
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_4205c4d4(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)0;
  if (param_1 != (int *)0x0) {
    piVar1 = _DAT_ram_3fcc52d8;
    piVar2 = (int *)0;
    if (*param_1 != 0) {
      for (; (piVar2 = piVar1, piVar1 != (int *)0x0 &&
             (((((*(byte *)((int)piVar1 + 0x39) & 1) == 0 ||
                ((*(byte *)((int)piVar1 + 0x39) >> 2 & 1) == 0)) || (piVar1[1] == 0)) ||
              (*param_1 != piVar1[1])))); piVar1 = (int *)*piVar1) {
      }
    }
  }
  return piVar2;
}

