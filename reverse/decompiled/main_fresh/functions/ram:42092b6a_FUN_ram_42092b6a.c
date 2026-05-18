
uint FUN_ram_42092b6a(uint param_1)

{
  return param_1 >> 8 & 0xff00ff | (param_1 & 0xff00ff) << 8;
}

