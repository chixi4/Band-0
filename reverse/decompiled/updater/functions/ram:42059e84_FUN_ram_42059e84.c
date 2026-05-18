
undefined4 FUN_ram_42059e84(int param_1,undefined1 *param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int aiStack_38 [2];
  undefined1 *puStack_30;
  undefined2 uStack_2c;
  
  if (param_1 != 0) {
    if (param_2 == (undefined1 *)0x0) {
      param_2 = &DAT_ram_3c0793d4;
    }
    aiStack_38[0] = param_1;
    puStack_30 = param_2;
    uStack_2c = param_3;
    uVar1 = FUN_ram_42059d54(0x4204ae0c,aiStack_38);
    return uVar1;
  }
  return 0xfffffff0;
}

