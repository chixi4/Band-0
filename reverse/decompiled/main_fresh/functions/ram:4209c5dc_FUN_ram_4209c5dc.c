
bool FUN_ram_4209c5dc(uint param_1)

{
  if ((param_1 != 0x8000) && ((param_1 - 0x400000 & 0xffbfffff) != 0)) {
    return (param_1 & 0x4c38de0) != 0;
  }
  return true;
}

