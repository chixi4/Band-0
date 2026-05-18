
undefined4 FUN_ram_4207fc3c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    if (param_2 == 4) {
      return 0x3fcc2f84;
    }
    uVar1 = 0;
    if (param_2 == 5) {
      return 0x3fcc2fac;
    }
  }
  else {
    uVar1 = 0;
    if (param_1 == 1) {
      if (param_2 == 4) {
        uVar1 = 0x3fcc2f34;
      }
      else if (param_2 == 5) {
        return 0x3fcc2f5c;
      }
    }
  }
  return uVar1;
}

