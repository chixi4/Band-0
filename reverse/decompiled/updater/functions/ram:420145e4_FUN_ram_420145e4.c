
bool FUN_ram_420145e4(uint param_1)

{
  if (param_1 < 2) {
    return *(int *)(param_1 * 4 + 0x3fcb6670) != 0;
  }
  return false;
}

