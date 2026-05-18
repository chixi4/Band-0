
int FUN_ram_4208e578(uint param_1)

{
  if (param_1 < 0x11) {
    return (int)(char)(&DAT_ram_3c0fab80)[param_1];
  }
  return -1;
}

