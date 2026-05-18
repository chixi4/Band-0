
int FUN_ram_4202829c(int param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return param_1 + 0x3e;
  }
  return param_1 + 0x4e;
}

