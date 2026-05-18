
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_ram_42094d8a(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  do {
    iVar1 = _DAT_ram_3fcdfb38 + _DAT_ram_3fcb7da4;
    _DAT_ram_3fcdfb38 = iVar1;
    iVar3 = FUN_ram_40393f02(1);
    uVar2 = iVar1 - iVar3;
  } while (_DAT_ram_3fcb7da4 < uVar2);
  return uVar2 / 1000 + 1;
}

