
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_42026fe8(void)

{
  return _DAT_ram_3fcb69bc >> 8 & 4 | _DAT_ram_3fcb69bc >> 8 & 8 | _DAT_ram_3fcb69bc >> 9 & 1 |
         _DAT_ram_3fcb69bc >> 0x14 & 0x10;
}

