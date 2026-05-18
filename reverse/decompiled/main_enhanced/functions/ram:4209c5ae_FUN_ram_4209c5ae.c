
bool FUN_ram_4209c5ae(uint param_1)

{
  if ((param_1 != 0x8000) && ((param_1 - 0x400000 & 0xffbfffff) != 0)) {
    return (param_1 & 0x4030c00) != 0;
  }
  return true;
}

