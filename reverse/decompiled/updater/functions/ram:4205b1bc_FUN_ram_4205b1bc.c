
undefined4 FUN_ram_4205b1bc(int param_1)

{
  if ((param_1 + 0x10U & 0xff) < 0x11) {
    return *(undefined4 *)(param_1 * -4 + 0x3c0793ec);
  }
  return 5;
}

