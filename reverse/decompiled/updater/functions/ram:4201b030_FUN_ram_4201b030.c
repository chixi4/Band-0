
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4201b030(void)

{
  undefined4 uVar1;
  
  uVar1 = 0x8000;
  if ((_DAT_ram_60008068 >> 0x1e != 1) && (uVar1 = 0x10b07, _DAT_ram_60008068 >> 0x1e != 2)) {
    uVar1 = 0x21340;
  }
  return uVar1;
}

