
int FUN_ram_4207d712(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0x15 < (uint)*(ushort *)(param_1 + 0x16) + (uint)*(ushort *)(param_1 + 0x14)) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
    *param_2 = ((uint)(*(ushort *)(iVar1 + 0xc) >> 8) | (*(ushort *)(iVar1 + 0xc) & 0xff) << 8) + 6;
    *(undefined1 *)(iVar1 + 0xc) = *(undefined1 *)(iVar1 + 0x14);
    *(undefined1 *)(iVar1 + 0xd) = *(undefined1 *)(iVar1 + 0x15);
    FUN_ram_4039c1f2(iVar1 + 8,iVar1,0xe);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + 8;
    *(short *)(param_1 + 0x16) = *(short *)(param_1 + 0x16) + -8;
    iVar1 = param_1;
  }
  return iVar1;
}

