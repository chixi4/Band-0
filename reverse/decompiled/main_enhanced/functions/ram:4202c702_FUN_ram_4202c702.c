
uint FUN_ram_4202c702(int param_1)

{
  if ((param_1 - 2U & 0xff) < 0x1f) {
    return 0x48515555U >> (param_1 - 2U & 0x1f) & 1;
  }
  return 0;
}

