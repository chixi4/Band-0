
uint FUN_ram_4203702c(uint param_1)

{
  return (param_1 << 1 ^ -(param_1 >> 7) & 0x1b) & 0xff;
}

