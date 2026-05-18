
undefined4 FUN_ram_403991a8(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_a5;
  
  uVar2 = 1;
  if (1 < param_1) {
    param_1 = FUN_ram_4039bf1e();
    uVar2 = extraout_a5;
  }
  if (param_1 == uVar2) {
    uVar1 = (*(code *)&LAB_ram_400106e0)();
    return uVar1;
  }
  return 0;
}

