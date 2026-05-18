
undefined4 FUN_ram_4205e9fa(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x14) {
    uVar1 = 4;
  }
  else {
    uVar1 = 5;
    if ((param_1 != 0x15) && (uVar1 = 3, param_1 != 0x13)) {
      return 0;
    }
  }
  return uVar1;
}

