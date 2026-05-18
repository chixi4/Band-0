
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42019fc0(void)

{
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0;
  uStack_14 = 0;
  iStack_28 = _DAT_ram_3c0756d8;
  uStack_24 = _DAT_ram_3c0756e0;
  if ((_DAT_ram_3c0756e4 & 1) != 0) {
    if (_DAT_ram_3c0756e0 < 0x70001) {
      iStack_28 = _DAT_ram_3c0756dc;
      uStack_24 = 0;
    }
    else {
      iStack_28 = _DAT_ram_3c0756d8 + 0x70000;
      uStack_24 = _DAT_ram_3c0756e0 - 0x70000;
    }
  }
  if ((_DAT_ram_3c0756e4 & 8) != 0) {
    if (_DAT_ram_3c0756e0 < 0x10001) {
      uStack_24 = 0;
      iStack_28 = _DAT_ram_3c0756dc;
    }
    else {
      uStack_24 = uStack_24 - 0x10000;
      iStack_28 = iStack_28 + 0x10000;
    }
  }
  if (_DAT_ram_3c0756ec == -1) {
    _DAT_ram_3fcb3528 = 0;
  }
  else {
    uStack_2c = _DAT_ram_3c0756e0;
    _DAT_ram_3fcb3528 = 1;
    uStack_38 = _DAT_ram_3c0756e4;
    iStack_34 = _DAT_ram_3c0756d8;
    iStack_30 = _DAT_ram_3c0756dc;
    iStack_20 = _DAT_ram_3c0756ec;
    uStack_1c = _DAT_ram_3c0756e8;
    FUN_ram_40399daa(0x3fcb352c,&uStack_38,0x28);
    _DAT_ram_3fcb354c = 0;
    _DAT_ram_3fcb3550 = &DAT_ram_3fcb354c;
  }
  return;
}

