
undefined4 FUN_ram_42054210(undefined4 *param_1,undefined4 *param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_1 = *param_2;
    return 0;
  }
  return 0xfffffffa;
}

