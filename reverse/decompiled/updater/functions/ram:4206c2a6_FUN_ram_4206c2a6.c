
void FUN_ram_4206c2a6(undefined4 *param_1,int param_2,undefined4 param_3)

{
  if (param_1 != (undefined4 *)0x0) {
    if (param_2 == 4) {
      *param_1 = param_3;
      return;
    }
    if ((param_2 == 2) || (param_2 == 5)) {
      param_1[1] = param_3;
      return;
    }
    if ((param_2 == 3) || (param_2 == 6)) {
      param_1[2] = param_3;
      return;
    }
    if (param_2 == 1) {
      param_1[3] = param_3;
    }
  }
  return;
}

