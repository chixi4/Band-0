
undefined4 FUN_ram_42014048(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    uVar1 = 0xffffffff;
    if (param_2 < 4) {
      FUN_ram_40394d60(0xffffffff);
      FUN_ram_4201b168(gp + param_1 * 0x30 + -0x658,param_2);
      FUN_ram_40394d8e();
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffff;
}

