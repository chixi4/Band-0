
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_ram_420742c0(uint param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = FUN_ram_42079402();
  if (iVar2 == 1) {
    if ((_DAT_ram_3fcc4268 == (undefined2 *)0x0) ||
       (puVar3 = _DAT_ram_3fcc4268, (param_1 & 0xfffffffd) != 1)) {
      if (_DAT_ram_3fcc426c == (undefined2 *)0x0) {
        return 0;
      }
      if (4 < param_1) {
        return 0;
      }
      puVar3 = _DAT_ram_3fcc426c;
      if ((0x15U >> (param_1 & 0x1f) & 1) == 0) {
        return 0;
      }
    }
    uVar1 = *puVar3;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

