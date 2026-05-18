
void FUN_ram_42062506(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = **(int **)(&DAT_ram_3fcc53a8 + param_1 * 4);
  uVar1 = 1 << (param_2 + 4U & 0x1f);
  if (param_3 == 1) {
    *(uint *)(iVar2 + 200) = *(uint *)(iVar2 + 200) | uVar1;
    return;
  }
  *(uint *)(iVar2 + 200) = ~uVar1 & *(uint *)(iVar2 + 200);
  return;
}

