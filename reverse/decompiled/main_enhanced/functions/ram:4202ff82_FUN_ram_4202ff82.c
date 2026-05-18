
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4202ff82(void)

{
  undefined1 *puVar1;
  
  if ((_DAT_ram_3fcb6ba4 == (undefined1 *)0x0) &&
     (_DAT_ram_3fcb6ba4 = (undefined1 *)FUN_ram_403a5e02(1,0x10),
     _DAT_ram_3fcb6ba4 == (undefined1 *)0x0)) {
    return 6;
  }
  puVar1 = _DAT_ram_3fcb6ba4;
  *_DAT_ram_3fcb6ba4 = 0xfb;
  puVar1[1] = 0x34;
  puVar1[2] = 0x9b;
  puVar1[3] = 0x5f;
  puVar1[4] = 0x80;
  puVar1[7] = 0x80;
  puVar1[9] = 0x10;
  return 0;
}

