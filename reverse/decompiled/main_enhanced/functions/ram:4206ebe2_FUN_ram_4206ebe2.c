
void FUN_ram_4206ebe2(int param_1)

{
  if (param_1 != 0) {
    do {
      param_1 = *(int *)(param_1 + 0xc);
      FUN_ram_4206d7d4();
    } while (param_1 != 0);
    return;
  }
  return;
}

