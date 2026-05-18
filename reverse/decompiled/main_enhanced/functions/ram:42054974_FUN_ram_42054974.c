
void FUN_ram_42054974(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) == 1)) {
    *(undefined4 *)(param_1 + 0x1c) = param_2;
  }
  return;
}

