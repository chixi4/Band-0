
undefined4 FUN_ram_40396da6(uint *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = param_1[0xe];
  if (param_1[0x10] == 0) {
    if (*param_1 == 0) {
      uVar2 = FUN_ram_40398ae8(param_1[2]);
      param_1[2] = 0;
      goto LAB_ram_40396dc8;
    }
  }
  else {
    if (param_3 != 0) {
      FUN_ram_4039c11e(param_1[3]);
      uVar3 = param_1[3] - param_1[0x10];
      param_1[3] = uVar3;
      if (uVar3 < *param_1) {
        param_1[3] = param_1[2] - param_1[0x10];
      }
      uVar2 = 0;
      if (param_3 == 2) {
        uVar1 = uVar1 - (uVar1 != 0);
      }
      goto LAB_ram_40396dc8;
    }
    FUN_ram_4039c11e(param_1[1]);
    uVar3 = param_1[1];
    param_1[1] = uVar3 + param_1[0x10];
    if (param_1[2] <= uVar3 + param_1[0x10]) {
      param_1[1] = *param_1;
    }
  }
  uVar2 = 0;
LAB_ram_40396dc8:
  param_1[0xe] = uVar1 + 1;
  return uVar2;
}

