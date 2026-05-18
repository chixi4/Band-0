
uint FUN_ram_4208d02c(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == 7) {
    if (param_2 == 0) {
      *(undefined4 *)(gp + 0x90) = param_3;
      return param_2;
    }
  }
  else if (param_1 < 8) {
    if (param_1 == 3) {
      if (param_2 < 3) {
        iVar1 = gp + 0x78;
        goto LAB_ram_4208d06e;
      }
    }
    else if ((param_1 == 4) && (param_2 < 0x22)) {
      iVar1 = gp + 0x98;
LAB_ram_4208d06e:
      *(undefined4 *)(iVar1 + param_2 * 4) = param_3;
      return 0;
    }
  }
  else if (param_1 == 8) {
    if (param_2 < 2) {
      iVar1 = gp + 0x1a8;
      goto LAB_ram_4208d06e;
    }
  }
  else if ((param_1 == 0x7f) && (param_2 == 0)) {
    *(undefined4 *)(gp + 0x1b8) = param_3;
    return param_2;
  }
  return 0xffffffff;
}

