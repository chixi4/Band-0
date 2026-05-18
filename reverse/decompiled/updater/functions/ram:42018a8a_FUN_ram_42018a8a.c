
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42018a8a(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_ram_3fcb66a8 != 0) {
    return _DAT_ram_3fcb66a8;
  }
  uVar1 = FUN_ram_4201a678(0x42008a8a);
  iVar2 = FUN_ram_420192d6(0,0xff,0);
  while( true ) {
    if (iVar2 == 0) {
      FUN_ram_40399b58();
    }
    iVar3 = FUN_ram_4201936e(iVar2);
    if ((*(uint *)(iVar3 + 0xc) <= uVar1) &&
       (uVar1 < *(uint *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x10))) break;
    iVar2 = FUN_ram_42019248(iVar2);
  }
  thunk_FUN_ram_40390608();
  _DAT_ram_3fcb66a8 = iVar3;
  return iVar3;
}

