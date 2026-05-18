
undefined4 FUN_ram_420278ce(int *param_1,uint param_2)

{
  int iVar1;
  
  if ((*param_1 != 0) && ((*(uint *)(*param_1 + 4) & 0xf000) == 0x2000)) {
    if (param_2 == 2) {
      param_1[3] = 0x420170bc;
      iVar1 = 0x4201723a;
    }
    else if (param_2 < 3) {
      if (param_2 == 0) {
        param_1[3] = 0x42016fce;
        iVar1 = 0x42017190;
      }
      else {
        param_1[3] = 0x42016fea;
        iVar1 = 0x42017012;
      }
    }
    else if (param_2 == 3) {
      param_1[3] = 0x4201717e;
      iVar1 = 0x420170e0;
    }
    else {
      if (param_2 != 4) {
        return 0xffff9f80;
      }
      param_1[3] = 0;
      iVar1 = 0x42017162;
    }
    param_1[4] = iVar1;
    return 0;
  }
  return 0xffff9f00;
}

