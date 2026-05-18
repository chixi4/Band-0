
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42034348(void)

{
  int iVar1;
  
  if (_DAT_ram_3fcb6bc8 == 0) {
    _DAT_ram_3fcb6bc8 = FUN_ram_403a5e02(1,0x318);
    if (_DAT_ram_3fcb6bc8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
  }
  iVar1 = _DAT_ram_3fcb6bc8;
  _DAT_ram_3fcb69d0 = &LAB_ram_42023b54;
  _DAT_ram_3fcb69d4 = 0x42024168;
  _DAT_ram_3fcb69d8 = &LAB_ram_42023d92;
  *(undefined4 *)(_DAT_ram_3fcb6bc8 + 0x108) = 0;
  *(undefined4 *)(iVar1 + 0x218) = 0;
  *(undefined4 *)(iVar1 + 0x27c) = 0;
  *(undefined4 *)(iVar1 + 0x298) = 0;
  *(undefined4 *)(iVar1 + 0x2c8) = 0;
  *(undefined4 *)(iVar1 + 0x314) = 0;
  FUN_ram_42034b3a();
  return;
}

