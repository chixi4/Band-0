
undefined4 FUN_ram_420a359e(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == -1) {
    uVar1 = 0xe002;
  }
  else if (param_1 < 0) {
    uVar1 = 0xe004;
    if ((param_1 != -3) && (uVar1 = 0xffffffff, param_1 == -2)) {
      return 0xe003;
    }
  }
  else {
    uVar1 = 0xffffffff;
    if (param_1 == 0) {
      return 0xe001;
    }
  }
  return uVar1;
}

