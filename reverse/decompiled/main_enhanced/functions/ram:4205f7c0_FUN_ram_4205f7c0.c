
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205f7c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar3 = _DAT_ram_3fcc5384;
  iVar1 = *(int *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 0x10);
  if (DAT_ram_3fcc5380 == '\0') {
LAB_ram_4205f7fc:
    iVar3 = _DAT_ram_3fcc5384;
    if (2 < uVar5) {
      if (uVar5 != 5) goto LAB_ram_4205f806;
      goto LAB_ram_4205f846;
    }
    if (uVar5 == 0) {
LAB_ram_4205f806:
      _DAT_ram_3fcc5384 = 0;
      iVar3 = 0;
      while (iVar3 = FUN_ram_4205ea0e(iVar3), iVar1 = _DAT_ram_3fcc5384, iVar3 != 0) {
        iVar2 = FUN_ram_4205f7ac(iVar3);
        iVar1 = _DAT_ram_3fcc5384;
        if ((iVar2 != 0) &&
           (((_DAT_ram_3fcc5384 == 0 || (iVar2 = FUN_ram_4205f7ac(_DAT_ram_3fcc5384), iVar2 == 0))
            || (*(int *)(iVar1 + 100) < *(int *)(iVar3 + 100))))) {
          _DAT_ram_3fcc5384 = iVar3;
        }
      }
      if (_DAT_ram_3fcc5384 == 0) {
        return 0;
      }
      iVar3 = FUN_ram_4205f7ac(_DAT_ram_3fcc5384);
      if (iVar3 == 0) {
        return 0;
      }
      uVar4 = *(undefined4 *)(iVar1 + 0x10);
      goto LAB_ram_4205f890;
    }
    iVar2 = FUN_ram_4205ea2c(_DAT_ram_3fcc5384);
    if (iVar2 == 0) {
      _DAT_ram_3fcc5384 = 0;
    }
    else {
      _DAT_ram_3fcc5384 = iVar3;
      if (((iVar3 != 0) && (iVar2 = FUN_ram_4205f7ac(iVar3), iVar2 != 0)) &&
         (*(int *)(iVar1 + 100) < *(int *)(iVar3 + 100))) {
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        goto LAB_ram_4205f890;
      }
    }
    iVar3 = FUN_ram_4205f7ac(iVar1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    if (uVar5 != 5) {
      iVar2 = FUN_ram_4205ea2c(_DAT_ram_3fcc5384);
      if (iVar2 == 0) {
        _DAT_ram_3fcc5384 = 0;
      }
      else {
        _DAT_ram_3fcc5384 = iVar3;
        if (iVar3 != 0) {
          return 0;
        }
      }
      DAT_ram_3fcc5380 = '\0';
      goto LAB_ram_4205f7fc;
    }
LAB_ram_4205f846:
    DAT_ram_3fcc5380 = '\x01';
  }
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  _DAT_ram_3fcc5384 = iVar1;
LAB_ram_4205f890:
  FUN_ram_4205335a(uVar4);
  return 0;
}

