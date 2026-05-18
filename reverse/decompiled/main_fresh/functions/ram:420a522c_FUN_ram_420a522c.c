
undefined4 FUN_ram_420a522c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 2) {
    uVar1 = 0x400;
  }
  else {
    uVar1 = 0x1000;
    if ((param_1 != 4) && (uVar1 = 0x200, param_1 != 1)) {
      return 0x800;
    }
  }
  return uVar1;
}

