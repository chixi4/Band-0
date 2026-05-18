
undefined4 FUN_ram_4208cc5c(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 4);
  iVar3 = FUN_ram_420889aa(iVar2 + 10);
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0;
    iVar6 = *(int *)(*(int *)(iVar3 + 0xa0) + 4);
    uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0xa0) + 8);
    sVar1 = *(short *)(param_1 + 0x16);
    *(int *)(*(int *)(param_1 + 4) + 4) = iVar2 + iVar6 + 0x18;
    *(short *)(param_1 + 0x16) = sVar1 - ((short)uVar5 + (short)iVar6);
  }
  return uVar4;
}

