
int FUN_ram_4209be7a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + ((*(byte *)(param_2 + 5) & 0xf) + 4) * 4 + 8);
  while ((iVar1 != 0 && (iVar2 = FUN_ram_4039c0e0(iVar1 + 8,param_2,6), iVar2 != 0))) {
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1;
}

