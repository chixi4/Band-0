
uint FUN_ram_4209bc54(int param_1)

{
  if (param_1 != 0) {
    return *(uint *)(param_1 + 0x1b4) >> 4 & 1;
  }
  return 0;
}

