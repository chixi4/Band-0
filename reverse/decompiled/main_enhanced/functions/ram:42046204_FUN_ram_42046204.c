
bool FUN_ram_42046204(int param_1)

{
  if (param_1 != 0) {
    return *(char *)(param_1 + 0xc) == '\x10';
  }
  return false;
}

