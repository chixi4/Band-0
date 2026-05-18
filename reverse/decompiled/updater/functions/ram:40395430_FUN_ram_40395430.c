
int FUN_ram_40395430(uint param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  
  if ((((param_1 == 0) || ((int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20) != 0)) ||
      (0xffffffab < param_1 * param_2)) ||
     (piVar1 = (int *)FUN_ram_40394eda(param_1 * param_2 + 0x54), piVar1 == (int *)0x0)) {
    piVar1 = (int *)0x0;
  }
  else {
    *(undefined1 *)((int)piVar1 + 0x46) = 0;
    piVar2 = piVar1;
    if (param_2 != 0) {
      piVar2 = piVar1 + 0x15;
    }
    *piVar1 = (int)piVar2;
    piVar1[0xf] = param_1;
    piVar1[0x10] = param_2;
    FUN_ram_40395350(piVar1,1);
    piVar1[0x12] = 0;
  }
  return (int)piVar1;
}

