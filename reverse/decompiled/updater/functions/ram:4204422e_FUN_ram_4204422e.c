
undefined1 FUN_ram_4204422e(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 3U & 0xff;
  if (uVar1 < 7) {
    return *(undefined1 *)(uVar1 + 0x3c078fb4);
  }
  return 0;
}

