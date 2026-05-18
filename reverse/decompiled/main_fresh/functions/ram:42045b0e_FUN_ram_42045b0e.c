
int * FUN_ram_42045b0e(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar2 = param_1[2];
    if ((uint)param_1[1] <= (uint)param_1[2]) {
      return param_1;
    }
    do {
      uVar1 = uVar2;
      uVar2 = uVar1 + 1;
      if (0x20 < *(byte *)(*param_1 + uVar2 + -1)) {
        return param_1;
      }
      param_1[2] = uVar2;
    } while (param_1[1] != uVar2);
    param_1[2] = uVar1;
    return param_1;
  }
  return (int *)0x0;
}

