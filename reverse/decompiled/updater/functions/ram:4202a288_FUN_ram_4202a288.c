
undefined4 FUN_ram_4202a288(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar4 = *param_1;
  uVar3 = uVar4 + param_3;
  uVar1 = uVar4 & 0x7f;
  uVar4 = (uint)(uVar3 < uVar4) + param_1[1];
  *param_1 = uVar3;
  param_1[1] = uVar4;
  if ((uVar4 == 0) && (uVar3 < param_3)) {
    uVar4 = param_1[2];
    uVar3 = uVar4 + 1;
    param_1[2] = uVar3;
    param_1[3] = (uint)(uVar3 < uVar4) + param_1[3];
  }
  if (uVar1 != 0) {
    uVar3 = 0x80 - uVar1;
    if (param_3 < uVar3) goto LAB_ram_4202a338;
    FUN_ram_40399daa((int)(param_1 + 0x14) + uVar1,param_2,uVar3);
    FUN_ram_420295fc(param_1,param_1 + 0x14);
    param_2 = param_2 + uVar3;
    param_3 = (param_3 - 0x80) + uVar1;
  }
  for (; 0x7f < param_3; param_3 = param_3 - iVar2) {
    iVar2 = param_2;
    do {
      FUN_ram_420295fc(param_1,iVar2);
      iVar2 = iVar2 + 0x80;
    } while (0x7f < (param_2 + param_3) - iVar2);
    iVar2 = (param_3 - 0x80 & 0xffffff80) + 0x80;
    param_2 = param_2 + iVar2;
  }
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = 0;
LAB_ram_4202a338:
  FUN_ram_40399daa((int)param_1 + uVar1 + 0x50,param_2,param_3);
  return 0;
}

