
void FUN_ram_4205e6e8(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    FUN_ram_42053ac4();
    param_1[1] = 0;
    *param_1 = 0;
  }
  FUN_ram_420531f8(5);
  return;
}

