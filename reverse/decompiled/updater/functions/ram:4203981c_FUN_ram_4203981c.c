
undefined4 FUN_ram_4203981c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    if (param_2 == 4) {
      return 0x3fcb3efc;
    }
    uVar1 = 0;
    if (param_2 == 5) {
      return 0x3fcb3f24;
    }
  }
  else {
    uVar1 = 0;
    if (param_1 == 1) {
      if (param_2 == 4) {
        uVar1 = 0x3fcb3eac;
      }
      else if (param_2 == 5) {
        return 0x3fcb3ed4;
      }
    }
  }
  return uVar1;
}

