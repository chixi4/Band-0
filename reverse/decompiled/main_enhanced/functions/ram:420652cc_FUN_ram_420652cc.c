
undefined4 FUN_ram_420652cc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar3 = *(int *)(iVar1 + 0x38);
  iVar5 = *(int *)(iVar1 + 0x28);
  uVar2 = *(undefined4 *)(iVar1 + 0x34);
  *(uint *)(iVar5 + 4) = (uint)*(byte *)(param_1 + 0x16);
  iVar4 = *(int *)(iVar5 + 0x310);
  if (iVar3 + 1U < 0x302) {
    iVar6 = iVar5 + 8;
    FUN_ram_4039c11e(iVar6,uVar2,iVar3);
    *(undefined1 *)(iVar6 + iVar3) = 0;
    if ((*(short *)(param_1 + 0x10) == 1) && (*(ushort *)(param_1 + 0x12) < 2)) {
      iVar4 = iVar4 + 0x34;
      FUN_ram_420a2158(iVar4);
      iVar3 = FUN_ram_420a2166(iVar6,iVar3,*(int *)(iVar5 + 4) == 5,iVar4);
      uVar2 = 3;
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 0xb;
  }
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
  return 0xffffffff;
}

