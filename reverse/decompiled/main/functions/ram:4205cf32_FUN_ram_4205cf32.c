
undefined4 FUN_ram_4205cf32(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int aiStack_38 [2];
  undefined4 uStack_30;
  
  if (param_1 != 0) {
    aiStack_38[0] = param_1;
    uStack_30 = param_2;
    uVar1 = FUN_ram_4205cd16(0x4204e3a0,aiStack_38);
    return uVar1;
  }
  return 0xfffffff0;
}

