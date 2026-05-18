
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42013dfe(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar4 = (*(code *)&SUB_ram_400104a8)();
  iVar1 = _DAT_ram_3fcc4f30;
  uVar9 = 0xffffffff;
  piVar3 = (int *)&DAT_ram_3fcb9580;
  iVar7 = 0;
  for (iVar8 = 0; iVar1 != iVar8; iVar8 = iVar8 + 1) {
    iVar6 = *piVar3;
    if (((((iVar6 != 0) && (uVar2 = *(uint *)(iVar6 + 0x10), uVar2 != 0xffffffff)) &&
         (uVar2 <= uVar4)) && (iVar5 = FUN_ram_4039c0e0(param_1,iVar6 + 0x14,uVar2), iVar5 == 0)) &&
       (((uVar2 == 0 && (uVar10 = uVar9, iVar7 == 0)) ||
        (((uVar4 <= uVar2 || (*(char *)(param_1 + uVar2) == '/')) &&
         (uVar10 = uVar2, (int)uVar9 < (int)uVar2)))))) {
      iVar7 = iVar6;
      uVar9 = uVar10;
    }
    piVar3 = piVar3 + 1;
  }
  return iVar7;
}

