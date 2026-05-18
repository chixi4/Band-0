
void FUN_ram_42057234(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 7) & 2) == 0) {
      thunk_FUN_ram_40390608();
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

