
int FUN_ram_420547dc(int param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
LAB_ram_420547de:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  uVar3 = *(ushort *)(param_1 + 0x2c);
  iVar1 = ((uint)uVar3 - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28);
  uVar2 = *(ushort *)(param_1 + 0x36);
  if (0xb40 < *(ushort *)(param_1 + 0x36)) {
    uVar2 = 0xb40;
  }
  if ((int)(iVar1 - (uint)uVar2) < 0) {
    uVar4 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28);
    if ((int)uVar4 < 0) {
      uVar3 = 0;
    }
    else {
      if (0xffff < uVar4) goto LAB_ram_420547de;
      uVar3 = (ushort)uVar4;
    }
    iVar1 = 0;
  }
  *(ushort *)(param_1 + 0x2e) = uVar3;
  return iVar1;
}

