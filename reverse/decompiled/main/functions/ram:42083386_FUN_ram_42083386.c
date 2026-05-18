
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_42083386(void)

{
  bool bVar1;
  
  bVar1 = false;
  if ((_DAT_ram_3fcc3018 & 8) != 0) {
    bVar1 = *(char *)(*(int *)(gp + -0xb4) + 0x400) != '\0';
  }
  return bVar1;
}

