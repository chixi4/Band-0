
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42079dd8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3fcc4018;
  iVar2 = *(int *)(_DAT_ram_3fcc4018 + 0xec);
  FUN_ram_42079c4c(param_1,1);
  if (((*(uint *)(param_1 + 0xc) & 0x10) != 0) &&
     (iVar3 = *(int *)(iVar1 + 0x104) + -1, *(int *)(iVar1 + 0x104) = iVar3, iVar3 == 0)) {
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xffffffef;
    FUN_ram_42079c4c(iVar2,0);
    return;
  }
  return;
}

