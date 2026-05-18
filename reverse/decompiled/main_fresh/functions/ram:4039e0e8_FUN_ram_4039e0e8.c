
byte FUN_ram_4039e0e8(void)

{
  byte bVar1;
  
  bVar1 = 1;
  if ((*(char *)(gp + 0x24b) != '\x02') && (bVar1 = 0, *(char *)(gp + 0x24b) == '\x01')) {
    bVar1 = DAT_ram_3fcc461c;
  }
  return bVar1 & 1;
}

