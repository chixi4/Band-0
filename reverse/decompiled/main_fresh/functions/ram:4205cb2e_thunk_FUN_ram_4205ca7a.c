
void thunk_FUN_ram_4205ca7a(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x4c) = 0;
    FUN_ram_42058690(0x4204cae2,param_1);
    return;
  }
  return;
}

