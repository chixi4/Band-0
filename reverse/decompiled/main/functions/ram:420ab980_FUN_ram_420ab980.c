
void FUN_ram_420ab980(int param_1)

{
  if (param_1 != 0) {
    do {
      param_1 = *(int *)(param_1 + 0x1c);
      FUN_ram_420531f8(0xc);
    } while (param_1 != 0);
    return;
  }
  return;
}

