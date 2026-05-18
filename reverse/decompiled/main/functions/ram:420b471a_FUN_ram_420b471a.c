
int FUN_ram_420b471a(uint param_1)

{
  int iVar1;
  
  if (param_1 == 10) {
    iVar1 = 4;
  }
  else if (param_1 < 0xb) {
    iVar1 = 0x80;
    if (param_1 != 3) {
      if (param_1 < 4) {
        iVar1 = 4;
        if ((param_1 != 1) && (iVar1 = 0x20, param_1 != 2)) {
          return 0x800;
        }
      }
      else {
        iVar1 = 0x2000;
        if ((param_1 != 4) && (iVar1 = 2, param_1 != 7)) {
          return (uint)(param_1 == 8) << 6;
        }
      }
    }
  }
  else {
    iVar1 = 0x10000000;
    if (param_1 != 0x14) {
      if (param_1 < 0x15) {
        iVar1 = 0x40;
        if (((param_1 != 0x12) && (iVar1 = 0x20000000, param_1 != 0x13)) &&
           (iVar1 = 4, param_1 != 0x10)) {
          return (uint)(param_1 == 0x11) << 1;
        }
      }
      else {
        iVar1 = 0x8000000;
        if ((param_1 != 0x16) && (iVar1 = 0x40, param_1 != 0x17)) {
          return (uint)(param_1 == 0x15) << 10;
        }
      }
    }
  }
  return iVar1;
}

