
int FUN_ram_420b456c(uint param_1)

{
  int iVar1;
  
  if (param_1 == 0xc) {
    iVar1 = 0x78078f;
  }
  else if (param_1 < 0xd) {
    iVar1 = 0x80;
    if (param_1 != 3) {
      if (param_1 < 4) {
        iVar1 = 4;
        if ((param_1 != 1) && (iVar1 = 0x800, param_1 == 2)) {
          return 0x20;
        }
      }
      else {
        iVar1 = 2;
        if (param_1 != 7) {
          if (param_1 < 8) {
            return (uint)(param_1 == 4) << 0xd;
          }
          iVar1 = 0x40;
          if (param_1 != 8) {
            return (uint)(param_1 == 9) << 0xf;
          }
        }
      }
    }
  }
  else {
    iVar1 = 0x20000000;
    if (param_1 != 0x13) {
      if (param_1 < 0x14) {
        iVar1 = 0x30000;
        if ((((param_1 != 0xe) && (iVar1 = 0x800, 0xe < param_1)) && (iVar1 = 2, param_1 != 0x11))
           && (iVar1 = 0x40, param_1 != 0x12)) {
          return (uint)(param_1 == 0x10) << 2;
        }
      }
      else {
        iVar1 = 0x400;
        if ((param_1 != 0x15) && (iVar1 = 0x40, param_1 != 0x17)) {
          return (uint)(param_1 == 0x14) << 0x1c;
        }
      }
    }
  }
  return iVar1;
}

