
uint FUN_ram_4202c724(int param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_1 != 1) {
    uVar1 = 0;
    if ((param_1 - 3U & 0xff) < 0x1f) {
      uVar1 = 0x48515555U >> (param_1 - 3U & 0x1f) & 1;
    }
  }
  return uVar1;
}

