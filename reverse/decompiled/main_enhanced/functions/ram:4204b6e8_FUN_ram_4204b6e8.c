
void FUN_ram_4204b6e8(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 auStack_24 [4];
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  for (; param_2 != 0; param_2 = param_2 - uVar1) {
    auStack_24[0] = FUN_ram_403926c4();
    uVar1 = param_2;
    if (4 < param_2) {
      uVar1 = 4;
    }
    FUN_ram_4039c11e(param_1,auStack_24,uVar1);
    param_1 = param_1 + uVar1;
  }
  return;
}

