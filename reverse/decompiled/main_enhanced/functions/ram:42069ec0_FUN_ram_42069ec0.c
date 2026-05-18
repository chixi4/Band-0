
int FUN_ram_42069ec0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = ((iVar1 + 2) * 2 & 8U) + iVar1;
  iVar2 = iVar2 * (2 - iVar1 * iVar2);
  iVar2 = iVar2 * (2 - iVar1 * iVar2);
  return (iVar1 * iVar2 + -2) * iVar2;
}

