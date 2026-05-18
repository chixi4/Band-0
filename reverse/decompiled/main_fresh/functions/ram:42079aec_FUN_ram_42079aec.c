
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42079aec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3fcc4018;
  iVar2 = FUN_ram_42079a46(param_1 + 0x108);
  if (iVar2 != 0) {
    iVar3 = (*(code *)&SUB_ram_40011f94)();
    if (iVar3 == 0) {
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *_DAT_ram_3fcc416c = iVar2;
      _DAT_ram_3fcc416c = (int *)(iVar2 + 0x20);
    }
    else {
      (*(code *)&SUB_ram_40011ed8)(iVar2);
      _DAT_ram_3fcc2a02 = _DAT_ram_3fcc2a02 + 1;
    }
    *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
    *(int *)(iVar1 + 0x110) = *(int *)(iVar1 + 0x110) + 1;
  }
  return;
}

