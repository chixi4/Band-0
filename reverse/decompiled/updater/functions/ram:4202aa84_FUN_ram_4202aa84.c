
void FUN_ram_4202aa84(int param_1)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    *(undefined4 *)(param_1 + 0x68) = 1;
    *(undefined4 *)(param_1 + 0x70) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x70) == 1) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    thunk_FUN_ram_4204e2a4(*(undefined4 *)(param_1 + 0x6c),param_1 + 8);
    return;
  }
  return;
}

