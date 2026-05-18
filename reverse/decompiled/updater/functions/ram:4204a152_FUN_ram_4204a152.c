
uint FUN_ram_4204a152(uint param_1)

{
  return param_1 >> 8 & 0xff00ff | (param_1 & 0xff00ff) << 8;
}

