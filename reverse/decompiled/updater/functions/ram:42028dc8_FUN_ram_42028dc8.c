
undefined4 FUN_ram_42028dc8(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 9) {
    return 0x3c077f38;
  }
  if (param_1 < 10) {
    if (param_1 == 5) {
      return 0x3c077f48;
    }
    if (param_1 == 8) {
      return 0x3c077f40;
    }
    uVar1 = 0;
    if (param_1 == 3) {
      return 0x3c077f50;
    }
  }
  else if (param_1 == 10) {
    uVar1 = 0x3c077f30;
  }
  else {
    uVar1 = 0;
    if (param_1 == 0xb) {
      return 0x3c077f28;
    }
  }
  return uVar1;
}

