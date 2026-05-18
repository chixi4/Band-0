
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_ram_420534ac(void)

{
  uint uVar1;
  
  uVar1 = (uint)_DAT_ram_3fcb67e8;
  _DAT_ram_3fcb67e8 = _DAT_ram_3fcb67e8 + 1;
  if ((_DAT_ram_3fcb67ec != 0) && (_DAT_ram_3fcb67f0 <= uVar1)) {
    return *(undefined1 *)(_DAT_ram_3fcb67ec + (uVar1 - _DAT_ram_3fcb67f0 & 0xff));
  }
  return *(undefined1 *)(uVar1 + _DAT_ram_3fcb67f4 + 0x14);
}

