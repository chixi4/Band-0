
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_42040e12(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((*(int *)(_DAT_ram_3fcb50e8 + 0x48) != 0) && (*(int *)(_DAT_ram_3fcb50e8 + 0x4c) != 0)) {
    uVar1 = _DAT_ram_3fcb3f90 & 1;
  }
  return uVar1;
}

