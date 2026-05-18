
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42034106(int *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  iVar1 = *param_1;
  if (iVar1 == 0x4ac0f00) {
    uVar2 = 3;
  }
  else if (iVar1 < 0x4ac0f01) {
    uVar2 = 1;
    if (iVar1 != 0x2ac0f00) {
      if (iVar1 < 0x2ac0f01) {
        uVar2 = 0;
        if (iVar1 != 0xac0f00) {
          if (iVar1 != 0x1ac0f00) {
            return 0x20;
          }
          uVar3 = 5;
          goto LAB_ram_420341ce;
        }
      }
      else {
        uVar2 = 0x20;
        if (iVar1 == 0x3ac0f00) {
          return 2;
        }
      }
    }
  }
  else {
    if (iVar1 == 0xbac0f00) {
      if ((_DAT_ram_3fcb3f90 & 0x20) != 0) {
        return 0xd;
      }
    }
    else {
      if (iVar1 < 0xbac0f01) {
        if (iVar1 != 0x5ac0f00) {
          if (iVar1 != 0x6ac0f00) {
            return 0x20;
          }
          return 9;
        }
        uVar3 = 0xd;
LAB_ram_420341ce:
        *param_2 = uVar3;
        return 6;
      }
      if (iVar1 != 0xcac0f00) {
        return 0x20;
      }
    }
    uVar2 = 0x20;
    if ((_DAT_ram_3fcb3f90 & 0x20) != 0) {
      return 0xe;
    }
  }
  return uVar2;
}

