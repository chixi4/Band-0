
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42024710(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 uStack_1c;
  uint uStack_18;
  ushort uStack_14;
  undefined2 uStack_12;
  
  if ((_DAT_ram_3fcc5190 == 0) &&
     (_DAT_ram_3fcc5190 = FUN_ram_4039c08e(1,0x304), _DAT_ram_3fcc5190 == 0)) {
    return 0xffffffff;
  }
  iVar3 = _DAT_ram_3fcc5190;
  if (param_1 != 0) {
    (*(code *)&SUB_ram_40010488)(_DAT_ram_3fcc5190,0,0x304);
  }
  uVar6 = _DAT_ram_3fcc1bca;
  uVar4 = (uint)_DAT_ram_3fcc1bc0;
  if (uVar4 == 1) {
    uVar5 = (uint)_DAT_ram_3fcc1bc2;
    if (uVar5 == 6) {
      *(byte *)(iVar3 + 2) = *(byte *)(iVar3 + 2) | 1;
      if (uVar6 != 0) {
        uStack_14 = uVar6 >> 3;
        uStack_1c = (uint)CONCAT21(&sedeleg,DAT_ram_3fcc1bc8) << 8;
        uStack_12 = 0;
        uStack_18 = uVar4;
        iVar2 = FUN_ram_420246d2(iVar3,&uStack_1c);
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        uStack_1c = uStack_1c & 0xffffff;
        _uStack_14 = CONCAT22(uStack_12,8);
        iVar2 = FUN_ram_420246d2(iVar3,&uStack_1c);
        if (iVar2 != 0) {
          return 0xffffffff;
        }
      }
      if (_DAT_ram_3fcc1bcc == 0) {
        return 0;
      }
      uStack_14 = _DAT_ram_3fcc1bcc >> 3;
      uStack_1c = (uint)CONCAT21(&sideleg,DAT_ram_3fcc1bc8) << 8;
      uStack_18 = 1;
      uStack_12 = 0;
      iVar2 = FUN_ram_420246d2(iVar3,&uStack_1c);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      uStack_1c = uStack_1c & 0xffffff;
      _uStack_14 = CONCAT22(uStack_12,1);
      goto LAB_ram_420247fe;
    }
    uStack_18 = uVar5;
    if (uVar5 != 2) {
      if (uVar5 == 4) {
        *(byte *)(iVar3 + 2) = *(byte *)(iVar3 + 2) | 4;
      }
      else {
        uStack_18 = 0;
        if (uVar5 == 5) {
          *(byte *)(iVar3 + 2) = *(byte *)(iVar3 + 2) | 8;
          uStack_18 = 8;
        }
      }
      goto LAB_ram_42024866;
    }
    *(byte *)(iVar3 + 2) = *(byte *)(iVar3 + 2) | 2;
    if (uVar6 == 0) {
      return 0;
    }
    uStack_14 = uVar6 >> 3;
    uStack_1c = (uint)CONCAT21(&sedeleg,DAT_ram_3fcc1bc8) << 8;
    uStack_12 = 0;
    iVar2 = FUN_ram_420246d2(iVar3,&uStack_1c);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    uStack_1c = uStack_1c & 0xffffff;
    uVar6 = 3;
  }
  else {
    if (uVar4 == 0xc) {
      uStack_18 = 0;
      if (_DAT_ram_3fcc1bc2 == 1) {
        *(byte *)(iVar3 + 2) = *(byte *)(iVar3 + 2) | 0x20;
        uStack_18 = 0x20;
      }
    }
    else {
      uStack_18 = 0;
      if (0xfe < uVar4) {
        *(byte *)(iVar3 + 2) = *(byte *)(iVar3 + 2) | 0x40;
        uStack_18 = 0x40;
      }
    }
LAB_ram_42024866:
    uStack_14 = uVar6 >> 3;
    uStack_1c = (uint)CONCAT21(&sedeleg,DAT_ram_3fcc1bc8) << 8;
    uStack_12 = 0;
    uVar1 = uStack_12;
    uStack_12 = 0;
    if ((uVar6 != 0) && (uStack_12 = uVar1, iVar2 = FUN_ram_420246d2(iVar3,&uStack_1c), iVar2 != 0))
    {
      return 0xffffffff;
    }
    if (_DAT_ram_3fcc1bcc != 0) {
      uStack_14 = _DAT_ram_3fcc1bcc >> 3;
      uStack_1c._0_3_ = CONCAT12(2,(undefined2)uStack_1c);
      iVar2 = FUN_ram_420246d2(iVar3,&uStack_1c);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
    if (_DAT_ram_3fcc1bce == 0) {
      return 0;
    }
    uStack_1c._0_3_ = CONCAT12(3,(undefined2)uStack_1c);
    uVar6 = _DAT_ram_3fcc1bce >> 3;
  }
  _uStack_14 = CONCAT22(uStack_12,uVar6);
LAB_ram_420247fe:
  iVar3 = FUN_ram_420246d2(iVar3,&uStack_1c);
  if (iVar3 != 0) {
    return 0xffffffff;
  }
  return 0;
}

