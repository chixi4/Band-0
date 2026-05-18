
bool FUN_ram_4206e878(uint param_1)

{
  if ((param_1 >> 8) - 1 < 6) {
    return (param_1 & 0xfd) == 1;
  }
  return false;
}

