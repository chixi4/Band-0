
bool FUN_ram_420137f2(uint param_1,int param_2)

{
  if ((param_2 != 0) && ((int)param_1 < 0x40)) {
    return (1 << (param_1 & 0x1f) & *(uint *)(param_2 + ((int)param_1 >> 5) * 4)) != 0;
  }
  return false;
}

