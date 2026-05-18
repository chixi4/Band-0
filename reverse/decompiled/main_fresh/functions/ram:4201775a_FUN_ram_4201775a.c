
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4201775a(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((DAT_ram_3fcc4fc2 != '\0') && (_DAT_ram_3fcc4fc4 != 0)) {
    iVar1 = *(int *)(_DAT_ram_3fcc4fc4 + 0x10) + -0x20;
  }
  return iVar1;
}

