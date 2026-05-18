
bool FUN_ram_420461e2(int param_1)

{
  if (param_1 != 0) {
    return (*(uint *)(param_1 + 0xc) & 3) != 0;
  }
  return false;
}

