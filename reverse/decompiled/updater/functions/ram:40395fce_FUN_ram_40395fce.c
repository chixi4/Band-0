
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40395fce(void)

{
  if (*_DAT_ram_3fcb65f8 == 0) {
    _DAT_ram_3fcb65cc = 0xffffffff;
  }
  else {
    _DAT_ram_3fcb65cc = *(undefined4 *)_DAT_ram_3fcb65f8[3];
  }
  return;
}

