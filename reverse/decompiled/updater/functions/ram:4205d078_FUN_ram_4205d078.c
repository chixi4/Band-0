
undefined4 FUN_ram_4205d078(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)*param_1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[2];
    thunk_FUN_ram_40390608(*puVar1);
    thunk_FUN_ram_40390608(puVar1[1]);
    thunk_FUN_ram_40390608(puVar1);
    puVar1 = puVar2;
  }
  *param_1 = 0;
  param_1[1] = (int)param_1;
  return 0;
}

