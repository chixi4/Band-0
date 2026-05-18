
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202e26c(void)

{
  int iVar1;
  int iVar2;
  
  if ((*(char *)(_DAT_ram_3fcb6ba0 + 0x110) != '\0') &&
     ((*(byte *)(_DAT_ram_3fcb6ba0 + 0x111) & 0x10) != 0)) {
    iVar1 = *(int *)(_DAT_ram_3fcb6ba0 + 0x114);
    iVar2 = FUN_ram_403a6810();
    iVar1 = iVar1 - iVar2;
    if (iVar1 < 1) {
      iVar2 = FUN_ram_4202e0a6(0);
      iVar1 = 100;
      if (iVar2 == 0) {
        FUN_ram_4202e0fa();
        FUN_ram_4202e20e(0xd);
        iVar1 = 0x7fffffff;
      }
    }
    return iVar1;
  }
  return 0x7fffffff;
}

