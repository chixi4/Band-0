
bool FUN_ram_420461d0(int param_1)

{
  if (param_1 != 0) {
    return *(char *)(param_1 + 0xc) == '\x02';
  }
  return false;
}

