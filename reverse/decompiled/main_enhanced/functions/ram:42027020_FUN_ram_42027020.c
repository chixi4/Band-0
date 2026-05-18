
void FUN_ram_42027020(int param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 8);
  bVar2 = *(byte *)(param_1 + 0xf);
  iVar4 = FUN_ram_420365de(*(undefined2 *)(param_1 + 10));
  if (iVar4 != 0) {
    uVar3 = *(ushort *)(iVar4 + 0x68);
    *(ushort *)(iVar4 + 0x68) = uVar3 | 1;
    if ((bVar1 & 8) != 0) {
      *(ushort *)(iVar4 + 0x68) = uVar3 | 3;
    }
    if ((bVar1 & 0x20) != 0) {
      *(ushort *)(iVar4 + 0x68) = *(ushort *)(iVar4 + 0x68) | 4;
    }
    if (bVar2 != 0) {
      *(ushort *)(iVar4 + 0x68) = *(ushort *)(iVar4 + 0x68) & 0xff07 | (bVar2 & 0x1f) << 3;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0xff;
  *(undefined1 *)(param_2 + 1) = 0;
  *(byte *)(param_2 + 5) = (byte)(((bVar1 & 0x20) >> 5) << 2) | 2 | *(byte *)(param_2 + 5) & 0xf9;
  *param_2 = 0;
  return;
}

