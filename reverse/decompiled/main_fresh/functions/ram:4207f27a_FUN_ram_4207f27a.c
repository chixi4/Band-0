
byte FUN_ram_4207f27a(void)

{
  byte bVar1;
  
  bVar1 = 1;
  if (1 < (byte)(DAT_ram_3fcc41bd - 4U)) {
    bVar1 = 0;
    if ((byte)(DAT_ram_3fcc41bd - 7) < 0xb) {
      bVar1 = (&DAT_ram_3c0fa8b4)[(byte)(DAT_ram_3fcc41bd - 7)];
    }
  }
  return bVar1 & 1;
}

