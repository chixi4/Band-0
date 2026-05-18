
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42010e84(void)

{
  int iVar1;
  int iVar2;
  
  for (iVar1 = _DAT_ram_3fcb6598; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    if (*(int *)(iVar1 + 0x1c) == 0) {
      iVar2 = (*(code *)&SUB_ram_40010338)
                        (*(int *)(iVar1 + 0xc),*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc));
      *(int *)(iVar1 + 0x1c) = iVar2;
      if (iVar2 != 0) {
        (*(code *)&SUB_ram_4001033c)(iVar2,iVar1 + 0x14);
      }
    }
  }
  return;
}

