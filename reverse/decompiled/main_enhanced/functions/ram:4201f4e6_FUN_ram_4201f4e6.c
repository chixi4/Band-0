
undefined4 FUN_ram_4201f4e6(byte *param_1,ushort *param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 != 0) {
    if (-1 < (char)bVar1) {
      *param_2 = (ushort)bVar1;
      return 1;
    }
    if ((bVar1 & 0xe0) == 0xc0) {
      *param_2 = (bVar1 & 0x1f) << 6 | param_1[1] & 0x3f;
      return 2;
    }
    if ((bVar1 & 0xf0) == 0xe0) {
      *param_2 = (ushort)bVar1 << 0xc | param_1[2] & 0x3f | (param_1[1] & 0x3f) << 6;
      return 3;
    }
  }
  return 0;
}

