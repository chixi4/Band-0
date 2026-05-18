
void FUN_ram_4209cfbc(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    *param_1 = 0;
    while (puVar1 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar1;
      thunk_FUN_ram_40390634();
    }
    FUN_ram_4209cc88(param_1);
    FUN_ram_420992a6(0x4208ccd8,param_1,0);
    thunk_FUN_ram_40390634(param_1);
    return;
  }
  return;
}

