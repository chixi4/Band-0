
int FUN_ram_4205cd34(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_2c [4];
  int iStack_28;
  int aiStack_24 [4];
  
  iStack_28 = 0;
  aiStack_24[0] = 0;
  iVar3 = (*(code *)&SUB_ram_400106a4)(&iStack_28,0x3c0731c4,param_1,param_2);
  iVar1 = iStack_28;
  if ((-1 < iVar3) && (iStack_28 != 0)) {
    uVar4 = (*(code *)&SUB_ram_400104a8)(iStack_28);
    thunk_FUN_ram_4206904a(0,0,aiStack_24,iVar1,uVar4);
    iVar3 = aiStack_24[0];
    iVar2 = -1;
    iVar5 = FUN_ram_40399d1a(1,aiStack_24[0] + 7);
    iVar1 = iStack_28;
    if (iVar5 != 0) {
      FUN_ram_4039a182(iVar5,0x3c073294);
      uVar4 = (*(code *)&SUB_ram_400104a8)(iVar1);
      thunk_FUN_ram_4206904a(iVar5 + 6,iVar3,auStack_2c,iVar1,uVar4);
      iVar2 = 0;
    }
    thunk_FUN_ram_40390608(iStack_28);
    if (iVar2 == 0) {
      return iVar5;
    }
  }
  return 0;
}

