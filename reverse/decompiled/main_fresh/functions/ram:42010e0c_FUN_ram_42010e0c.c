
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42010e0c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  for (iVar1 = _DAT_ram_3fcc4e20; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    iVar3 = FUN_ram_42010dee(iVar1,param_1);
    if (iVar3 != 0) {
      iVar3 = (*(code *)&SUB_ram_40010374)(*(undefined4 *)(iVar1 + 0x1c));
      iVar2 = iVar2 + iVar3;
    }
  }
  return iVar2;
}

