
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202f224(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_ram_42025088(param_2,param_3,param_4);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar2 = FUN_ram_42025604(param_2,param_2,param_1 + 4);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  else {
    if (((*(short *)(param_2 + 4) < 0) && (iVar2 = FUN_ram_42024dea(param_2,0), iVar2 != 0)) ||
       (uVar3 = FUN_ram_42024bac(param_2), (uint)(*(int *)(param_1 + 0x3c) << 1) < uVar3)) {
      return -0x4f80;
    }
    iVar1 = param_1 + 4;
    iVar2 = (**(code **)(param_1 + 0x48))(param_2);
    while( true ) {
      if (iVar2 != 0) {
        return iVar2;
      }
      if ((-1 < *(short *)(param_2 + 4)) || (iVar2 = FUN_ram_42024dea(param_2,0), iVar2 == 0))
      break;
      iVar2 = FUN_ram_42025020(param_2,param_2,iVar1);
    }
    while (iVar2 = FUN_ram_42024d4a(param_2,iVar1), -1 < iVar2) {
      iVar2 = FUN_ram_42024ec8(param_2,param_2,iVar1);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
  }
  _DAT_ram_3fcb6774 = _DAT_ram_3fcb6774 + 1;
  return 0;
}

