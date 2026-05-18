
undefined4 FUN_ram_4205e9a2(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 6) {
    uVar1 = 0x1c;
  }
  else if (param_1 < 7) {
    uVar1 = 0x14;
    if (((param_1 != 4) && (uVar1 = 0x15, param_1 != 5)) && (uVar1 = 0, param_1 == 3)) {
      return 0x13;
    }
  }
  else {
    uVar1 = 0x1d;
    if ((param_1 != 7) && (uVar1 = 0, param_1 == 8)) {
      return 0x1e;
    }
  }
  return uVar1;
}

