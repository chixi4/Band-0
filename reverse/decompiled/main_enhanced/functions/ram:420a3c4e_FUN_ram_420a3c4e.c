
void FUN_ram_420a3c4e(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x3c) = param_2;
  }
  return;
}

