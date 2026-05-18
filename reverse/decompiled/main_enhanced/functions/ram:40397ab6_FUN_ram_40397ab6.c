
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_ram_40397ab6(void)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar2 = (undefined1 *)0x0;
  if (_DAT_ram_3fcd4eb8 != 0) {
    iVar3 = _DAT_ram_3fcd4eb4 + 1;
    puVar2 = (undefined1 *)0x0;
    bVar1 = _DAT_ram_3fcd4eb4 == 0;
    _DAT_ram_3fcd4eb4 = iVar3;
    if (bVar1) {
      _DAT_ram_600ce000 = _DAT_ram_600ce000 & 0xfffffffc;
      *(BADSPACEBASE **)_DAT_ram_3fcd4e9c = register0x00002008;
      _DAT_ram_600ce010 = _DAT_ram_3fcd4ea0;
      _DAT_ram_600ce014 = _DAT_ram_3fcd4ea4;
      puVar2 = &DAT_ram_600ce000;
      _DAT_ram_600ce000 = _DAT_ram_600ce000 | 3;
    }
  }
  return puVar2;
}

