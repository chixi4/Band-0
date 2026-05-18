
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42079d68(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3fcc4018;
  iVar2 = *(int *)(_DAT_ram_3fcc4018 + 0xec);
  iVar3 = *(int *)(_DAT_ram_3fcc4018 + 0x104);
  if (param_2 == 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffef;
    iVar3 = iVar3 + -1;
    *(int *)(iVar1 + 0x104) = iVar3;
    if (iVar3 == 0) {
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xffffffef;
      FUN_ram_42079c4c();
    }
    FUN_ram_420799d0(param_1,0);
    if (*(int *)(param_1 + 0x108) != 0) {
      FUN_ram_42079c4c(param_1,0);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10;
    iVar3 = iVar3 + 1;
    *(int *)(iVar1 + 0x104) = iVar3;
    if (0 < iVar3) {
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x10;
    }
  }
  return;
}

