
undefined4 FUN_ram_420602a0(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x101) {
    uVar1 = 0x20;
  }
  else {
    uVar1 = 0x30;
    if (0x180 < param_1) {
      return 0x40;
    }
  }
  return uVar1;
}

