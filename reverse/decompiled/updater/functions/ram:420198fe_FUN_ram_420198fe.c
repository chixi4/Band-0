
undefined4 FUN_ram_420198fe(int param_1)

{
  undefined4 uVar1;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  if (param_1 != 0) {
    uStack_14 = FUN_ram_4201980e();
    uStack_13 = FUN_ram_4201980e(param_1 + 0x20);
    uVar1 = FUN_ram_420198c0(param_1,&uStack_14,1);
    return uVar1;
  }
  return 0xffffffff;
}

