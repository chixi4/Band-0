
byte FUN_ram_4203910e(void)

{
  byte bVar1;
  
  bVar1 = 1;
  if (1 < (byte)(DAT_ram_3fcb512d - 4U)) {
    bVar1 = 0;
    if ((byte)(DAT_ram_3fcb512d - 7) < 0xb) {
      bVar1 = *(byte *)((byte)(DAT_ram_3fcb512d - 7) + 0x3c078d58);
    }
  }
  return bVar1 & 1;
}

