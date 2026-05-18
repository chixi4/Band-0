
void FUN_ram_42053dbc(int *param_1,int param_2)

{
  short sVar1;
  short extraout_a5;
  short sVar2;
  undefined8 uVar3;
  
  if (param_1 != (int *)0x0) {
    if (param_2 == 0) {
      return;
    }
    while( true ) {
      if ((int *)*param_1 == (int *)0x0) break;
      *(short *)(param_1 + 2) = (short)param_1[2] + *(short *)(param_2 + 8);
      param_1 = (int *)*param_1;
    }
    sVar2 = *(short *)((int)param_1 + 10);
    if (sVar2 != (short)param_1[2]) {
      uVar3 = FUN_ram_4039bf1e();
      param_2 = (int)((ulonglong)uVar3 >> 0x20);
      param_1 = (int *)uVar3;
      sVar2 = extraout_a5;
    }
    sVar1 = *(short *)(param_2 + 8);
    *param_1 = param_2;
    *(short *)(param_1 + 2) = sVar2 + sVar1;
  }
  return;
}

