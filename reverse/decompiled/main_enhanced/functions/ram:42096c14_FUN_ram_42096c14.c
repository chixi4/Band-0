
void FUN_ram_42096c14(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_1[1] == 0) {
    uVar2 = *(uint *)(*param_1 + 0xd0) & 3;
    if (uVar2 == 1) {
      uVar1 = 6;
    }
    else if (uVar2 == 2) {
      uVar1 = 9;
    }
    else {
      uVar1 = 0xb;
      if (uVar2 != 3) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
    }
  }
  *param_3 = uVar1;
  return;
}

