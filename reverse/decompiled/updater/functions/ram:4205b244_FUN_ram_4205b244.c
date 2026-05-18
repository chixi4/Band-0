
void FUN_ram_4205b244(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_ram_42051d02();
    }
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  return;
}

