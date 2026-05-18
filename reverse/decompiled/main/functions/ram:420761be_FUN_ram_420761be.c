
uint FUN_ram_420761be(uint param_1)

{
  uint uVar1;
  
  if ((int)param_1 < 0x17) {
    uVar1 = 1;
    if (3 < (int)param_1) {
      return 0x708890U >> (param_1 & 0x1f) & 1 ^ 1;
    }
  }
  else {
    uVar1 = (uint)(param_1 != 0x7f);
  }
  return uVar1;
}

