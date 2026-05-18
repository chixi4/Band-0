
uint FUN_ram_4208c5ae(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 - 0xa0U & 0xffffffdf) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if (param_1 == 0xd0) {
      if (0x16 < (int)param_2) {
        return (uint)(param_2 != 0x7f);
      }
      uVar1 = 1;
      if (3 < (int)param_2) {
        return 0x708890U >> (param_2 & 0x1f) & 1 ^ 1;
      }
    }
  }
  return uVar1;
}

