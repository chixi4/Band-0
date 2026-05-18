
void FUN_ram_4202a856(int param_1)

{
  if (*(int *)(param_1 + 100) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 1;
    *(undefined4 *)(param_1 + 100) = 1;
    return;
  }
  if (*(int *)(param_1 + 100) == 1) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    thunk_FUN_ram_4204e2a4(*(undefined4 *)(param_1 + 0x60),param_1 + 8);
    return;
  }
  return;
}

