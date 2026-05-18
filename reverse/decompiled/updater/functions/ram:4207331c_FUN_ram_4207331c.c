
void FUN_ram_4207331c(int param_1)

{
  if (param_1 != 0) {
    do {
      param_1 = *(int *)(param_1 + 0x1c);
      FUN_ram_4205151c(0xc);
    } while (param_1 != 0);
    return;
  }
  return;
}

