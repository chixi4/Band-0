
void FUN_ram_4205b1de(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    FUN_ram_42051d02();
    param_1[1] = 0;
    *param_1 = 0;
  }
  FUN_ram_4205151c(5);
  return;
}

