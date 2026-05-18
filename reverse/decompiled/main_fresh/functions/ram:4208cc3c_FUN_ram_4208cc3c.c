
undefined1 FUN_ram_4208cc3c(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 3U & 0xff;
  if (uVar1 < 7) {
    return (&DAT_ram_3c0fab78)[uVar1];
  }
  return 0;
}

