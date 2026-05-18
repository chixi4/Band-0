
void FUN_ram_420a5988(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x60) != 0) {
      FUN_ram_4206d7d4();
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    FUN_ram_4206d7da(param_1,0x74);
    return;
  }
  return;
}

