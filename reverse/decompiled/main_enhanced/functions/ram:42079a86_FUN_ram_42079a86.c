
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42079a86(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3fcc4018;
  iVar2 = FUN_ram_42079a46(param_1 + 0x108);
  if (iVar2 != 0) {
    (*(code *)&SUB_ram_40011fa4)();
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
    *(int *)(iVar1 + 0x114) = *(int *)(iVar1 + 0x114) + 1;
    if (*(int *)(param_1 + 0x10c) + *(int *)(param_1 + 0x108) == 0) {
      FUN_ram_420799d0(param_1,0);
    }
    _DAT_ram_3fcc2a04 = _DAT_ram_3fcc2a04 + 1;
  }
  return;
}

