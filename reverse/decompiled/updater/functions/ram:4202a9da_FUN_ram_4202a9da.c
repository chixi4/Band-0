
undefined4 FUN_ram_4202a9da(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uStack_18;
  undefined1 uStack_17;
  ushort uStack_16;
  undefined1 uStack_14;
  undefined1 uStack_13;
  ushort uStack_12;
  
  uVar1 = *param_1;
  uVar2 = param_1[1] << 3;
  uStack_17 = (undefined1)(uVar2 >> 0x10);
  uStack_16 = (ushort)(uVar2 >> 8) & 0xff | (ushort)((uVar1 >> 0x1d | uVar2) << 8);
  uStack_14 = (undefined1)((uVar1 << 3) >> 0x18);
  uStack_13 = (undefined1)((uVar1 << 3) >> 0x10);
  uStack_12 = (ushort)(((uVar1 & 0x1fff) << 3) >> 8) | (ushort)(uVar1 << 0xb);
  uStack_18 = (undefined1)(uVar2 >> 0x18);
  if ((uVar1 & 0x3f) < 0x38) {
    iVar3 = 0x38;
  }
  else {
    iVar3 = 0x78;
  }
  FUN_ram_4202a9c2(param_1,0x3c0781e0,iVar3 - (uVar1 & 0x3f));
  FUN_ram_4202a876(param_1,&uStack_18);
  FUN_ram_40399daa(param_2,param_1 + 2,0x14);
  return 0;
}

