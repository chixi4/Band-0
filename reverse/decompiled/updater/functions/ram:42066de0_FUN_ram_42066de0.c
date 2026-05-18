
undefined4 FUN_ram_42066de0(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 3) {
    return 0x3c079e24;
  }
  if (param_1 < 4) {
    if (param_1 == 1) {
      uVar1 = 0x3c079e84;
    }
    else {
      uVar1 = 0;
      if (param_1 == 2) {
        return 0x3c079e54;
      }
    }
  }
  else {
    uVar1 = 0;
    if (param_1 == 4) {
      return 0x3c079df4;
    }
  }
  return uVar1;
}

