
void FUN_ram_4202aa8c(int *param_1)

{
  while ((int *)*param_1 != (int *)0x0) {
    *param_1 = *(int *)*param_1;
    FUN_ram_420297a8();
  }
  return;
}

