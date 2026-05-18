
uint FUN_ram_420540d0(int *param_1,uint param_2)

{
  ushort *puVar1;
  
  while( true ) {
    if (param_1 == (int *)0x0) {
      return 0xffffffff;
    }
    puVar1 = (ushort *)((int)param_1 + 10);
    if (param_2 < *puVar1) break;
    param_1 = (int *)*param_1;
    param_2 = param_2 - *puVar1 & 0xffff;
  }
  return (uint)*(byte *)(param_1[1] + param_2);
}

