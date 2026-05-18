
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204b8d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  
  iVar1 = _DAT_ram_3ff4fbbc;
  (*(code *)&SUB_ram_40011d5c)(3);
  (*(code *)&SUB_ram_40010044)(0x10);
  iVar3 = FUN_ram_4204d8c8(param_1);
  (*(code *)&SUB_ram_40011d60)(param_1);
  piVar5 = (int *)(param_1 * 0x28 + iVar1);
  (*(code *)&SUB_ram_40011d5c)(0);
  iVar2 = *piVar5;
  if (iVar3 == 0) {
    if (iVar2 == 0) {
      return;
    }
    puVar4 = *(uint **)(iVar2 + 0x24);
    *puVar4 = *puVar4 | 0x20000;
    if (*(char *)(iVar2 + 0x1a) != '\x05') {
      return;
    }
    if (*(int *)(((puVar4[4] >> 0x14 & 0xf) + 1) * 0x30 + _DAT_ram_3fcdfdec + 4) == 0) {
      return;
    }
    (*(code *)&SUB_ram_40011dfc)();
    return;
  }
  (*(code *)&SUB_ram_40011d64)(param_1);
  if (iVar2 == 0) {
    return;
  }
  if ((**(uint **)(iVar2 + 0x24) & 0x400000) == 0) {
    if (*(char *)(iVar2 + 0x1a) != '\x05') {
      FUN_ram_4039bab0(iVar2);
      goto LAB_ram_4204b974;
    }
    if (*(int *)((((*(uint **)(iVar2 + 0x24))[4] >> 0x14 & 0xf) + 1) * 0x30 + _DAT_ram_3fcdfdec + 4)
        == 0) goto LAB_ram_4204b974;
  }
  (*(code *)&SUB_ram_40011dfc)();
LAB_ram_4204b974:
  *piVar5 = 0;
  *(undefined1 *)(iVar1 + param_1 * 0x28 + 0x12) = 0;
  return;
}

