
bool FUN_ram_42013668(uint param_1)

{
  if (param_1 < 2) {
    return *(int *)(param_1 * 4 + 0x3fcc4f10) != 0;
  }
  return false;
}

