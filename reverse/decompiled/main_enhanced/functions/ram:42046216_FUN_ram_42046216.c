
bool FUN_ram_42046216(int param_1)

{
  if (param_1 != 0) {
    return *(char *)(param_1 + 0xc) == '@';
  }
  return false;
}

