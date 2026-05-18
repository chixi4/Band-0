
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202ee9a(void)

{
  int iVar1;
  
  if (*(char *)(_DAT_ram_3fcb6ba0 + 0x28) == '\0') {
    FUN_ram_4202ee74(0);
    iVar1 = FUN_ram_4202eb54(_DAT_ram_3fcb6ba0 + 0x2c);
    if (iVar1 == 0) {
      iVar1 = 0;
      if ((*(byte *)(_DAT_ram_3fcb6ba0 + 0xd8) & 1) != 0) {
        iVar1 = _DAT_ram_3fcb6ba0 + 0xd1;
      }
      iVar1 = FUN_ram_4202e86c(*(undefined1 *)(_DAT_ram_3fcb6ba0 + 0xd0),iVar1,
                               *(undefined4 *)(_DAT_ram_3fcb6ba0 + 0xdc),_DAT_ram_3fcb6ba0 + 0xe0,
                               *(undefined4 *)(_DAT_ram_3fcb6ba0 + 0xec),
                               *(undefined4 *)(_DAT_ram_3fcb6ba0 + 0xf0));
      if (iVar1 == 0) {
        *(undefined1 *)(_DAT_ram_3fcb6ba0 + 0xea) = 1;
      }
    }
  }
  return;
}

