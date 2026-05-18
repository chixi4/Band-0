
undefined4 FUN_ram_42098e92(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x2b) {
    uVar1 = 0x14;
  }
  else if (param_1 < 0x2c) {
    uVar1 = 0x12;
    if (((param_1 != 0x29) && (uVar1 = 0x13, param_1 != 0x2a)) && (uVar1 = 1, param_1 == 0x28)) {
      return 0xd;
    }
  }
  else {
    uVar1 = 0x31;
    if (((param_1 != 0x35) && (uVar1 = 0x32, param_1 != 0x36)) && (uVar1 = 1, param_1 == 0x2e)) {
      return 0x18;
    }
  }
  return uVar1;
}

