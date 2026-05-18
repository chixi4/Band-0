
bool FUN_ram_42076184(int param_1)

{
  if (3 < *(byte *)(param_1 + 1)) {
    return *(int *)(param_1 + 2) == -0x22cb01e8;
  }
  return false;
}

