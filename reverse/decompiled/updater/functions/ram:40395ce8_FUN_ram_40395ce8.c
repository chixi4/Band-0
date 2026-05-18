
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_ram_40395ce8(void)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar2 = (undefined1 *)0x0;
  if (_DAT_ram_3fcc6618 != 0) {
    iVar3 = _DAT_ram_3fcc6614 + 1;
    puVar2 = (undefined1 *)0x0;
    bVar1 = _DAT_ram_3fcc6614 == 0;
    _DAT_ram_3fcc6614 = iVar3;
    if (bVar1) {
      _DAT_ram_600ce000 = _DAT_ram_600ce000 & 0xfffffffc;
      *(BADSPACEBASE **)_DAT_ram_3fcc65fc = register0x00002008;
      _DAT_ram_600ce010 = _DAT_ram_3fcc6600;
      _DAT_ram_600ce014 = _DAT_ram_3fcc6604;
      puVar2 = &DAT_ram_600ce000;
      _DAT_ram_600ce000 = _DAT_ram_600ce000 | 3;
    }
  }
  return puVar2;
}

