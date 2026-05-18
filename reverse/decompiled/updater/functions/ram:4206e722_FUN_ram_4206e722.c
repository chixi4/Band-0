
uint FUN_ram_4206e722(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0xffff8f00;
  }
  uVar2 = 0xffff8f00;
  if ((*param_1 != 0) &&
     (((param_1[1] == 0x1b || (uVar2 = FUN_ram_4206f114(), uVar2 == 0)) &&
      (uVar2 = FUN_ram_4206f062(param_1), -1 < (int)uVar2)))) {
    uVar1 = uVar2;
    if (param_3 < uVar2) {
      uVar1 = param_3;
    }
    if (param_1[0x2d] == 0) {
      param_1[0x2c] = uVar1;
      param_1[0x2b] = 0x17;
      if (uVar1 != 0) {
        FUN_ram_40399daa(param_1[0x2a],param_2,uVar1);
      }
      uVar2 = FUN_ram_4206de94(param_1,1);
    }
    else {
      uVar2 = FUN_ram_4206de36(param_1);
    }
    if (uVar2 == 0) {
      uVar2 = uVar1;
    }
  }
  return uVar2;
}

