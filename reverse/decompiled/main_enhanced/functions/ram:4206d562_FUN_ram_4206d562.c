
undefined4 FUN_ram_4206d562(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    uVar2 = *param_1 & 0x3f;
    uVar1 = *param_1 + param_3;
    *param_1 = uVar1;
    if (uVar1 < param_3) {
      param_1[1] = param_1[1] + 1;
    }
    if ((uVar2 != 0) && (uVar1 = 0x40 - uVar2, uVar1 <= param_3)) {
      FUN_ram_4039c11e((int)(param_1 + 6) + uVar2,param_2,uVar1);
      FUN_ram_4206c98c(param_1,param_1 + 6);
      param_2 = param_2 + uVar1;
      param_3 = (param_3 + uVar2) - 0x40;
      uVar2 = 0;
    }
    for (uVar1 = param_3; 0x3f < uVar1; uVar1 = uVar1 - 0x40) {
      FUN_ram_4206c98c(param_1,(param_3 + param_2) - uVar1);
    }
    if (param_3 + (param_3 >> 6) * -0x40 != 0) {
      FUN_ram_4039c11e((int)param_1 + uVar2 + 0x18,param_2 + (param_3 >> 6) * 0x40);
    }
    return 0;
  }
  return 0;
}

