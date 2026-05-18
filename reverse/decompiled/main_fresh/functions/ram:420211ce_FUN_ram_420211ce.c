
uint FUN_ram_420211ce(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if ((((param_1 != (int *)0x0) && (*(char *)((int)param_1 + 6) != '\0')) && (-1 < param_2)) &&
     ((uVar1 = (uint)*(byte *)((int)param_1 + 5), param_2 < (int)uVar1 && (param_3 < uVar1)))) {
    uVar1 = param_2 + param_3 * uVar1;
    return (int)(uint)*(byte *)(*param_1 + ((int)uVar1 >> 3)) >> (~uVar1 & 7) & 1;
  }
  return 0;
}

