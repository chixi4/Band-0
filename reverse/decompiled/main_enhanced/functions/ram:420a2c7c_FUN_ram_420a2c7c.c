
undefined4 FUN_ram_420a2c7c(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  if (((param_1 != (undefined4 *)0x0) && (param_2 < 7)) && (param_3 != (undefined4 *)0x0)) {
    if (param_2 == 4) {
      *param_3 = *param_1;
      *param_1 = 0;
    }
    else if ((param_2 == 2) || (param_2 == 5)) {
      *param_3 = param_1[1];
      param_1[1] = 0;
    }
    else if ((param_2 == 3) || (param_2 == 6)) {
      *param_3 = param_1[2];
      param_1[2] = 0;
    }
    else {
      if (param_2 != 1) {
        return 0x102;
      }
      *param_3 = param_1[3];
      param_1[3] = 0;
    }
    return 0;
  }
  return 0x102;
}

