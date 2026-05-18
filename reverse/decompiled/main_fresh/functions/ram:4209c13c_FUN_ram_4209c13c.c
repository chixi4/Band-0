
uint FUN_ram_4209c13c(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 == 0x20000) {
    uVar1 = 0x18;
  }
  else {
    uVar1 = 0x10;
    if (param_1 == 0x4000000) {
      return param_2 >> 1;
    }
  }
  return uVar1;
}

