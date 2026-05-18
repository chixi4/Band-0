
bool FUN_ram_420188a0(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 4) == 0)) {
    return *(int *)(param_1 + 8) - 0x10U < 0x10;
  }
  return false;
}

