
undefined4 FUN_ram_42027444(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*param_1 == 0) {
    return 0xffff9f00;
  }
  if (param_3 < 0x11) {
    uVar3 = *(uint *)(*param_1 + 4);
    uVar1 = param_3;
    if (((int)(uVar3 << 7) < 0) || (uVar1 = uVar3 >> 3 & 0x1c, uVar1 <= param_3)) {
      if ((uVar3 & 0xf000) == 0x6000) {
        uVar2 = FUN_ram_4202878e(param_1[0xf],param_1[2],param_2);
        return uVar2;
      }
      if (uVar1 != 0) {
        FUN_ram_40399daa(param_1 + 10,param_2,uVar1,param_3);
        param_1[0xe] = uVar1;
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffff9f00;
    }
    return uVar2;
  }
  return 0xffff9f80;
}

