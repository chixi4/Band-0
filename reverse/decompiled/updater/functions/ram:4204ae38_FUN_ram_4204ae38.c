
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204ae38(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 * 0x30 + _DAT_ram_3fcdfdec + 0x29) == '\0') {
    if (*(int *)(_DAT_ram_3fcdfdec + (param_1 + 1) * 0x30 + 4) != 0) {
      (*(code *)&SUB_ram_40011dfc)();
    }
  }
  while (iVar1 = (*(code *)&SUB_ram_40011be4)(param_1), iVar1 != 0) {
    FUN_ram_4039bab0();
  }
  return;
}

