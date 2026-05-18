
bool FUN_ram_42061e92(int param_1)

{
  if (param_1 != 0x20) {
    return (param_1 - 0x2000U & 0xffffdfff) == 0;
  }
  return true;
}

