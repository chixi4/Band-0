
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42010f92(void)

{
  int iVar1;
  
  for (iVar1 = _DAT_ram_3fcc4e20; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    if (*(int *)(iVar1 + 0x1c) == 0) {
      FUN_ram_42010f5a(iVar1);
      if (*(int *)(iVar1 + 0x1c) != 0) {
        (*(code *)&SUB_ram_4001033c)(*(int *)(iVar1 + 0x1c),iVar1 + 0x14);
      }
    }
  }
  return;
}

