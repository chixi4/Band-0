
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039172e(int *param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_403989f4();
  if (iVar1 != 1) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    if (_DAT_ram_600c2148 < 2) {
      if (param_2 == 4) {
        FUN_ram_403972dc();
        return;
      }
      FUN_ram_40397156(iVar1,0,0,0);
      return;
    }
    if (param_2 == 4) {
      iVar1 = FUN_ram_4039bf1e();
    }
    aiStack_14[0] = 0;
    FUN_ram_40397422(iVar1,aiStack_14);
    if (aiStack_14[0] != 0) {
      FUN_ram_403969ca();
    }
  }
  return;
}

