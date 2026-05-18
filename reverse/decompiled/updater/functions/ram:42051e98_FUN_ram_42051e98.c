
void FUN_ram_42051e98(int *param_1,uint param_2)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_1 + 2);
  if (param_2 < uVar1) {
    sVar2 = (short)param_2;
    for (; uVar3 = (uint)*(ushort *)((int)param_1 + 10), uVar3 < param_2; param_1 = (int *)*param_1)
    {
      param_2 = param_2 - uVar3 & 0xffff;
      *(ushort *)(param_1 + 2) = (short)param_1[2] + (sVar2 - uVar1);
    }
    if ((((*(byte *)(param_1 + 3) & 0xf) == 0) && (uVar3 != param_2)) &&
       ((*(byte *)((int)param_1 + 0xd) & 2) == 0)) {
      FUN_ram_4205142a(param_1,(param_1[1] - (int)param_1) + param_2);
    }
    *(short *)((int)param_1 + 10) = (short)param_2;
    *(short *)(param_1 + 2) = (short)param_2;
    if (*param_1 != 0) {
      FUN_ram_42051d02();
    }
    *param_1 = 0;
    return;
  }
  return;
}

