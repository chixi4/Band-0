
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4203be5e(void)

{
  bool bVar1;
  
  bVar1 = false;
  if ((_DAT_ram_3fcb3f90 & 8) != 0) {
    bVar1 = *(char *)(*(int *)(gp + -0x2b8) + 0x400) != '\0';
  }
  return bVar1;
}

