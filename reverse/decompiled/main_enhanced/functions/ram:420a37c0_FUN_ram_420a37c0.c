
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420a37c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 auStack_24 [4];
  
  if (param_1 == 0) {
    _DAT_ram_00000034 = 0;
    ebreak();
    iVar2 = FUN_ram_420a33e2();
    if (iVar2 != 0) {
      iVar4 = FUN_ram_420a3d8a();
      *(int *)(iVar2 + 0x38) = iVar4;
      if (iVar4 != 0) {
        iVar5 = FUN_ram_4039c08e(1,0x74);
        if (iVar5 != 0) {
          *(undefined4 *)(iVar5 + 0x70) = 0xffffffff;
          *(int *)(iVar2 + 8) = iVar5;
          return iVar2;
        }
        thunk_FUN_ram_40390634(iVar4);
      }
      thunk_FUN_ram_40390634(iVar2);
    }
    return 0;
  }
  piVar1 = *(int **)(param_1 + 8);
  piVar1[0xd] = param_4;
  *(undefined1 *)(piVar1 + 0x1a) = 1;
  iVar2 = FUN_ram_420a2ad2();
  *piVar1 = iVar2;
  if (iVar2 == 0) {
    FUN_ram_420a3508(param_1,0xfffffffd);
  }
  else {
    uVar3 = (*(code *)&SUB_ram_400104a8)(param_2);
    iVar2 = FUN_ram_420a2b26(param_2,uVar3,param_3,piVar1 + 1,iVar2);
    if (iVar2 < 1) {
      iVar2 = FUN_ram_420a2c0e(*piVar1,auStack_24);
      if (iVar2 == 0) {
        FUN_ram_420a3550(param_1,auStack_24[0]);
      }
    }
    else {
      iVar2 = FUN_ram_420a2bf8(*piVar1,piVar1 + 0x1c);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_ram_420a2a96(*piVar1);
    *piVar1 = 0;
    piVar1[0x1c] = -1;
  }
  return -1;
}

