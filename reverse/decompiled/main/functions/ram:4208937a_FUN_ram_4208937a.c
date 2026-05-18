
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4208937a(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((*(int *)(_DAT_ram_3fcc4178 + 0x48) != 0) && (*(int *)(_DAT_ram_3fcc4178 + 0x4c) != 0)) {
    uVar1 = _DAT_ram_3fcc3018 & 1;
  }
  return uVar1;
}

