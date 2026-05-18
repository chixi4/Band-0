
undefined4 FUN_ram_4205aae2(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (param_1 == 0x3c0793e8) {
    uVar1 = 0xf3;
  }
  else if (param_1 == 0x3c0793e7) {
    uVar1 = 0xf2;
  }
  else {
    if (param_1 != 0x3c0793e6) {
      return 0;
    }
    uVar1 = 0xf1;
  }
  *param_2 = uVar1;
  return 1;
}

