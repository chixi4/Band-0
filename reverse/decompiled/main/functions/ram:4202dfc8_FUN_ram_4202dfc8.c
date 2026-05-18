
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4202dfc8(void)

{
  uint uVar1;
  
  uVar1 = *(uint *)(_DAT_ram_3fcb6ba0 + 0x110) >> 10 & 1;
  if (uVar1 == 0) {
    uVar1 = *(uint *)(_DAT_ram_3fcb6ba0 + 0x120) >> 10 & 1;
  }
  return uVar1;
}

