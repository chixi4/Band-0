
int FUN_ram_420283c8(int param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return param_1 + 0x4e;
  }
  return param_1 + 0x3e;
}

