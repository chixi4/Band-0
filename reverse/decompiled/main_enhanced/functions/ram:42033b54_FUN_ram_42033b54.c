
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42033b54(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = _DAT_ram_3fcb6bc8;
  if (param_1 == 6) {
    iVar2 = FUN_ram_42033a56(param_2);
    if (iVar2 == -1) {
      return 5;
    }
    uVar3 = 0xe;
    iVar2 = _DAT_ram_3fcb6bc8 + iVar2 * 0xe + 0x29c;
  }
  else if (param_1 < 7) {
    if (param_1 == 2) {
      FUN_ram_42033b22();
      iVar2 = _DAT_ram_3fcb6bc8;
      iVar1 = FUN_ram_42033922(param_2,_DAT_ram_3fcb6bc8 + 0x110,
                               *(undefined4 *)(_DAT_ram_3fcb6bc8 + 0x218));
      if (iVar1 == -1) {
        return 5;
      }
      uVar3 = 0x58;
      iVar2 = iVar2 + iVar1 * 0x58 + 0x110;
    }
    else if (param_1 == 3) {
      iVar2 = FUN_ram_42033986();
      if (iVar2 == -1) {
        return 5;
      }
      uVar3 = 0x10;
      iVar2 = _DAT_ram_3fcb6bc8 + (iVar2 + 0x21) * 0x10 + 0xc;
    }
    else {
      if (param_1 != 1) {
        return 8;
      }
      FUN_ram_42033b22();
      iVar2 = _DAT_ram_3fcb6bc8;
      iVar1 = FUN_ram_42033922(param_2,_DAT_ram_3fcb6bc8,*(undefined4 *)(_DAT_ram_3fcb6bc8 + 0x108))
      ;
      if (iVar1 == -1) {
        return 5;
      }
      uVar3 = 0x58;
      iVar2 = iVar2 + iVar1 * 0x58;
    }
  }
  else if (param_1 == 7) {
    iVar2 = FUN_ram_42033ab8();
    if (iVar2 == -1) {
      return 5;
    }
    uVar3 = 0x17;
    iVar2 = _DAT_ram_3fcb6bc8 + iVar2 * 0x17 + 0x2cc;
  }
  else {
    if (param_1 != 8) {
      return 8;
    }
    iVar1 = FUN_ram_420339fe(param_2,_DAT_ram_3fcb6bc8 + 0x280,
                             *(undefined4 *)(_DAT_ram_3fcb6bc8 + 0x298));
    if (iVar1 == -1) {
      return 5;
    }
    iVar2 = (iVar1 + 0x50) * 8 + iVar2;
    uVar3 = 8;
  }
  FUN_ram_4039c11e(param_3,iVar2,uVar3);
  return 0;
}

