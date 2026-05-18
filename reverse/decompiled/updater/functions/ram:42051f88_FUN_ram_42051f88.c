
void FUN_ram_42051f88(int *param_1,int param_2)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    if (param_2 == 0) {
      return;
    }
    do {
      piVar1 = param_1;
      *(short *)(piVar1 + 2) = (short)piVar1[2] + *(short *)(param_2 + 8);
      param_1 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    *piVar1 = param_2;
  }
  return;
}

