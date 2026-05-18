
void FUN_ram_42062e72(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    *param_1 = 0;
    while (puVar1 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar1;
      thunk_FUN_ram_40390608();
    }
    FUN_ram_42062b3e(param_1);
    FUN_ram_4205f052(0x42052b8e,param_1,0);
    thunk_FUN_ram_40390608(param_1);
    return;
  }
  return;
}

