
int FUN_ram_4209780c(int param_1,uint param_2,int param_3)

{
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0x32) {
    if (param_3 == 0xc) {
      return param_1 + 0x28;
    }
  }
  else if (param_2 < 0x33) {
    if (param_2 == 6) {
      if (param_3 == 1) {
        return param_1 + 0x39;
      }
    }
    else if (param_2 == 0x20) {
      if (param_3 == 1) {
        return param_1 + 0x38;
      }
    }
    else if ((param_2 == 1) && (param_3 == 4)) {
      return param_1 + 0x1c;
    }
  }
  else if (param_2 == 0x33) {
    if (param_3 == 4) {
      return param_1 + 0x34;
    }
  }
  else if (param_2 == 0x72) {
    return param_1 + 0x3c;
  }
  return 0;
}

