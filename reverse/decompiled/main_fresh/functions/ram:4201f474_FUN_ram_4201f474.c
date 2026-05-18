
undefined1 FUN_ram_4201f474(int param_1)

{
  if ((param_1 - 0x20U & 0xffff) < 0x5f) {
    return (&DAT_ram_3c0f08a0)[param_1];
  }
  return 0x10;
}

