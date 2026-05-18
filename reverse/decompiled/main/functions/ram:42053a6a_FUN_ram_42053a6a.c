
undefined4 FUN_ram_42053a6a(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  if (param_1 == 0) {
    uVar4 = FUN_ram_4039bf1e();
  }
  uVar3 = (uint)(uVar4 >> 0x20);
  iVar2 = (int)uVar4;
  if (0xffffffffffff < uVar4) {
    return 1;
  }
  if (uVar3 != 0) {
    if ((uint)*(ushort *)(iVar2 + 10) < (uVar3 & 0xffff)) {
      return 1;
    }
    sVar1 = (short)(uVar4 >> 0x20);
    *(ushort *)(iVar2 + 10) = *(ushort *)(iVar2 + 10) - sVar1;
    *(uint *)(iVar2 + 4) = *(int *)(iVar2 + 4) + uVar3;
    *(short *)(iVar2 + 8) = *(short *)(iVar2 + 8) - sVar1;
  }
  return 0;
}

