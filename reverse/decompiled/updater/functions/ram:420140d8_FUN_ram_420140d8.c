
undefined4 FUN_ram_420140d8(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    FUN_ram_40394d60();
    FUN_ram_4201b1a2(gp + param_1 * 0x30 + -0x658,param_2);
    FUN_ram_40394d8e();
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

