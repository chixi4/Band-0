
void FUN_ram_42054b8a(int param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_ram_420548c6();
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  return;
}

