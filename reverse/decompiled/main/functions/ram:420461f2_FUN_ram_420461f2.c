
bool FUN_ram_420461f2(int param_1)

{
  if (param_1 != 0) {
    return *(char *)(param_1 + 0xc) == '\b';
  }
  return false;
}

