
bool FUN_ram_420b59cc(int param_1)

{
  if (param_1 != 0) {
    return *(int *)(param_1 + 8) == 1;
  }
  return false;
}

