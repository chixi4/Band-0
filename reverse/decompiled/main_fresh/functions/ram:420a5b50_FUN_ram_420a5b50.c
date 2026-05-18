
undefined4 FUN_ram_420a5b50(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 3;
  if (param_1 == 3) {
    uVar1 = 8;
  }
  else if (param_1 < 4) {
    if ((param_1 != 1) && (uVar1 = 0, param_1 == 2)) {
      return 5;
    }
  }
  else {
    uVar1 = 0;
    if (param_1 == 4) {
      return 9;
    }
  }
  return uVar1;
}

