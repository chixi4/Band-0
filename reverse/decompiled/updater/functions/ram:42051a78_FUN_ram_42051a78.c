
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42051a78(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  FUN_ram_420517cc(param_1,2,0);
  if (param_1[1] != 0) {
    piVar1 = param_1 + 1;
    FUN_ram_42053454(piVar1,0);
    FUN_ram_42056182(piVar1,0);
    FUN_ram_42052598(piVar1,0);
  }
  if ((*(byte *)((int)param_1 + 0x39) & 0x20) != 0) {
    FUN_ram_4205857e(param_1);
  }
  if ((*(byte *)((int)param_1 + 0x39) & 1) != 0) {
    FUN_ram_42051a34(param_1);
  }
  if (param_1 == _DAT_ram_3fcb67a8) {
    _DAT_ram_3fcb67a8 = (int *)0x0;
  }
  piVar1 = _DAT_ram_3fcb67ac;
  if (param_1 == _DAT_ram_3fcb67ac) {
    _DAT_ram_3fcb67ac = (int *)*param_1;
  }
  else {
    do {
      piVar2 = piVar1;
      if (piVar2 == (int *)0x0) {
        return;
      }
      piVar1 = (int *)*piVar2;
    } while (param_1 != (int *)*piVar2);
    *piVar2 = *param_1;
  }
  return;
}

