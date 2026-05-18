
bool FUN_ram_4209c15a(int param_1)

{
  if (param_1 != 0x20) {
    return (param_1 - 0x2000U & 0xffffdfff) == 0;
  }
  return true;
}

