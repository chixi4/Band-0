
uint FUN_ram_4209c930(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 8) == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x100) == 0) {
        if ((param_2 & 0x80) == 0) {
          if ((param_2 & 1) == 0) {
            uVar1 = -(uint)((param_2 & 0x20) != 0) & 0xfac06;
          }
          else {
            uVar1 = 0x50f200;
            if (param_1 == 2) {
              return 0xfac00;
            }
          }
        }
        else {
          uVar1 = 0x50f201;
          if (param_1 == 2) {
            return 0xfac01;
          }
        }
      }
      else {
        uVar1 = 0x50f205;
        if (param_1 == 2) {
          return 0xfac05;
        }
      }
    }
    else {
      uVar1 = 0x50f202;
      if (param_1 == 2) {
        return 0xfac02;
      }
    }
  }
  else {
    uVar1 = 0x50f204;
    if (param_1 == 2) {
      return 0xfac04;
    }
  }
  return uVar1;
}

