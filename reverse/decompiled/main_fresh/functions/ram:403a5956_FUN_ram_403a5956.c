
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_ram_403a5956(uint param_1)

{
  undefined1 uVar1;
  
  if ((param_1 & 0x80) == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x1008,param_1);
    if (0x13 < (int)param_1) {
      return 0xf;
    }
    if (0x11 < (int)param_1) {
      return 0xe;
    }
    if (0xe < (int)param_1) {
      return 0xd;
    }
    if (0xb < (int)param_1) {
      return 0xc;
    }
    if (8 < (int)param_1) {
      return 0xb;
    }
    if (5 < (int)param_1) {
      return 10;
    }
    if (2 < (int)param_1) {
      return 9;
    }
    if (-1 < (int)param_1) {
      return 8;
    }
  }
  else {
    param_1 = param_1 | 0xffffff00;
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x1008,param_1);
  }
  uVar1 = 7;
  if (((((int)param_1 < -3) && (uVar1 = 6, (int)param_1 < -6)) && (uVar1 = 5, (int)param_1 < -9)) &&
     (((uVar1 = 4, (int)param_1 < -0xc && (uVar1 = 3, (int)param_1 < -0xf)) &&
      (uVar1 = 2, (int)param_1 < -0x12)))) {
    uVar1 = -0x16 < (int)param_1;
  }
  return uVar1;
}

