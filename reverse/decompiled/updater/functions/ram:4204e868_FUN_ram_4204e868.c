
int * FUN_ram_4204e868(int param_1)

{
  int iVar1;
  
  if (param_1 - 0x3cU < 4) {
    iVar1 = (param_1 - 0x3cU) * 0x14;
    if ((*(int *)(&DAT_ram_3fcb576c + iVar1) != 0) && (*(char *)(iVar1 + 0x3fcb577c) == '\0')) {
      (&DAT_ram_3fcb577b)[iVar1] = (&DAT_ram_3fcb577b)[iVar1] + '\x01';
      return (int *)(&DAT_ram_3fcb576c + iVar1);
    }
  }
  return (int *)0x0;
}

