
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42056494(void)

{
  int iVar1;
  
  if (DAT_ram_3fcb680c == '\0') {
    iVar1 = FUN_ram_4205614a();
    if (iVar1 == 0) {
      _DAT_ram_3fcb6810 = iVar1;
      return 0xffffffff;
    }
    _DAT_ram_3fcb6810 = iVar1;
    *(byte *)(iVar1 + 9) = *(byte *)(iVar1 + 9) | 0x20;
    FUN_ram_42055d82(iVar1,&DAT_ram_3c0793d4,0x44);
    FUN_ram_42056088(_DAT_ram_3fcb6810,&DAT_ram_3c0793d4,0x43);
    FUN_ram_42056112(_DAT_ram_3fcb6810,0x42046d68,0);
  }
  DAT_ram_3fcb680c = DAT_ram_3fcb680c + '\x01';
  return 0;
}

