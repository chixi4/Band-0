
void FUN_ram_420685e4(int param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_4;
  if (param_3 != 0) {
    while (uVar1 != 0) {
      uVar1 = param_4;
      if (param_2 < param_4) {
        uVar1 = param_2;
      }
      param_1 = FUN_ram_40399daa(param_1,param_3,uVar1);
      param_1 = param_1 + uVar1;
      param_2 = param_2 - uVar1;
      uVar1 = param_2;
    }
    return;
  }
  return;
}

