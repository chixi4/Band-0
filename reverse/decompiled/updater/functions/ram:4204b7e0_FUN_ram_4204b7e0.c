
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204b7e0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = _DAT_ram_3ff4fbbc;
  (*(code *)&SUB_ram_40011d5c)(3);
  (*(code *)&SUB_ram_40010044)(0x10);
  iVar1 = FUN_ram_4204d8c8(param_1);
  (*(code *)&SUB_ram_40011d60)(param_1);
  (*(code *)&SUB_ram_40011d5c)(0);
  if (iVar1 == 0) {
    iVar4 = *(int *)(iVar4 + param_1 * 0x28);
    if (iVar4 != 0) {
      puVar3 = *(uint **)(iVar4 + 0x24);
      *puVar3 = *puVar3 | 0x20000;
    }
  }
  else {
    (*(code *)&SUB_ram_40011d64)(param_1);
    piVar2 = (int *)(iVar4 + param_1 * 0x28);
    *(undefined1 *)((int)piVar2 + 0x12) = 6;
    if (*piVar2 != 0) {
      FUN_ram_42078e50();
      return;
    }
  }
  return;
}

