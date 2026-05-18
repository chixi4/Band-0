
void FUN_ram_42052766(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_ram_42051d02();
  }
  FUN_ram_4205151c(4,param_1);
  return;
}

