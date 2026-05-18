
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420630f2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_42061e92(_DAT_ram_3fcb61f0);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    iVar1 = FUN_ram_4206255c(_DAT_ram_3fcb61f0);
    if (*(int *)(param_1 + 0x28) != iVar1 + 8) {
      return 0xffffffff;
    }
    iVar3 = *(int *)(param_1 + 0x24);
    iVar1 = FUN_ram_4206255c(_DAT_ram_3fcb61f0);
    if ((iVar1 != _DAT_ram_3fcb61b4) ||
       (iVar2 = FUN_ram_40399d6c(0x3fcb6194,iVar3 + 8,iVar1), iVar2 != 0)) {
      iVar2 = FUN_ram_4203973a(0,iVar3);
      if (iVar2 < 0) {
        return 0xffffffff;
      }
      _DAT_ram_3fcb61b4 = iVar1;
      FUN_ram_40399daa(0x3fcb6194,iVar3 + 8,iVar1);
    }
  }
  return 0;
}

