
undefined4 FUN_ram_42030424(byte *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  byte bStack_18;
  undefined1 auStack_17 [6];
  undefined1 uStack_11;
  
  if (param_1 == (byte *)0x0) {
    return 3;
  }
  bStack_18 = *param_1;
  if (bStack_18 < 2) {
    uStack_11 = param_2;
    FUN_ram_4039c11e(auStack_17,param_1 + 1,6);
    uVar1 = FUN_ram_420332b4(0x204e,&bStack_18,8,0,0);
    return uVar1;
  }
  return 0x12;
}

