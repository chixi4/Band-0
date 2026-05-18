
void FUN_ram_42053dbc(int *param_1,int param_2)

{
  short sVar1;
  
  if (param_1 != (int *)0x0) {
    if (param_2 == 0) {
      return;
    }
    while( true ) {
      if ((int *)*param_1 == (int *)0x0) break;
      *(short *)(param_1 + 2) = (short)param_1[2] + *(short *)(param_2 + 8);
      param_1 = (int *)*param_1;
    }
    if (*(short *)((int)param_1 + 10) != (short)param_1[2]) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
    sVar1 = *(short *)(param_2 + 8);
    *param_1 = param_2;
    *(short *)(param_1 + 2) = *(short *)((int)param_1 + 10) + sVar1;
  }
  return;
}

