
void FUN_ram_4205262e(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x1e);
  if (((uVar1 & 0x200) != 0) && (iVar2 = *(int *)(param_1 + 0x7c), iVar2 != 0)) {
    *(char *)(iVar2 + 0x21) = *(char *)(iVar2 + 0x21) + -1;
    *(ushort *)(param_1 + 0x1e) = uVar1 & 0xfdff;
  }
  return;
}

