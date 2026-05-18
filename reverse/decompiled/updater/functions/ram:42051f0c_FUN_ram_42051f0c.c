
undefined4 * FUN_ram_42051f0c(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  
  while( true ) {
    if (param_2 == 0) {
      return param_1;
    }
    if (param_1 == (undefined4 *)0x0) break;
    if (param_2 < *(ushort *)((int)param_1 + 10)) {
      FUN_ram_42051cb2(param_1);
      return param_1;
    }
    puVar1 = (undefined4 *)*param_1;
    param_2 = param_2 - *(ushort *)((int)param_1 + 10) & 0xffff;
    *param_1 = 0;
    FUN_ram_42051d02(param_1);
    param_1 = puVar1;
  }
  return (undefined4 *)0x0;
}

