
void FUN_ram_420b595e(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_42084c84(*(undefined4 *)(param_1 + 8),0);
    *(undefined4 *)(*(int *)(param_1 + 8) * 4 + 0x3fcc26cc) = 0;
  }
  thunk_FUN_ram_40390634(param_1);
  return;
}

