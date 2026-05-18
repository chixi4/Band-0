
bool FUN_ram_420a5210(uint param_1)

{
  if ((param_1 >> 8) - 1 < 4) {
    return (param_1 & 0xfd) == 1;
  }
  return false;
}

