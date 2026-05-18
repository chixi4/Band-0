
void FUN_ram_420a5254(int param_1)

{
  if (param_1 != 0) {
    do {
      param_1 = *(int *)(param_1 + 8);
      FUN_ram_4206d7d4();
    } while (param_1 != 0);
    return;
  }
  return;
}

