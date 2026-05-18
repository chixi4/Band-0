
void FUN_ram_420977f2(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x4c) == 1) {
    *(undefined4 *)(param_1 + 0x4c) = 3;
    return;
  }
  thunk_FUN_ram_40390634();
  return;
}

