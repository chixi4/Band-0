
undefined4 FUN_ram_42053968(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int extraout_a2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  if (param_1 == 0) {
    uVar4 = FUN_ram_4039bf1e();
    param_3 = extraout_a2;
  }
  uVar2 = (uint)(uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  if (0xffffffffffff < uVar4) {
    return 1;
  }
  if (uVar2 != 0) {
    uVar3 = (uint)*(ushort *)(iVar1 + 8) + (uVar2 & 0xffff);
    if ((uVar3 & 0xffff) < (uVar2 & 0xffff)) {
      return 1;
    }
    if (*(char *)(iVar1 + 0xc) < '\0') {
      uVar2 = *(int *)(iVar1 + 4) - uVar2;
      if (uVar2 < iVar1 + 0x10U) {
        return 1;
      }
    }
    else {
      if (param_3 == 0) {
        return 1;
      }
      uVar2 = *(int *)(iVar1 + 4) - uVar2;
    }
    *(uint *)(iVar1 + 4) = uVar2;
    *(short *)(iVar1 + 8) = (short)(uVar3 * 0x10000 >> 0x10);
    *(short *)(iVar1 + 10) = (short)(uVar4 >> 0x20) + *(short *)(iVar1 + 10);
  }
  return 0;
}

