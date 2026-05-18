
undefined4 FUN_ram_4206dce0(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uStack_18;
  undefined1 uStack_17;
  ushort uStack_16;
  undefined1 uStack_14;
  undefined1 uStack_13;
  ushort uStack_12;
  
  uVar1 = *param_1;
  uVar3 = param_1[1] << 3;
  uStack_17 = (undefined1)(uVar3 >> 0x10);
  uStack_16 = (ushort)(uVar3 >> 8) & 0xff | (ushort)((uVar1 >> 0x1d | uVar3) << 8);
  uStack_14 = (undefined1)((uVar1 << 3) >> 0x18);
  uStack_13 = (undefined1)((uVar1 << 3) >> 0x10);
  uStack_12 = (ushort)(((uVar1 & 0x1fff) << 3) >> 8) | (ushort)(uVar1 << 0xb);
  uStack_18 = (undefined1)(uVar3 >> 0x18);
  if ((uVar1 & 0x3f) < 0x38) {
    iVar4 = 0x38;
  }
  else {
    iVar4 = 0x78;
  }
  FUN_ram_4206dcca(param_1,&DAT_ram_3c0f9cf0,iVar4 - (uVar1 & 0x3f));
  FUN_ram_4206db60(param_1,&uStack_18);
  uVar2 = 0x1c;
  if (param_1[0x1b] != 1) {
    uVar2 = 0x20;
  }
  FUN_ram_4039c11e(param_2,param_1 + 2,uVar2);
  return 0;
}

