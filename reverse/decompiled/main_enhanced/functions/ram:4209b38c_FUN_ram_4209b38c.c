
undefined4 FUN_ram_4209b38c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 * 4 + 0x3fcc48b4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x38) = 1;
    *(undefined4 *)(iVar1 + 0x20c) = 0;
    *(ushort *)(iVar1 + 0x1b4) = *(ushort *)(iVar1 + 0x1b4) & 0xfffd;
    FUN_ram_4209a968();
    return 0;
  }
  return 0;
}

