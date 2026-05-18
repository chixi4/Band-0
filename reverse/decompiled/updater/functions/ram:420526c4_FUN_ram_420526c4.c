
int FUN_ram_420526c4(int param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar3 = *(ushort *)(param_1 + 0x2c);
  iVar1 = ((uint)uVar3 - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28);
  uVar2 = *(ushort *)(param_1 + 0x36);
  if (0xb40 < *(ushort *)(param_1 + 0x36)) {
    uVar2 = 0xb40;
  }
  if ((int)(iVar1 - (uint)uVar2) < 0) {
    iVar1 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28);
    if (iVar1 < 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ushort)iVar1;
    }
    iVar1 = 0;
  }
  *(ushort *)(param_1 + 0x2e) = uVar3;
  return iVar1;
}

