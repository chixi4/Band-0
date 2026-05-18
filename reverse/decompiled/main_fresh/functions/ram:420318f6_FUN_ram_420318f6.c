
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420318f6(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3fcb6bb8;
  if (*(int *)(_DAT_ram_3fcb6bb8 + 0x2c) != 0) {
    FUN_ram_403a3284(_DAT_ram_3fcb6bb8 + 0x10);
    iVar1 = _DAT_ram_3fcb6bb8;
    *(undefined4 *)(_DAT_ram_3fcb6bb8 + 0x2c) = 0;
  }
  if (*(short *)(_DAT_ram_3fcb6b88 + 6) != 0) {
    FUN_ram_403a5e1e(*(undefined4 *)(iVar1 + 0xc));
    iVar1 = _DAT_ram_3fcb6bb8;
    *(undefined4 *)(_DAT_ram_3fcb6bb8 + 0xc) = 0;
  }
  if (*(short *)(_DAT_ram_3fcb6b88 + 4) != 0) {
    FUN_ram_403a5e1e(*(undefined4 *)(iVar1 + 4));
    iVar1 = _DAT_ram_3fcb6bb8;
    *(undefined4 *)(_DAT_ram_3fcb6bb8 + 4) = 0;
  }
  *(undefined2 *)(iVar1 + 8) = 0;
  return;
}

