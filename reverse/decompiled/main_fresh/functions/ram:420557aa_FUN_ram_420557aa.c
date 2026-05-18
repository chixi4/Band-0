
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_ram_420557aa(void)

{
  uint uVar1;
  
  uVar1 = (uint)_DAT_ram_3fcc5318;
  _DAT_ram_3fcc5318 = _DAT_ram_3fcc5318 + 1;
  if ((_DAT_ram_3fcc531c != 0) && (_DAT_ram_3fcc5320 <= uVar1)) {
    return *(undefined1 *)(_DAT_ram_3fcc531c + (uVar1 - _DAT_ram_3fcc5320 & 0xff));
  }
  return *(undefined1 *)(uVar1 + _DAT_ram_3fcc5324 + 0x14);
}

