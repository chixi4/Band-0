
void FUN_ram_4202bcde(int param_1)

{
  if (param_1 != 0) {
    do {
      param_1 = *(int *)(param_1 + 0x18);
      FUN_ram_420293a0();
    } while (param_1 != 0);
    return;
  }
  return;
}

