
int FUN_ram_420aabea(byte *param_1)

{
  if ((*param_1 - 0x30 < 10) && (param_1[1] - 0x30 < 10)) {
    return (*param_1 - 0x30) * 10 + (param_1[1] - 0x30);
  }
  return -1;
}

