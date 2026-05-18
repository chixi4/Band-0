
undefined4 FUN_ram_4205e6c6(int param_1)

{
  if ((param_1 + 0x10U & 0xff) < 0x11) {
    return *(undefined4 *)(&UNK_ram_3c0f75a8 + param_1 * -4);
  }
  return 5;
}

