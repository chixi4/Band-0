
void FUN_ram_42055750(int param_1)

{
  if (*(char *)(param_1 + 0x46) != -1) {
    *(char *)(param_1 + 0x46) = *(char *)(param_1 + 0x46) + '\x01';
  }
  FUN_ram_420552e2();
  return;
}

