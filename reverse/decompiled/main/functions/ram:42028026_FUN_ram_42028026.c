
undefined4 FUN_ram_42028026(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 4) {
    uVar1 = 10;
  }
  else if (param_1 < 5) {
    uVar1 = 1;
    if (2 < (param_1 - 1 & 0xff)) {
      return 0xff;
    }
  }
  else {
    uVar1 = 0xff;
    if (param_1 == 5) {
      return 2;
    }
  }
  return uVar1;
}

