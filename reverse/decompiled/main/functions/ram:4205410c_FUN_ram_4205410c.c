
void FUN_ram_4205410c(int *param_1,uint param_2,undefined1 param_3)

{
  ushort *puVar1;
  
  while( true ) {
    if (param_1 == (int *)0x0) {
      return;
    }
    puVar1 = (ushort *)((int)param_1 + 10);
    if (param_2 < *puVar1) break;
    param_1 = (int *)*param_1;
    param_2 = param_2 - *puVar1 & 0xffff;
  }
  *(undefined1 *)(param_1[1] + param_2) = param_3;
  return;
}

