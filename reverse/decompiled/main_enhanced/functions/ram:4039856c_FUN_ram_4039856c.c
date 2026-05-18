
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039856c(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_ram_3fcc4e64 != 0) {
    _DAT_ram_3fcc4e78 = 1;
    return;
  }
  _DAT_ram_3fcc4e78 = 0;
  iVar1 = (*(code *)&SUB_ram_400108e0)(_DAT_ram_3fcc4e84);
  iVar2 = (0x1f - iVar1) * 0x14;
  if (*(int *)(&DAT_ram_3fcb8cc8 + iVar2) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  *(undefined4 *)(iVar2 + 0x3fcb8ccc) = *(undefined4 *)(*(int *)(iVar2 + 0x3fcb8ccc) + 4);
  if (*(int *)(iVar2 + 0x3fcb8ccc) == iVar2 + 0x3fcb8cd0) {
    *(undefined4 *)(iVar2 + 0x3fcb8ccc) = *(undefined4 *)(*(int *)(iVar2 + 0x3fcb8ccc) + 4);
  }
  _DAT_ram_3fcc4e9c = *(undefined4 *)(*(int *)((0x1f - iVar1) * 0x14 + 0x3fcb8ccc) + 0xc);
  return;
}

