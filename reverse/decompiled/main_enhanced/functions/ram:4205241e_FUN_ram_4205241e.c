
bool FUN_ram_4205241e(int param_1)

{
  if ((param_1 != 0) && (*(byte *)(param_1 + 0xd) < 2)) {
    return *(int *)(&DAT_ram_3fcc2040 + (*(byte *)(param_1 + 0xd) + 1) * 4) != 0;
  }
  return false;
}

