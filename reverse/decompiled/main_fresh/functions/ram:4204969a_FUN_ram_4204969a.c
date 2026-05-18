
undefined4 FUN_ram_4204969a(int param_1)

{
  undefined4 uVar1;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  if (param_1 != 0) {
    uStack_14 = FUN_ram_420495aa();
    uStack_13 = FUN_ram_420495aa(param_1 + 0x20);
    uVar1 = FUN_ram_4204965c(param_1,&uStack_14,1);
    return uVar1;
  }
  return 0xffffffff;
}

