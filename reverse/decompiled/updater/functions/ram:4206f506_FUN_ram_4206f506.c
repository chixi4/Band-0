
byte FUN_ram_4206f506(uint param_1)

{
  byte bVar1;
  
  if (param_1 == 4) {
    bVar1 = 9;
  }
  else if (param_1 < 5) {
    bVar1 = 5;
    if ((param_1 != 2) && (bVar1 = 8, param_1 != 3)) {
      return -(param_1 == 1) & 3;
    }
  }
  else {
    bVar1 = 10;
    if ((param_1 != 5) && (bVar1 = 0, param_1 == 6)) {
      return 0xb;
    }
  }
  return bVar1;
}

