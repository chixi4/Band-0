
undefined4 FUN_ram_4209d33c(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 4) {
    uVar1 = 8;
  }
  else if (param_1 < 5) {
    uVar1 = 0x100;
    if (((param_1 != 2) && (uVar1 = 2, param_1 != 3)) && (uVar1 = 1, param_1 == 1)) {
      return 0x80;
    }
  }
  else {
    uVar1 = 0x20;
    if (((param_1 != 6) && (uVar1 = 0x400, param_1 != 7)) && (uVar1 = 1, param_1 == 5)) {
      return 10;
    }
  }
  return uVar1;
}

