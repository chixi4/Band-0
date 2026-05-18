
byte FUN_ram_42031628(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_2 + 2);
  if (-1 < (char)bVar1) {
    return 0;
  }
  if ((bVar1 & 1) == 0) {
    if ((bVar1 & 2) == 0) {
      return bVar1 & 2;
    }
    if (*(short *)(param_1 + 100) != 0) {
      return 0;
    }
    bVar2 = 0x1d;
  }
  else {
    bVar2 = 0x1b;
  }
  *(byte *)(param_2 + 2) = bVar1 & 0x7f;
  return bVar2;
}

