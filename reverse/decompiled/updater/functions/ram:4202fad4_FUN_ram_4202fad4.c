
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202fad4(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  _DAT_ram_3fcb677c = _DAT_ram_3fcb677c + 1;
  if (*(int *)(param_4 + 0x10) == 0) {
    return -0x4f80;
  }
  iVar3 = param_3 + 0x10;
  iVar1 = FUN_ram_42024dea(iVar3,0);
  iVar2 = param_4;
  if (iVar1 != 0) {
    iVar1 = FUN_ram_42024dea(param_4 + 0x10,0);
    iVar2 = param_3;
    if (iVar1 != 0) {
      iVar2 = FUN_ram_42024dea(param_4 + 0x10,1);
      if (iVar2 != 0) {
        return -0x4f80;
      }
      iVar2 = FUN_ram_4202f224(param_1,param_5,iVar3,iVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar1 = param_5 + 8;
      iVar2 = FUN_ram_4202f224(param_1,iVar1,param_5,iVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_ram_4202f224(param_1,param_5,param_5,param_4);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_ram_4202f224(param_1,iVar1,iVar1,param_4 + 8);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_ram_4202f1d4(param_1,param_5,param_5,param_3);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_ram_4202f1d4(param_1,iVar1,iVar1,param_3 + 8);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_ram_42024dea(param_5,0);
      if (iVar2 == 0) {
        iVar2 = FUN_ram_42024dea(iVar1,0);
        if (iVar2 != 0) {
          iVar2 = FUN_ram_4202faa0(param_2);
          return iVar2;
        }
        iVar2 = FUN_ram_4202f67c(param_1,param_2,param_3,param_5);
        return iVar2;
      }
      iVar2 = FUN_ram_4202f224(param_1,param_2 + 0x10,iVar3,param_5);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar3 = param_5 + 0x10;
      iVar2 = FUN_ram_4202f224(param_1,iVar3,param_5,param_5);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar4 = param_5 + 0x18;
      iVar2 = FUN_ram_4202f224(param_1,iVar4,iVar3,param_5);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_ram_4202f224(param_1,iVar3,iVar3,param_3);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_ram_420249f4(param_5,iVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_ram_4202f5b8(param_1,param_5);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_ram_4202f224(param_1,param_2,iVar1,iVar1);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_ram_4202f1d4(param_1,param_2,param_2,param_5);
      if (iVar2 == 0) {
        iVar2 = FUN_ram_4202f1d4(param_1,param_2,param_2,iVar4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_ram_4202f1d4(param_1,iVar3,iVar3,param_2);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_ram_4202f224(param_1,iVar3,iVar3,iVar1);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_ram_4202f224(param_1,iVar4,iVar4,param_3 + 8);
        if (iVar2 == 0) {
          iVar2 = FUN_ram_4202f1d4(param_1,param_2 + 8,iVar3,iVar4);
          return iVar2;
        }
        return iVar2;
      }
      return iVar2;
    }
  }
  iVar2 = FUN_ram_4202fa5c(param_2,iVar2);
  return iVar2;
}

