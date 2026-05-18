
bool FUN_ram_420495aa(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_ram_42049594();
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar3 = FUN_ram_42049586(param_1);
    bVar1 = iVar2 == iVar3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

