
byte FUN_ram_420301b4(byte *param_1)

{
  if (*param_1 != 0x20) {
    return *param_1 >> 3;
  }
  return 0x10;
}

