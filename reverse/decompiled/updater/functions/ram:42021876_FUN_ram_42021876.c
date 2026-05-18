
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42021876(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar3 = _DAT_ram_3fcb6760;
  iVar1 = *(int *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 0x10);
  if (DAT_ram_3fcb675c == '\0') {
LAB_ram_420218b2:
    iVar3 = _DAT_ram_3fcb6760;
    if (2 < uVar5) {
      if (uVar5 != 5) goto LAB_ram_420218bc;
      goto LAB_ram_420218fc;
    }
    if (uVar5 == 0) {
LAB_ram_420218bc:
      _DAT_ram_3fcb6760 = 0;
      iVar3 = 0;
      while (iVar3 = FUN_ram_42020d82(iVar3), iVar1 = _DAT_ram_3fcb6760, iVar3 != 0) {
        iVar2 = FUN_ram_42021862(iVar3);
        iVar1 = _DAT_ram_3fcb6760;
        if ((iVar2 != 0) &&
           (((_DAT_ram_3fcb6760 == 0 || (iVar2 = FUN_ram_42021862(_DAT_ram_3fcb6760), iVar2 == 0))
            || (*(int *)(iVar1 + 0x60) < *(int *)(iVar3 + 0x60))))) {
          _DAT_ram_3fcb6760 = iVar3;
        }
      }
      if (_DAT_ram_3fcb6760 == 0) {
        return 0;
      }
      iVar3 = FUN_ram_42021862(_DAT_ram_3fcb6760);
      if (iVar3 == 0) {
        return 0;
      }
      uVar4 = *(undefined4 *)(iVar1 + 0x10);
      goto LAB_ram_42021946;
    }
    iVar2 = FUN_ram_42020da0(_DAT_ram_3fcb6760);
    if (iVar2 == 0) {
      _DAT_ram_3fcb6760 = 0;
    }
    else {
      _DAT_ram_3fcb6760 = iVar3;
      if (((iVar3 != 0) && (iVar2 = FUN_ram_42021862(iVar3), iVar2 != 0)) &&
         (*(int *)(iVar1 + 0x60) < *(int *)(iVar3 + 0x60))) {
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        goto LAB_ram_42021946;
      }
    }
    iVar3 = FUN_ram_42021862(iVar1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    if (uVar5 != 5) {
      iVar2 = FUN_ram_42020da0(_DAT_ram_3fcb6760);
      if (iVar2 == 0) {
        _DAT_ram_3fcb6760 = 0;
      }
      else {
        _DAT_ram_3fcb6760 = iVar3;
        if (iVar3 != 0) {
          return 0;
        }
      }
      DAT_ram_3fcb675c = '\0';
      goto LAB_ram_420218b2;
    }
LAB_ram_420218fc:
    DAT_ram_3fcb675c = '\x01';
  }
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  _DAT_ram_3fcb6760 = iVar1;
LAB_ram_42021946:
  FUN_ram_42051648(uVar4);
  return 0;
}

