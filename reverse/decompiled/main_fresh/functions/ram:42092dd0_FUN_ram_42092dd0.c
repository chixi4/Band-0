
byte FUN_ram_42092dd0(byte *param_1)

{
  byte bVar1;
  
  if ((*param_1 & 0x8c) == 0x88) {
    if ((param_1[1] & 3) == 3) {
      bVar1 = param_1[0x1e];
    }
    else {
      bVar1 = param_1[0x18];
    }
    return bVar1 & 0xf;
  }
  return 0x10;
}

