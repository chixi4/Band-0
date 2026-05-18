
undefined4 FUN_ram_420b3d0c(uint param_1,uint param_2,int *param_3)

{
  int iVar1;
  
  if (10 < param_1 - 1) {
    return 0x102;
  }
  if (2 < param_2) {
    return 0x102;
  }
  if (param_3 == (int *)0x0) {
    return 0x102;
  }
  if (param_1 == 7) {
    iVar1 = 80000000;
  }
  else {
    if (param_1 < 8) {
      if (param_1 == 3) {
        iVar1 = FUN_ram_420122a2();
      }
      else {
        if (3 < param_1) {
          if (param_1 == 5) {
            iVar1 = 40000000;
          }
          else {
            iVar1 = 60000000;
            if (param_1 != 6) {
              return 0xffffffff;
            }
          }
          goto LAB_ram_420b3d4e;
        }
        if (param_1 == 1) {
          iVar1 = FUN_ram_4204ae96();
        }
        else {
          iVar1 = FUN_ram_42012310();
        }
      }
    }
    else if (param_1 == 10) {
      iVar1 = FUN_ram_420121cc(param_2);
    }
    else if (param_1 == 0xb) {
      iVar1 = FUN_ram_4204ae30();
      iVar1 = iVar1 * 1000000;
    }
    else if (param_1 == 8) {
      iVar1 = FUN_ram_4201223c();
    }
    else {
      iVar1 = FUN_ram_420122f2();
    }
    if (iVar1 == 0) {
      return 0xffffffff;
    }
  }
LAB_ram_420b3d4e:
  *param_3 = iVar1;
  return 0;
}

