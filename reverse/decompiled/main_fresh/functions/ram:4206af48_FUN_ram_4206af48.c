
undefined4 FUN_ram_4206af48(int *param_1,uint param_2)

{
  int iVar1;
  
  if ((*param_1 != 0) && ((*(uint *)(*param_1 + 4) & 0xf000) == 0x2000)) {
    if (param_2 == 2) {
      param_1[3] = 0x4205a736;
      iVar1 = 0x4205a8b4;
    }
    else if (param_2 < 3) {
      if (param_2 == 0) {
        param_1[3] = 0x4205a648;
        iVar1 = 0x4205a80a;
      }
      else {
        param_1[3] = 0x4205a664;
        iVar1 = 0x4205a68c;
      }
    }
    else if (param_2 == 3) {
      param_1[3] = 0x4205a7f8;
      iVar1 = 0x4205a75a;
    }
    else {
      if (param_2 != 4) {
        return 0xffff9f80;
      }
      param_1[3] = 0;
      iVar1 = 0x4205a7dc;
    }
    param_1[4] = iVar1;
    return 0;
  }
  return 0xffff9f00;
}

