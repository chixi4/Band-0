
undefined1 * FUN_ram_4204e8a0(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 - 0x3cU < 4) {
    iVar2 = (param_1 - 0x3cU) * 0x14;
    FUN_ram_420599c2();
    bVar1 = *(char *)(iVar2 + 0x3fcb577c) == '\0';
    if (bVar1) {
      (&DAT_ram_3fcb577b)[iVar2] = (&DAT_ram_3fcb577b)[iVar2] + '\x01';
    }
    FUN_ram_420599ec();
    if (bVar1) {
      return &DAT_ram_3fcb576c + iVar2;
    }
  }
  return (undefined1 *)0x0;
}

