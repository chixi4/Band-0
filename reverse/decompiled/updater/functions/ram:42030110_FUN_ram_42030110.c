
undefined4 FUN_ram_42030110(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  if (1 < param_4) {
    pbVar3 = (byte *)*param_3;
    pbVar2 = pbVar3 + 1;
    *param_3 = pbVar2;
    uVar4 = (uint)*pbVar3;
    if ((uVar4 != 0) && (uVar4 <= param_4 - 1)) {
      *param_3 = pbVar2 + uVar4;
      uVar1 = FUN_ram_4202ff36();
      return uVar1;
    }
  }
  return 0xffffb080;
}

