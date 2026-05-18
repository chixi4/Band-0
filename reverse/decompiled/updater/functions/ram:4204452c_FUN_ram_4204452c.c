
uint FUN_ram_4204452c(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == 7) {
    if (param_2 == 0) {
      *(undefined4 *)(gp + -0x174) = param_3;
      return param_2;
    }
  }
  else if (param_1 < 8) {
    if (param_1 == 3) {
      if (param_2 < 3) {
        iVar1 = gp + -0x184;
        goto LAB_ram_4204456e;
      }
    }
    else if ((param_1 == 4) && (param_2 < 0x22)) {
      iVar1 = gp + -0xe8;
LAB_ram_4204456e:
      *(undefined4 *)(iVar1 + param_2 * 4) = param_3;
      return 0;
    }
  }
  else if (param_1 == 8) {
    if (param_2 < 2) {
      iVar1 = gp + -0x58;
      goto LAB_ram_4204456e;
    }
  }
  else if ((param_1 == 0x7f) && (param_2 == 0)) {
    *(undefined4 *)(gp + -0x4c) = param_3;
    return param_2;
  }
  return 0xffffffff;
}

