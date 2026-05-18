
int FUN_ram_42046700(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x8000) {
    if (param_1 == 1) {
      iVar1 = (int)(param_2 * 10 + 2) / 3;
    }
    else if (param_1 == 2) {
      iVar1 = (int)(param_2 * 0xb + 1) >> 1;
    }
    else if (param_1 == 4) {
      iVar1 = param_2 << 3;
    }
    else {
      if (param_1 != 8) {
        if ((param_1 == 7) && (param_2 == 0)) {
          return 0x18;
        }
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf9e(0,0,0,0);
      }
      iVar1 = param_2 * 0xd;
    }
    if (iVar1 < 0x8000) {
      return iVar1;
    }
  }
  return -1;
}

