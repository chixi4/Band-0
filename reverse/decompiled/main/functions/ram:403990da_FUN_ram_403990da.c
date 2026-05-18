
undefined4 FUN_ram_403990da(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  if ((param_3 == (undefined4 *)0x0) || (param_4 == (undefined4 *)0x0)) {
    return 0;
  }
  if (param_1 + 0xbe000000U < 0x200000) {
    if (0x1fffff < param_2 + param_1 + 0xbdffffffU) {
      return 0;
    }
  }
  else {
    if (0x1fffff < param_1 + 0xc4000000U) {
      return 0;
    }
    if (0x1fffff < param_2 + param_1 + 0xc3ffffffU) {
      return 0;
    }
  }
  *param_3 = 1;
  *param_4 = 0;
  return 1;
}

