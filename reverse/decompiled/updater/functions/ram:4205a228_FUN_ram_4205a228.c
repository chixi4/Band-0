
undefined4 FUN_ram_4205a228(int param_1,undefined1 *param_2,undefined1 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int aiStack_38 [2];
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_24;
  
  if (param_1 != 0) {
    if (param_2 == (undefined1 *)0x0) {
      param_2 = &DAT_ram_3c0793d4;
    }
    if (param_3 == (undefined1 *)0x0) {
      param_3 = &DAT_ram_3c0793d4;
    }
    aiStack_38[0] = param_1;
    puStack_30 = param_2;
    puStack_2c = param_3;
    uStack_24 = param_4;
    uVar1 = FUN_ram_42059d54(0x4204b128,aiStack_38);
    return uVar1;
  }
  return 0xfffffff0;
}

