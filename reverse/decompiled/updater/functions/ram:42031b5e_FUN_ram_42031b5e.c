
uint FUN_ram_42031b5e(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((param_1 + 0x12) * 8 + 0x3fcb4f80);
  uVar1 = 0;
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
    uVar1 = (uint)*(ushort *)(iVar2 + 8);
  }
  iVar2 = *(int *)(param_1 * 8 + 0x3fcb5014);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
    uVar1 = uVar1 + *(ushort *)(iVar2 + 8);
  }
  return uVar1;
}

