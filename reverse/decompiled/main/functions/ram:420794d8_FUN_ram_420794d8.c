
byte FUN_ram_420794d8(char param_1)

{
  byte bVar1;
  
  bVar1 = param_1 - 1;
  if (0xd < bVar1) {
    bVar1 = 0xff;
  }
  return bVar1;
}

