
undefined4 FUN_ram_4206ca08(int param_1)

{
  if (param_1 != 0) {
    if (*(code **)(param_1 + 0x24) != (code *)0x0) {
      (**(code **)(param_1 + 0x24))();
    }
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_ram_40390608();
    }
  }
  thunk_FUN_ram_40390608(param_1);
  return 0;
}

