
uint FUN_ram_4207efc6(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 0x20) == 0) {
    uVar1 = 4;
    if ((((param_2 & 0x10) != 0) && (uVar1 = param_1 - 1, 1 < uVar1)) && (uVar1 = 4, param_1 == 0))
    {
      return 1;
    }
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}

