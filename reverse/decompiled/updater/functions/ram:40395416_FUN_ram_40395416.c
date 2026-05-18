
undefined4 FUN_ram_40395416(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  if (*(char *)((int)param_1 + 0x46) == '\x01') {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *param_1;
    }
    *param_3 = (int)param_1;
    return 1;
  }
  return 0;
}

