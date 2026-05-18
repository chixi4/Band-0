
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4039168a(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int aiStack_24 [4];
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = FUN_ram_403989f4();
    if (iVar1 == 1) {
      return 0;
    }
    FUN_ram_4039164e(param_1,param_3);
    iVar1 = *param_1;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
  }
  iVar2 = FUN_ram_403989f4();
  if (iVar2 == 1) {
    return 0;
  }
  if (_DAT_ram_600c2148 < 2) {
    if (param_3 == 4) {
      iVar2 = FUN_ram_4039771c();
    }
    else {
      iVar2 = FUN_ram_403975e0(iVar1,param_2);
    }
  }
  else {
    if (param_3 != 4) goto LAB_ram_403916f2;
    do {
      FUN_ram_4039bf1e();
LAB_ram_403916f2:
      aiStack_24[0] = 0;
      iVar2 = FUN_ram_40397756(iVar1,0,aiStack_24);
    } while ((iVar2 == 0) && (param_2 != 0));
    if (aiStack_24[0] != 0) {
      FUN_ram_403969ca();
    }
  }
  return -(uint)(iVar2 != 1);
}

