
void FUN_ram_4206db40(int param_1)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    *(undefined4 *)(param_1 + 0x68) = 1;
    *(undefined4 *)(param_1 + 0x70) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x70) == 1) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    thunk_FUN_ram_42097174(*(undefined4 *)(param_1 + 0x6c),param_1 + 8);
    return;
  }
  return;
}

