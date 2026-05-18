
bool FUN_ram_4206965e(uint *param_1)

{
  short sVar1;
  
  if (((((*param_1 & 3) != 0) && (sVar1 = (short)param_1[5], 99 < (ushort)(sVar1 - 100U))) &&
      (sVar1 != 0xcc)) && ((sVar1 != 0x130 && ((*param_1 >> 2 & 0x41) == 0)))) {
    return (param_1[2] & param_1[3]) == 0xffffffff;
  }
  return false;
}

