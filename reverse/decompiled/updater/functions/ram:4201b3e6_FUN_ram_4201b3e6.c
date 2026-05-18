
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201b3e6(void)

{
  uint uVar1;
  int iVar2;
  
  _DAT_ram_3fcb66fc = _DAT_ram_3fcb66f8;
  for (iVar2 = 0; _DAT_ram_3fcb66fc != iVar2; iVar2 = iVar2 + 1) {
    uVar1 = iVar2 * 8;
    *(uint *)(&DAT_ram_3fcb359c + uVar1) = *(uint *)(&DAT_ram_3fcb359c + uVar1) & 7 | uVar1;
  }
  return;
}

