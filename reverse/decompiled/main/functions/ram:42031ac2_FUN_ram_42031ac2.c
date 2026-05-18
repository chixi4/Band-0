
uint FUN_ram_42031ac2(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 >> 4 & 1;
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 2;
  }
  return uVar1;
}

