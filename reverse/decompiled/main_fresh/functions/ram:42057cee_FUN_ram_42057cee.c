
void FUN_ram_42057cee(int param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    param_1 = FUN_ram_4039bf1e();
  }
  if (((*(int *)(param_1 + 0x74) != 0) && ((*(ushort *)(param_1 + 0x1e) & 4) == 0)) &&
     (iVar1 = FUN_ram_42057c28(), iVar1 == 0)) {
    uVar4 = (uint)*(ushort *)(param_1 + 100);
    if ((uint)*(ushort *)(param_1 + 0x4c) < (uint)*(ushort *)(param_1 + 100)) {
      uVar4 = (uint)*(ushort *)(param_1 + 0x4c);
    }
    uVar2 = (uint)*(ushort *)(param_1 + 0x36);
    sVar3 = (short)(uVar4 >> 1);
    *(short *)(param_1 + 0x4e) = sVar3;
    if ((uint)((int)uVar4 >> 1) < uVar2 << 1) {
      sVar3 = (short)((uVar2 & 0x7fff) << 1);
      *(short *)(param_1 + 0x4e) = (short)((uVar2 << 0x11) >> 0x10);
    }
    *(undefined2 *)(param_1 + 0x34) = 0;
    *(ushort *)(param_1 + 0x4c) = sVar3 + *(ushort *)(param_1 + 0x36) * 3;
    *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 4;
  }
  return;
}

